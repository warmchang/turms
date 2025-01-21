/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.infra.plugin;

import java.io.File;
import java.io.IOException;
import java.lang.reflect.Method;
import java.net.URI;
import java.nio.charset.StandardCharsets;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.nio.file.StandardWatchEventKinds;
import java.nio.file.WatchEvent;
import java.time.Duration;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.zip.ZipFile;
import jakarta.annotation.Nullable;

import io.netty.handler.codec.http.HttpStatusClass;
import lombok.Getter;
import org.graalvm.polyglot.Engine;
import org.graalvm.polyglot.SandboxPolicy;
import org.jctools.maps.NonBlockingIdentityHashMap;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ApplicationListener;
import org.springframework.context.event.ContextRefreshedEvent;
import org.springframework.stereotype.Component;
import reactor.core.publisher.Mono;
import reactor.netty.http.client.HttpClient;
import reactor.netty.resources.ConnectionProvider;
import reactor.netty.transport.ProxyProvider;

import im.turms.server.common.access.admin.web.MultipartFile;
import im.turms.server.common.infra.application.JobShutdownOrder;
import im.turms.server.common.infra.application.TurmsApplicationContext;
import im.turms.server.common.infra.cluster.node.Node;
import im.turms.server.common.infra.cluster.node.NodeType;
import im.turms.server.common.infra.codec.Base16Util;
import im.turms.server.common.infra.collection.CollectionUtil;
import im.turms.server.common.infra.exception.FeatureDisabledException;
import im.turms.server.common.infra.io.FileChangeEvent;
import im.turms.server.common.infra.io.FileUtil;
import im.turms.server.common.infra.io.InputOutputException;
import im.turms.server.common.infra.lang.ClassUtil;
import im.turms.server.common.infra.lang.StringUtil;
import im.turms.server.common.infra.logging.core.logger.Logger;
import im.turms.server.common.infra.logging.core.logger.LoggerFactory;
import im.turms.server.common.infra.netty.ByteBufUtil;
import im.turms.server.common.infra.plugin.invoker.FirstExtensionPointInvoker;
import im.turms.server.common.infra.plugin.invoker.SequentialExtensionPointInvoker;
import im.turms.server.common.infra.plugin.invoker.SimultaneousExtensionPointInvoker;
import im.turms.server.common.infra.property.TurmsPropertiesManager;
import im.turms.server.common.infra.property.constant.DuplicateClassLoadStrategy;
import im.turms.server.common.infra.property.constant.PluginType;
import im.turms.server.common.infra.property.env.common.plugin.JavaPluginProperties;
import im.turms.server.common.infra.property.env.common.plugin.JsPluginDebugProperties;
import im.turms.server.common.infra.property.env.common.plugin.JsPluginProperties;
import im.turms.server.common.infra.property.env.common.plugin.NetworkPluginProperties;
import im.turms.server.common.infra.property.env.common.plugin.NetworkProperties;
import im.turms.server.common.infra.property.env.common.plugin.PluginProperties;
import im.turms.server.common.infra.property.env.common.plugin.ProxyProperties;
import im.turms.server.common.infra.security.MessageDigestPool;

/**
 * @author James Chen
 */
@Component
public class PluginManager implements ApplicationListener<ContextRefreshedEvent> {

    private static final Logger LOGGER = LoggerFactory.getLogger(PluginManager.class);

    private static final String EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX = "_network_.";

    @Getter
    private final boolean enabled;
    private final Path pluginDir;

    private final boolean allowSaveJavaPlugins;
    private final DuplicateClassLoadStrategy duplicateClassLoadStrategy;

    private final boolean allowSaveJsPlugins;
    private final boolean isJsEnabled;
    private final boolean isJsDebugEnabled;
    private final String jsInspectHost;
    private final int jsInspectPort;

    private final PluginRepository pluginRepository;
    private final NodeType nodeType;
    private final ApplicationContext context;
    /**
     * The object is {@link Engine} in fact, but we don't declare it as {@link Engine} because it is
     * an optional class and Spring will throw when creating the bean when it cannot find the class
     */
    @Nullable
    private final Object engine;
    private final Object sandboxPolicy;

