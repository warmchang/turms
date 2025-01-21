// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/file/image_file.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2ffile_2fimage_5ffile_2eproto_2epb_2eh
#define model_2ffile_2fimage_5ffile_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2ffile_2fimage_5ffile_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2ffile_2fimage_5ffile_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class ImageFile;
struct ImageFileDefaultTypeInternal;
extern ImageFileDefaultTypeInternal _ImageFile_default_instance_;
class ImageFile_Description;
struct ImageFile_DescriptionDefaultTypeInternal;
extern ImageFile_DescriptionDefaultTypeInternal _ImageFile_Description_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================

// -------------------------------------------------------------------

class ImageFile_Description final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.ImageFile.Description) */ {
   public:
    inline ImageFile_Description()
        : ImageFile_Description(nullptr) {
    }
    ~ImageFile_Description() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(ImageFile_Description* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(ImageFile_Description));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR ImageFile_Description(
        ::google::protobuf::internal::ConstantInitialized);

    inline ImageFile_Description(const ImageFile_Description& from)
        : ImageFile_Description(nullptr, from) {
    }
    inline ImageFile_Description(ImageFile_Description&& from) noexcept
        : ImageFile_Description(nullptr, std::move(from)) {
    }
    inline ImageFile_Description& operator=(const ImageFile_Description& from) {
        CopyFrom(from);
        return *this;
    }
    inline ImageFile_Description& operator=(ImageFile_Description&& from) noexcept {
        if (this == &from)
            return *this;
        if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const ImageFile_Description& default_instance() {
        return *internal_default_instance();
    }
    static inline const ImageFile_Description* internal_default_instance() {
        return reinterpret_cast<const ImageFile_Description*>(
            &_ImageFile_Description_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(ImageFile_Description& a, ImageFile_Description& b) {
        a.Swap(&b);
    }
    inline void Swap(ImageFile_Description* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(ImageFile_Description* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    ImageFile_Description* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<ImageFile_Description>(arena);
    }
    void CopyFrom(const ImageFile_Description& from);
    void MergeFrom(const ImageFile_Description& from) {
        ImageFile_Description::MergeImpl(*this, from);
    }

   private:
    static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                          const ::google::protobuf::MessageLite& from_msg);

   public:
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
#if defined(PROTOBUF_CUSTOM_VTABLE)
   private:
    static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
    static ::uint8_t* _InternalSerialize(const MessageLite& msg,
                                         ::uint8_t* target,
                                         ::google::protobuf::io::EpsCopyOutputStream* stream);

   public:
    ::size_t ByteSizeLong() const {
        return ByteSizeLong(*this);
    }
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const {
        return _InternalSerialize(*this, target, stream);
    }
#else   // PROTOBUF_CUSTOM_VTABLE
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
#endif  // PROTOBUF_CUSTOM_VTABLE
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    static void SharedDtor(MessageLite& self);
    void InternalSwap(ImageFile_Description* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.ImageFile.Description";
    }

   protected:
    explicit ImageFile_Description(::google::protobuf::Arena* arena);
    ImageFile_Description(::google::protobuf::Arena* arena, const ImageFile_Description& from);
    ImageFile_Description(::google::protobuf::Arena* arena, ImageFile_Description&& from) noexcept
        : ImageFile_Description(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<47> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUrlFieldNumber = 1,
        kOriginalFieldNumber = 2,
        kImageSizeFieldNumber = 3,
        kFileSizeFieldNumber = 4,
    };
    // string url = 1;
    void clear_url();
    const std::string& url() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_url(Arg_&& arg, Args_... args);
    std::string* mutable_url();
    PROTOBUF_NODISCARD std::string* release_url();
    void set_allocated_url(std::string* value);

   private:
    const std::string& _internal_url() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
    std::string* _internal_mutable_url();

   public:
    // optional bool original = 2;
    bool has_original() const;
    void clear_original();
    bool original() const;
    void set_original(bool value);

   private:
    bool _internal_original() const;
    void _internal_set_original(bool value);

   public:
    // optional int32 image_size = 3;
    bool has_image_size() const;
    void clear_image_size();
    ::int32_t image_size() const;
    void set_image_size(::int32_t value);

   private:
    ::int32_t _internal_image_size() const;
    void _internal_set_image_size(::int32_t value);

   public:
    // optional int32 file_size = 4;
    bool has_file_size() const;
    void clear_file_size();
    ::int32_t file_size() const;
    void set_file_size(::int32_t value);

   private:
    ::int32_t _internal_file_size() const;
    void _internal_set_file_size(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.ImageFile.Description)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 4, 0, 58, 2> _table_;

    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from,
                              const ImageFile_Description& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::internal::ArenaStringPtr url_;
        bool original_;
        ::int32_t image_size_;
        ::int32_t file_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2ffile_2fimage_5ffile_2eproto;
};
// -------------------------------------------------------------------

class ImageFile final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.ImageFile) */ {
   public:
    inline ImageFile()
        : ImageFile(nullptr) {
    }
    ~ImageFile() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(ImageFile* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(ImageFile));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR ImageFile(::google::protobuf::internal::ConstantInitialized);

    inline ImageFile(const ImageFile& from)
        : ImageFile(nullptr, from) {
    }
    inline ImageFile(ImageFile&& from) noexcept
        : ImageFile(nullptr, std::move(from)) {
    }
    inline ImageFile& operator=(const ImageFile& from) {
        CopyFrom(from);
        return *this;
    }
    inline ImageFile& operator=(ImageFile&& from) noexcept {
        if (this == &from)
            return *this;
        if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const ImageFile& default_instance() {
        return *internal_default_instance();
    }
    static inline const ImageFile* internal_default_instance() {
        return reinterpret_cast<const ImageFile*>(&_ImageFile_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 1;
    friend void swap(ImageFile& a, ImageFile& b) {
        a.Swap(&b);
    }
    inline void Swap(ImageFile* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(ImageFile* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    ImageFile* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<ImageFile>(arena);
    }
    void CopyFrom(const ImageFile& from);
    void MergeFrom(const ImageFile& from) {
        ImageFile::MergeImpl(*this, from);
    }

   private:
    static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                          const ::google::protobuf::MessageLite& from_msg);

   public:
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
#if defined(PROTOBUF_CUSTOM_VTABLE)
   private:
    static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
    static ::uint8_t* _InternalSerialize(const MessageLite& msg,
                                         ::uint8_t* target,
                                         ::google::protobuf::io::EpsCopyOutputStream* stream);

   public:
    ::size_t ByteSizeLong() const {
        return ByteSizeLong(*this);
    }
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const {
        return _InternalSerialize(*this, target, stream);
    }
#else   // PROTOBUF_CUSTOM_VTABLE
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
#endif  // PROTOBUF_CUSTOM_VTABLE
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    static void SharedDtor(MessageLite& self);
    void InternalSwap(ImageFile* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.ImageFile";
    }

   protected:
    explicit ImageFile(::google::protobuf::Arena* arena);
    ImageFile(::google::protobuf::Arena* arena, const ImageFile& from);
    ImageFile(::google::protobuf::Arena* arena, ImageFile&& from) noexcept
        : ImageFile(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<35> _class_data_;

   public:
    // nested types ----------------------------------------------------
    using Description = ImageFile_Description;

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kDataFieldNumber = 2,
        kDescriptionFieldNumber = 1,
    };
    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    int custom_attributes_size() const;

   private:
    int _internal_custom_attributes_size() const;

   public:
    void clear_custom_attributes();
    ::turms::client::model::proto::Value* mutable_custom_attributes(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    mutable_custom_attributes();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    _internal_custom_attributes() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    _internal_mutable_custom_attributes();

   public:
    const ::turms::client::model::proto::Value& custom_attributes(int index) const;
    ::turms::client::model::proto::Value* add_custom_attributes();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    custom_attributes() const;
    // optional bytes data = 2;
    bool has_data() const;
    void clear_data();
    const std::string& data() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_data(Arg_&& arg, Args_... args);
    std::string* mutable_data();
    PROTOBUF_NODISCARD std::string* release_data();
    void set_allocated_data(std::string* value);

   private:
    const std::string& _internal_data() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
    std::string* _internal_mutable_data();

   public:
    // optional .turms.client.model.proto.ImageFile.Description description = 1;
    bool has_description() const;
    void clear_description();
    const ::turms::client::model::proto::ImageFile_Description& description() const;
    PROTOBUF_NODISCARD ::turms::client::model::proto::ImageFile_Description* release_description();
    ::turms::client::model::proto::ImageFile_Description* mutable_description();
    void set_allocated_description(::turms::client::model::proto::ImageFile_Description* value);
    void unsafe_arena_set_allocated_description(
        ::turms::client::model::proto::ImageFile_Description* value);
    ::turms::client::model::proto::ImageFile_Description* unsafe_arena_release_description();

   private:
    const ::turms::client::model::proto::ImageFile_Description& _internal_description() const;
    ::turms::client::model::proto::ImageFile_Description* _internal_mutable_description();

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.ImageFile)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 2, 0, 2> _table_;

    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from,
                              const ImageFile& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr data_;
        ::turms::client::model::proto::ImageFile_Description* description_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2ffile_2fimage_5ffile_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ImageFile_Description

// string url = 1;
inline void ImageFile_Description::clear_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.ClearToEmpty();
}
inline const std::string& ImageFile_Description::url() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.Description.url)
    return _internal_url();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ImageFile_Description::set_url(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ImageFile.Description.url)
}
inline std::string* ImageFile_Description::mutable_url() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_url();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.ImageFile.Description.url)
    return _s;
}
inline const std::string& ImageFile_Description::_internal_url() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.url_.Get();
}
inline void ImageFile_Description::_internal_set_url(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.Set(value, GetArena());
}
inline std::string* ImageFile_Description::_internal_mutable_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.url_.Mutable(GetArena());
}
inline std::string* ImageFile_Description::release_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.ImageFile.Description.url)
    return _impl_.url_.Release();
}
inline void ImageFile_Description::set_allocated_url(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.url_.IsDefault()) {
        _impl_.url_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.ImageFile.Description.url)
}