    private final Map<Class<? extends ExtensionPoint>, List<ExtensionPointEventListener<?>>> extensionPointClassToEventListener =
            new NonBlockingIdentityHashMap<>();

    public PluginManager(
            Node node,
            ApplicationContext context,
            TurmsApplicationContext applicationContext,
            TurmsPropertiesManager propertiesManager) {
        this.nodeType = node.getNodeType();
        this.context = context;
        PluginProperties pluginProperties = propertiesManager.getLocalProperties()
                .getPlugin();
        enabled = pluginProperties.isEnabled();
        pluginRepository = new PluginRepository();
        pluginDir = ensurePluginDirExists(applicationContext.getHome(), pluginProperties.getDir());

        JavaPluginProperties javaPluginProperties = pluginProperties.getJava();
        allowSaveJavaPlugins = javaPluginProperties.isAllowSave();
        duplicateClassLoadStrategy = javaPluginProperties.getDuplicateClassLoadStrategy();

        isJsEnabled = ClassUtil.exists("org.graalvm.polyglot.Engine");
        PluginFinder.FindResult findResult = PluginFinder.find(pluginDir, isJsEnabled);
        List<ZipFile> zipFiles = findResult.zipFiles();
        try {
            loadJavaPlugins(zipFiles);
        } catch (Exception e) {
            RuntimeException exception = new RuntimeException("Failed to load Java plugins", e);
            for (ZipFile zipFile : zipFiles) {
                try {
                    zipFile.close();
                } catch (IOException ex) {
                    exception.addSuppressed(new InputOutputException(
                            "Caught an error while closing the zip file",
                            ex));
                }
            }
            throw exception;
        }
        if (isJsEnabled) {
            JsPluginProperties jsPluginProperties = pluginProperties.getJs();
            JsPluginDebugProperties debugProperties = jsPluginProperties.getDebug();
            allowSaveJsPlugins = jsPluginProperties.isAllowSave();
            isJsDebugEnabled = debugProperties.isEnabled();
            jsInspectHost = debugProperties.getInspectHost();
            jsInspectPort = debugProperties.getInspectPort();
            engine = Engine.newBuilder()
                    .option("engine.WarnInterpreterOnly", "false")
                    .build();
            sandboxPolicy = switch (jsPluginProperties.getSandboxPolicy()) {
                case TRUSTED -> SandboxPolicy.TRUSTED;
                case CONSTRAINED -> SandboxPolicy.CONSTRAINED;
                case ISOLATED -> SandboxPolicy.ISOLATED;
                case UNTRUSTED -> SandboxPolicy.UNTRUSTED;
            };
            loadJsPlugins(findResult.jsFiles());
        } else {
            allowSaveJsPlugins = false;
            isJsDebugEnabled = false;
            jsInspectHost = null;
            jsInspectPort = 0;
            engine = null;
            sandboxPolicy = null;
        }
        loadNetworkPlugins(pluginProperties.getNetwork());
        if (pluginProperties.isWatchDir()) {
            FileUtil.watchDir(pluginDir)
                    .subscribe(fileChangeEvent -> {
                        try {
                            handleFileChangeEvent(fileChangeEvent);
                        } catch (Exception e) {
                            LOGGER.error("Caught an error while handling file change event", e);
                        }
                    });
        }
        applicationContext.addShutdownHook(JobShutdownOrder.CLOSE_PLUGINS,
                timeoutMillis -> destroy());
    }

    /**
     * @implNote Start plugins after all beans are ready so that plugins can get any bean when
     *           starting.
     */
    @Override
    public void onApplicationEvent(ContextRefreshedEvent event) {
        if (enabled) {
            startPlugins().timeout(Duration.ofMinutes(10))
                    .subscribe(null, LOGGER::error, () -> LOGGER.info("All plugins are started"));
        }
    }

    private Mono<Void> destroy() {
        return stopPlugins().materialize()
                .flatMap(signal -> {
                    Throwable stopPluginsException = signal.getThrowable();
                    Exception closeEngineException = null;
                    if (engine != null) {
                        try {
                            ((Engine) engine).close(true);
                        } catch (Exception e) {
                            closeEngineException = e;
                        }
                    }
                    if (stopPluginsException != null || closeEngineException != null) {
                        Exception e = new RuntimeException("Caught errors while destroying");
                        if (stopPluginsException != null) {
                            e.addSuppressed(stopPluginsException);
                        }
                        if (closeEngineException != null) {
                            e.addSuppressed(closeEngineException);
                        }
                        return Mono.error(e);
                    }
                    return Mono.empty();
                });
    }

    private void handleFileChangeEvent(FileChangeEvent fileChangeEvent) {
        WatchEvent.Kind<Path> kind = fileChangeEvent.kind();
        Path path = fileChangeEvent.absPath();
        if (kind == StandardWatchEventKinds.ENTRY_CREATE) {
            Object file = PluginFinder.find(isJsEnabled, path);
            if (file != null) {
                if (file instanceof ZipFile zipFile) {
                    loadJavaPluginOrCloseFile(zipFile);
                } else if (file instanceof JsFile jsFile) {
                    loadJsPlugin(jsFile.script(), jsFile.path());
                }
            }
        } else if (kind == StandardWatchEventKinds.ENTRY_DELETE) {
            pluginRepository.removePlugins(path);
        } else if (kind == StandardWatchEventKinds.ENTRY_MODIFY) {
            pluginRepository.removePlugins(path);
            Object file = PluginFinder.find(isJsEnabled, path);
            if (file != null) {
                if (file instanceof ZipFile zipFile) {
                    loadJavaPluginOrCloseFile(zipFile);
                } else if (file instanceof JsFile jsFile) {
                    loadJsPlugin(jsFile.script(), jsFile.path());
                }
            }
        }
    }

    private Path ensurePluginDirExists(Path home, String pluginDir) {
        Path path = home.resolve(pluginDir)
                .toAbsolutePath();
        if (Files.isDirectory(path)) {
            return path;
        }
        try {
            Files.createDirectories(path);
        } catch (FileAlreadyExistsException e) {
            throw new RuntimeException(
                    "The path ("
                            + path
                            + ") of the plugin directory points to an existing file",
                    e);
        } catch (IOException e) {
            throw new RuntimeException(
                    "Failed to create the plugin directory: "
                            + path,
                    e);
        }
        return path;
    }

    private void initAndRegisterPlugin(Plugin plugin) {
        plugin.onExtensionStarted(this::notifyExtensionPointEventListeners);
        pluginRepository.register(plugin);
    }

    private void loadNetworkPlugins(NetworkProperties properties) {
        List<NetworkPluginProperties> propertiesList = properties.getPlugins();
        if (propertiesList.isEmpty()) {
            return;
        }
        ConnectionProvider connectionProvider = ConnectionProvider.newConnection();
        HttpClient client = HttpClient.create(connectionProvider);
        ProxyProperties proxy = properties.getProxy();
        if (proxy.isEnabled()) {
            client = client.proxy(spec -> {
                String host = proxy.getHost();
                if (StringUtil.isBlank(host)) {
                    throw new IllegalArgumentException("The host must not be blank");
                }
                ProxyProvider.Builder builder = spec.type(ProxyProvider.Proxy.HTTP)
                        .host(host)
                        .port(proxy.getPort())
                        .connectTimeoutMillis(proxy.getConnectTimeoutMillis());
                String username = proxy.getUsername();
                String password = proxy.getPassword();
                if (StringUtil.isNotBlank(username)) {
                    builder.username(username);
                }
                if (StringUtil.isNotBlank(password)) {
                    builder.password(s -> password);
                }
            });
        }
        List<Mono<?>> monos = new ArrayList<>(propertiesList.size());
        for (NetworkPluginProperties pluginProperties : propertiesList) {
            monos.add(loadNetworkPlugin(client, pluginProperties));
        }
        Mono.when(monos)
                .doFinally(type -> connectionProvider.dispose())
                // No need timeout here because we use the request timeout
                .block();
    }