// optional bool original = 2;
inline bool ImageFile_Description::has_original() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void ImageFile_Description::clear_original() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.original_ = false;
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool ImageFile_Description::original() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.Description.original)
    return _internal_original();
}
inline void ImageFile_Description::set_original(bool value) {
    _internal_set_original(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ImageFile.Description.original)
}
inline bool ImageFile_Description::_internal_original() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.original_;
}
inline void ImageFile_Description::_internal_set_original(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.original_ = value;
}

// optional int32 image_size = 3;
inline bool ImageFile_Description::has_image_size() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void ImageFile_Description::clear_image_size() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.image_size_ = 0;
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t ImageFile_Description::image_size() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.Description.image_size)
    return _internal_image_size();
}
inline void ImageFile_Description::set_image_size(::int32_t value) {
    _internal_set_image_size(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ImageFile.Description.image_size)
}
inline ::int32_t ImageFile_Description::_internal_image_size() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.image_size_;
}
inline void ImageFile_Description::_internal_set_image_size(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.image_size_ = value;
}

// optional int32 file_size = 4;
inline bool ImageFile_Description::has_file_size() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void ImageFile_Description::clear_file_size() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.file_size_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t ImageFile_Description::file_size() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.Description.file_size)
    return _internal_file_size();
}
inline void ImageFile_Description::set_file_size(::int32_t value) {
    _internal_set_file_size(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ImageFile.Description.file_size)
}
inline ::int32_t ImageFile_Description::_internal_file_size() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.file_size_;
}
inline void ImageFile_Description::_internal_set_file_size(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.file_size_ = value;
}