    private Mono<Void> loadNetworkPlugin(HttpClient client, NetworkPluginProperties properties) {
        String url = properties.getUrl();
        if (StringUtil.isBlank(url)) {
            return Mono.error(new IllegalArgumentException("The plugin URL must not be blank"));
        }
        URI uri;
        try {
            uri = URI.create(url);
        } catch (Exception e) {
            return Mono.error(new IllegalArgumentException(
                    "Invalid plugin URL: "
                            + url,
                    e));
        }
        String fileName = Paths.get(uri.getPath())
                .getFileName()
                .toString();
        boolean isJavaPlugin;
        PluginType type = properties.getType();
        String newFileName;
        if (type == PluginType.AUTO) {
            isJavaPlugin = fileName.endsWith(".jar");
            boolean isJsPlugin = !isJavaPlugin && fileName.endsWith(".js");
            if (!isJavaPlugin && !isJsPlugin) {
                return Mono.error(new IllegalArgumentException(
                        "Cannot detect the plugin type from the URL: "
                                + url
                                + ". The URL must end with \".jar\" for Java plugins or \".js\" for JavaScript plugins"));
            }
            newFileName = EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX + fileName;
        } else {
            isJavaPlugin = type == PluginType.JAVA;
            newFileName = fileName.endsWith(".jar") || fileName.endsWith(".js")
                    ? EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX + fileName
                    : EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX + fileName + (isJavaPlugin
                            ? ".jar"
                            : ".js");
        }
        Path path = pluginDir.resolve(newFileName);
        File file = path.toFile();
        if (file.exists()) {
            if (properties.isUseLocalCache()) {
                // No need to load cached network plugins here
                // because the plugin manager will load them as local plugins
                return Mono.empty();
            } else {
                file.delete();
            }
        }
        NetworkPluginProperties.DownloadProperties downloadProperties = properties.getDownload();
        return client.followRedirect(true)
                .responseTimeout(Duration.ofMillis(downloadProperties.getTimeoutMillis()))
                .request(downloadProperties.getHttpMethod()
                        .getMethod())
                .uri(uri)
                .responseSingle((response, bodyMono) -> {
                    int code = response.status()
                            .code();
                    return HttpStatusClass.SUCCESS.contains(code)
                            ? bodyMono
                            : Mono.error(new RuntimeException(
                                    "Expected a success code, but got: "
                                            + code));
                })
                .doOnError(t -> LOGGER.error("Failed to download the plugin with the URL: "
                        + url, t))
                .doOnSuccess(buffer -> {
                    LOGGER.info("Downloaded the plugin with the URL: "
                            + url);
                    if (isJavaPlugin) {
                        if (!allowSaveJavaPlugins) {
                            file.deleteOnExit();
                        }
                    } else if (isJsEnabled && !allowSaveJsPlugins) {
                        file.deleteOnExit();
                    }
                    try {
                        Files.createDirectories(pluginDir);
                    } catch (IOException e) {
                        throw new InputOutputException(
                                "Failed to create the plugin directory: "
                                        + pluginDir,
                                e);
                    }
                    FileUtil.write(file, buffer);
                    if (isJavaPlugin) {
                        ZipFile zipFile;
                        try {
                            zipFile = new ZipFile(file);
                        } catch (IOException e) {
                            throw new InputOutputException(
                                    "Failed to new a zip file from the file: "
                                            + path,
                                    e);
                        }
                        loadJavaPluginOrCloseFile(zipFile);
                    } else {
                        if (isJsEnabled) {
                            String script = ByteBufUtil.readString(buffer);
                            loadJsPlugin(script, path);
                        }
                    }
                })
                .doOnSubscribe(subscription -> LOGGER.info("Downloading the plugin with the URL: "
                        + url))
                .then();
    }

    public void loadJavaPlugins(List<MultipartFile> files, boolean save) {
        if (!allowSaveJavaPlugins && save) {
            throw new FeatureDisabledException(
                    "Cannot save Java plugins since it has been disabled");
        }
        for (MultipartFile file : files) {
            String fileName = file.name();
            ZipFile zipFile;
            File jarFile;
            if (save) {
                fileName = file.basename()
                        + ".jar";
                Path target = pluginDir.resolve(EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX + fileName);
                if (Files.exists(target)) {
                    throw new IllegalArgumentException(
                            "The plugin jar file ("
                                    + fileName
                                    + ") already exists");
                }
                // Ensure the plugin directory exists every time
                // because it may be removed by users unexpectedly
                try {
                    Files.createDirectories(pluginDir);
                } catch (IOException e) {
                    throw new InputOutputException(
                            "Failed to create the plugin directory: "
                                    + pluginDir,
                            e);
                }
                Path source = file.file()
                        .toPath();
                try {
                    Files.move(source, target);
                } catch (IOException e) {
                    throw new InputOutputException(
                            "Failed to move the plugin JAR file from ("
                                    + source
                                    + ") to ("
                                    + target
                                    + ")",
                            e);
                }
                jarFile = target.toFile();
            } else {
                jarFile = file.file();
                jarFile.deleteOnExit();
                // We need to retain the JAR file because there may some
                // classes or resources in the JAR file haven't been loaded
                file.retain();
            }
            try {
                zipFile = new ZipFile(jarFile);
            } catch (IOException e) {
                throw new MalformedPluginArchiveException(
                        "Failed to load the jar file: "
                                + fileName,
                        e);
            }
            try {
                JavaPluginDescriptor descriptor = JavaPluginDescriptorFactory.load(zipFile);
                if (descriptor == null) {
                    throw new MalformedPluginArchiveException(
                            "Could not load a Java plugin from the file ("
                                    + fileName
                                    + ") because it is not a Java plugin JAR file");
                }
                Plugin plugin = JavaPluginFactory
                        .create(descriptor, zipFile, duplicateClassLoadStrategy, nodeType, context);
                initAndRegisterPlugin(plugin);
            } catch (Exception e) {
                try {
                    zipFile.close();
                } catch (IOException closeException) {
                    e.addSuppressed(
                            new RuntimeException("Caught an error while closing the zip file", e));
                }
                throw e;
            }
        }
    }

    private void loadJavaPlugins(List<ZipFile> zipFiles) {
        for (ZipFile zipFile : zipFiles) {
            JavaPluginDescriptor descriptor = JavaPluginDescriptorFactory.load(zipFile);
            if (descriptor == null) {
                continue;
            }
            Plugin plugin = JavaPluginFactory
                    .create(descriptor, zipFile, duplicateClassLoadStrategy, nodeType, context);
            initAndRegisterPlugin(plugin);
        }
    }

    private boolean loadJavaPlugin(ZipFile zipFile) {
        JavaPluginDescriptor descriptor = JavaPluginDescriptorFactory.load(zipFile);
        if (descriptor == null) {
            return false;
        }
        Plugin plugin = JavaPluginFactory
                .create(descriptor, zipFile, duplicateClassLoadStrategy, nodeType, context);
        initAndRegisterPlugin(plugin);
        return true;
    }

    private void loadJavaPluginOrCloseFile(ZipFile zipFile) {
        boolean loaded = false;
        try {
            loaded = loadJavaPlugin(zipFile);
        } catch (Exception e) {
            try {
                zipFile.close();
            } catch (IOException ex) {
                e.addSuppressed(
                        new InputOutputException("Caught an error while closing the zip file", ex));
            }
        }
        if (!loaded) {
            try {
                zipFile.close();
            } catch (IOException ex) {
                throw new InputOutputException("Caught an error while closing the zip file", ex);
            }
        }
    }

    public void loadJsPlugins(Collection<JsFile> files) {
        if (CollectionUtil.isEmpty(files)) {
            return;
        }
        for (JsFile file : files) {
            loadJsPlugin(file.script(), file.path());
        }
    }