// -------------------------------------------------------------------

// ImageFile

// optional .turms.client.model.proto.ImageFile.Description description = 1;
inline bool ImageFile::has_description() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    PROTOBUF_ASSUME(!value || _impl_.description_ != nullptr);
    return value;
}
inline void ImageFile::clear_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.description_ != nullptr)
        _impl_.description_->Clear();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const ::turms::client::model::proto::ImageFile_Description&
ImageFile::_internal_description() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    const ::turms::client::model::proto::ImageFile_Description* p = _impl_.description_;
    return p != nullptr
               ? *p
               : reinterpret_cast<const ::turms::client::model::proto::ImageFile_Description&>(
                     ::turms::client::model::proto::_ImageFile_Description_default_instance_);
}
inline const ::turms::client::model::proto::ImageFile_Description& ImageFile::description() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.description)
    return _internal_description();
}
inline void ImageFile::unsafe_arena_set_allocated_description(
    ::turms::client::model::proto::ImageFile_Description* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (GetArena() == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.description_);
    }
    _impl_.description_ =
        reinterpret_cast<::turms::client::model::proto::ImageFile_Description*>(value);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:turms.client.model.proto.ImageFile.description)
}
inline ::turms::client::model::proto::ImageFile_Description* ImageFile::release_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::ImageFile_Description* released = _impl_.description_;
    _impl_.description_ = nullptr;
    if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
        auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
        released = ::google::protobuf::internal::DuplicateIfNonNull(released);
        if (GetArena() == nullptr) {
            delete old;
        }
    } else {
        if (GetArena() != nullptr) {
            released = ::google::protobuf::internal::DuplicateIfNonNull(released);
        }
    }
    return released;
}
inline ::turms::client::model::proto::ImageFile_Description*
ImageFile::unsafe_arena_release_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.ImageFile.description)

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::ImageFile_Description* temp = _impl_.description_;
    _impl_.description_ = nullptr;
    return temp;
}
inline ::turms::client::model::proto::ImageFile_Description*
ImageFile::_internal_mutable_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.description_ == nullptr) {
        auto* p = ::google::protobuf::MessageLite::DefaultConstruct<
            ::turms::client::model::proto::ImageFile_Description>(GetArena());
        _impl_.description_ =
            reinterpret_cast<::turms::client::model::proto::ImageFile_Description*>(p);
    }
    return _impl_.description_;
}
inline ::turms::client::model::proto::ImageFile_Description* ImageFile::mutable_description()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    _impl_._has_bits_[0] |= 0x00000002u;
    ::turms::client::model::proto::ImageFile_Description* _msg = _internal_mutable_description();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.ImageFile.description)
    return _msg;
}
inline void ImageFile::set_allocated_description(
    ::turms::client::model::proto::ImageFile_Description* value) {
    ::google::protobuf::Arena* message_arena = GetArena();
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (message_arena == nullptr) {
        delete (_impl_.description_);
    }

    if (value != nullptr) {
        ::google::protobuf::Arena* submessage_arena = (value)->GetArena();
        if (message_arena != submessage_arena) {
            value = ::google::protobuf::internal::GetOwnedMessage(
                message_arena, value, submessage_arena);
        }
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }

    _impl_.description_ =
        reinterpret_cast<::turms::client::model::proto::ImageFile_Description*>(value);
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.ImageFile.description)
}

// optional bytes data = 2;
inline bool ImageFile::has_data() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void ImageFile::clear_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.data_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ImageFile::data() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.data)
    return _internal_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ImageFile::set_data(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ImageFile.data)
}
inline std::string* ImageFile::mutable_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_data();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.ImageFile.data)
    return _s;
}
inline const std::string& ImageFile::_internal_data() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.data_.Get();
}
inline void ImageFile::_internal_set_data(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.data_.Set(value, GetArena());
}
inline std::string* ImageFile::_internal_mutable_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.data_.Mutable(GetArena());
}
inline std::string* ImageFile::release_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.ImageFile.data)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.data_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.data_.Set("", GetArena());
    }
    return released;
}
inline void ImageFile::set_allocated_data(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.data_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.data_.IsDefault()) {
        _impl_.data_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.ImageFile.data)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int ImageFile::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int ImageFile::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* ImageFile::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.ImageFile.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
ImageFile::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.ImageFile.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& ImageFile::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ImageFile.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* ImageFile::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.ImageFile.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
ImageFile::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.ImageFile.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
ImageFile::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
ImageFile::_internal_mutable_custom_attributes() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.custom_attributes_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // model_2ffile_2fimage_5ffile_2eproto_2epb_2eh