    public void loadJsPlugins(Collection<JsPluginScript> scripts, boolean save) {
        if (!isJsEnabled) {
            throw new UnsupportedOperationException(
                    "JavaScript plugins are disabled because the classes of GraalJS are not loaded");
        }
        if (!allowSaveJsPlugins && save) {
            throw new FeatureDisabledException(
                    "Cannot save JavaScript plugins since it has been disabled");
        }
        if (CollectionUtil.isEmpty(scripts)) {
            return;
        }
        for (JsPluginScript script : scripts) {
            String code = script.code();
            Plugin plugin = loadJsPlugin(code, null);
            if (save) {
                Path path = saveJsPlugin(script.fileName(), code);
                plugin.descriptor()
                        .setPath(path);
            }
        }
    }

    public JsPlugin loadJsPlugin(String script, @Nullable Path path) {
        if (!isJsEnabled) {
            throw new UnsupportedOperationException(
                    "JavaScript plugins are disabled because the classes of GraalJS are not loaded");
        }
        if (script.isBlank()) {
            throw new IllegalArgumentException("The JavaScript plugin script must not be blank");
        }
        JsPlugin jsPlugin = JsPluginFactory.create(context,
                (Engine) engine,
                script,
                path,
                (SandboxPolicy) sandboxPolicy,
                isJsDebugEnabled,
                jsInspectHost,
                jsInspectPort);
        initAndRegisterPlugin(jsPlugin);
        return jsPlugin;
    }

    private Path saveJsPlugin(@Nullable String fileName, String code) {
        byte[] bytes = code.getBytes(StandardCharsets.UTF_8);
        boolean isCustomFileName = fileName != null;
        if (fileName == null) {
            byte[] digest = MessageDigestPool.getSha1()
                    .digest(bytes);
            fileName = Base16Util.encodeAsString(digest, false);
        }
        Path path = pluginDir.resolve(EXTERNAL_PLUGIN_ARCHIVE_NAME_PREFIX
                + fileName
                + ".js");
        if (Files.exists(path)) {
            if (isCustomFileName) {
                throw new IllegalArgumentException(
                        "The JavaScript plugin file ("
                                + fileName
                                + ") already exists");
            } else {
                return path;
            }
        }
        try {
            Files.write(path,
                    bytes,
                    StandardOpenOption.CREATE,
                    StandardOpenOption.TRUNCATE_EXISTING);
        } catch (Exception e) {
            throw new InputOutputException(
                    "Failed to write the JavaScript plugin to the path: "
                            + path,
                    e);
        }
        return path;
    }

    public <T extends ExtensionPoint> List<T> getExtensionPoints(Class<T> clazz) {
        return pluginRepository.getExtensionPoints(clazz);
    }

    public List<Class<? extends ExtensionPoint>> getExtensionPoints(TurmsExtension extension) {
        return extension.getExtensionPointClasses();
    }

    public Collection<Plugin> getPlugins() {
        return pluginRepository.getPlugins();
    }

    public List<Plugin> getPlugins(Set<String> ids) {
        return pluginRepository.getPlugins(ids);
    }

    public Mono<Integer> startPlugins() {
        Collection<Plugin> plugins = pluginRepository.getPlugins();
        return startPlugins(plugins);
    }

    public Mono<Integer> startPlugins(Set<String> ids) {
        List<Plugin> plugins = pluginRepository.getPlugins(ids);
        return startPlugins(plugins);
    }

    public Mono<Integer> startPlugins(Collection<Plugin> plugins) {
        List<Mono<Void>> startMonos = new ArrayList<>(plugins.size());
        for (Plugin plugin : plugins) {
            startMonos.add(plugin.start());
        }
        return Mono.whenDelayError(startMonos)
                .onErrorResume(t -> Mono
                        .error(new RuntimeException("Caught errors while starting plugins", t)))
                .thenReturn(plugins.size());
    }

    public Mono<Integer> stopPlugins() {
        Collection<Plugin> plugins = pluginRepository.getPlugins();
        return stopPlugins(plugins);
    }

    public Mono<Integer> stopPlugins(Set<String> ids) {
        List<Plugin> plugins = pluginRepository.getPlugins(ids);
        return stopPlugins(plugins);
    }

    public Mono<Integer> stopPlugins(Collection<Plugin> plugins) {
        List<Mono<Void>> stopMonos = new ArrayList<>(plugins.size());
        for (Plugin plugin : plugins) {
            stopMonos.add(plugin.stop());
        }
        return Mono.whenDelayError(stopMonos)
                .onErrorResume(t -> Mono
                        .error(new RuntimeException("Caught errors while stopping plugins", t)))
                .thenReturn(plugins.size());
    }

    public Mono<Integer> resumePlugins(Set<String> ids) {
        List<Plugin> plugins = pluginRepository.getPlugins(ids);
        List<Mono<Void>> resumeMonos = new ArrayList<>(plugins.size());
        for (Plugin plugin : plugins) {
            resumeMonos.add(plugin.resume());
        }
        return Mono.whenDelayError(resumeMonos)
                .onErrorResume(t -> Mono
                        .error(new RuntimeException("Caught errors while resuming plugins", t)))
                .thenReturn(plugins.size());
    }

    public Mono<Integer> pausePlugins(Set<String> ids) {
        List<Plugin> plugins = pluginRepository.getPlugins(ids);
        List<Mono<Void>> pauseMonos = new ArrayList<>(plugins.size());
        for (Plugin plugin : plugins) {
            pauseMonos.add(plugin.pause());
        }
        return Mono.whenDelayError(pauseMonos)
                .onErrorResume(t -> Mono
                        .error(new RuntimeException("Caught errors while pausing plugins", t)))
                .thenReturn(plugins.size());
    }

    public Mono<Void> deletePlugins(Set<String> ids, boolean deleteLocalFiles) {
        List<Plugin> plugins = pluginRepository.removePlugins(ids);
        return stopPlugins(plugins).then(Mono.fromRunnable(() -> {
            if (!deleteLocalFiles) {
                return;
            }
            for (Plugin plugin : plugins) {
                try {
                    destroyPlugin(plugin);
                } catch (Exception e) {
                    LOGGER.error("Caught an error while deleting the plugin: {}",
                            plugin.descriptor()
                                    .getId(),
                            e);
                }
            }
        }));
    }

    private void destroyPlugin(Plugin plugin) throws Exception {
        Exception exception = null;
        PluginDescriptor descriptor = plugin.descriptor();
        Path path = descriptor.getPath();
        try {
            plugin.close();
        } catch (Exception e) {
            exception = new RuntimeException(
                    "Caught an error while closing the plugin: "
                            + descriptor.getId(),
                    e);
        }
        if (path != null) {
            try {
                Files.deleteIfExists(path);
            } catch (IOException e) {
                e = new IOException(
                        "Caught an error while deleting the plugin file: "
                                + path,
                        e);
                if (exception == null) {
                    throw e;
                } else {
                    exception.addSuppressed(e);
                }
            }
        }
        if (exception != null) {
            throw exception;
        }
    }

    public <T extends ExtensionPoint> boolean hasRunningExtensions(Class<T> extensionPointClass) {
        return pluginRepository.hasRunningExtensions(extensionPointClass);
    }

    public <T extends ExtensionPoint, R> Mono<R> invokeFirstExtensionPoint(
            Class<T> extensionPointClass,
            Method method,
            @Nullable Mono<R> defaultValue,
            FirstExtensionPointInvoker<T, R> invoker) {
        List<T> extensionPoints = pluginRepository.getExtensionPoints(extensionPointClass);
        int size = extensionPoints.size();
        if (size == 0) {
            return defaultValue == null
                    ? Mono.empty()
                    : defaultValue;
        }
        T extensionPoint = extensionPoints.getFirst();
        TurmsExtension extension = (TurmsExtension) extensionPoint;
        if (!extension.isRunning()) {
            return defaultValue == null
                    ? Mono.empty()
                    : defaultValue;
        }
        try {
            return invoker.invoke(extensionPoint)
                    .onErrorMap(t -> translateException(t, method, extension));
        } catch (Exception e) {
            return Mono.error(translateException(e, method, extension));
        }
    }

    public <T extends ExtensionPoint, R> Mono<R> invokeExtensionPointsSequentially(
            Class<T> extensionPointClass,
            Method method,
            SequentialExtensionPointInvoker<T, R> invoker) {
        return invokeExtensionPointsSequentially(extensionPointClass, method, null, invoker);
    }

    public <T extends ExtensionPoint, R> Mono<R> invokeExtensionPointsSequentially(
            Class<T> extensionPointClass,
            Method method,
            @Nullable R initialValue,
            SequentialExtensionPointInvoker<T, R> invoker) {
        List<T> extensionPoints = pluginRepository.getExtensionPoints(extensionPointClass);
        if (extensionPoints.isEmpty()) {
            return initialValue == null
                    ? Mono.empty()
                    : Mono.just(initialValue);
        }
        Mono<R> result = initialValue == null
                ? Mono.empty()
                : Mono.just(initialValue);
        for (ExtensionPoint extensionPoint : extensionPoints) {
            TurmsExtension extension = (TurmsExtension) extensionPoint;
            if (!extension.isRunning()) {
                continue;
            }
            try {
                result = invoker.invoke((T) extensionPoint, result)
                        .onErrorMap(t -> translateException(t, method, extension));
            } catch (Exception e) {
                Mono<R> error = Mono.error(translateException(e, method, extension));
                return result.then(error);
            }
        }
        return result;
    }

    public <T extends ExtensionPoint> Mono<Void> invokeExtensionPointsSimultaneously(
            Class<T> extensionPointClass,
            Method method,
            SimultaneousExtensionPointInvoker<T> invoker) {
        List<T> extensionPoints = pluginRepository.getExtensionPoints(extensionPointClass);
        int size = extensionPoints.size();
        if (size == 0) {
            return Mono.empty();
        }
        List<Mono<?>> list = new ArrayList<>(size);
        for (ExtensionPoint extensionPoint : extensionPoints) {
            TurmsExtension extension = (TurmsExtension) extensionPoint;
            if (!extension.isRunning()) {
                continue;
            }
            try {
                list.add(invoker.invoke((T) extensionPoint)
                        .onErrorMap(t -> translateException(t, method, extension)));
            } catch (Exception e) {
                list.add(Mono.error(translateException(e, method, extension)));
            }
        }
        if (list.isEmpty()) {
            return Mono.empty();
        }
        return Mono.whenDelayError(list);
    }

    public <T extends ExtensionPoint> void addExtensionPointEventListener(
            Class<T> extensionPointClass,
            ExtensionPointEventListener<T> listener) {
        extensionPointClassToEventListener
                .computeIfAbsent(extensionPointClass, k -> new CopyOnWriteArrayList<>())
                .add(listener);
    }

    public void notifyExtensionPointEventListeners(TurmsExtension extension) {
        List<Class<? extends ExtensionPoint>> extensionPointClasses =
                extension.getExtensionPointClasses();
        for (Class<? extends ExtensionPoint> extensionPointClass : extensionPointClasses) {
            List<ExtensionPointEventListener<?>> listeners =
                    extensionPointClassToEventListener.get(extensionPointClass);
            if (listeners == null) {
                return;
            }
            for (ExtensionPointEventListener eventListener : listeners) {
                eventListener.onExtensionStarted((ExtensionPoint) extension);
            }
        }
    }

    private Exception translateException(Throwable t, Method method, TurmsExtension extension) {
        String message = "Failed to invoke the method \""
                + ClassUtil.getMethodSignature(method)
                + "\" of the extension ("
                + extension.getClass()
                        .getName()
                + ") of the plugin: "
                + extension.getPlugin()
                        .descriptor()
                        .getId();
        return new ExtensionPointExecutionException(message, t);
    }

}