// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/conversation/conversation_settings.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2fconversation_2fconversation_5fsettings_2eproto_2epb_2eh
#define model_2fconversation_2fconversation_5fsettings_2eproto_2epb_2eh

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
#include "google/protobuf/map.h"  // IWYU pragma: export
#include "google/protobuf/map_field_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fconversation_2fconversation_5fsettings_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fconversation_2fconversation_5fsettings_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class ConversationSettings;
struct ConversationSettingsDefaultTypeInternal;
extern ConversationSettingsDefaultTypeInternal _ConversationSettings_default_instance_;
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

// -------------------------------------------------------------------

class ConversationSettings final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.ConversationSettings) */ {
   public:
    inline ConversationSettings()
        : ConversationSettings(nullptr) {
    }
    ~ConversationSettings() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(ConversationSettings* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(ConversationSettings));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR ConversationSettings(
        ::google::protobuf::internal::ConstantInitialized);

    inline ConversationSettings(const ConversationSettings& from)
        : ConversationSettings(nullptr, from) {
    }
    inline ConversationSettings(ConversationSettings&& from) noexcept
        : ConversationSettings(nullptr, std::move(from)) {
    }
    inline ConversationSettings& operator=(const ConversationSettings& from) {
        CopyFrom(from);
        return *this;
    }
    inline ConversationSettings& operator=(ConversationSettings&& from) noexcept {
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

    static const ConversationSettings& default_instance() {
        return *internal_default_instance();
    }
    static inline const ConversationSettings* internal_default_instance() {
        return reinterpret_cast<const ConversationSettings*>(
            &_ConversationSettings_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 1;
    friend void swap(ConversationSettings& a, ConversationSettings& b) {
        a.Swap(&b);
    }
    inline void Swap(ConversationSettings* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(ConversationSettings* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    ConversationSettings* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<ConversationSettings>(arena);
    }
    void CopyFrom(const ConversationSettings& from);
    void MergeFrom(const ConversationSettings& from) {
        ConversationSettings::MergeImpl(*this, from);
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
    void InternalSwap(ConversationSettings* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.ConversationSettings";
    }

   protected:
    explicit ConversationSettings(::google::protobuf::Arena* arena);
    ConversationSettings(::google::protobuf::Arena* arena, const ConversationSettings& from);
    ConversationSettings(::google::protobuf::Arena* arena, ConversationSettings&& from) noexcept
        : ConversationSettings(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<46> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kSettingsFieldNumber = 3,
        kCustomAttributesFieldNumber = 15,
        kUserIdFieldNumber = 1,
        kGroupIdFieldNumber = 2,
        kLastUpdatedDateFieldNumber = 4,
    };
    // map<string, .turms.client.model.proto.Value> settings = 3;
    int settings_size() const;

   private:
    int _internal_settings_size() const;

   public:
    void clear_settings();
    const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>& settings()
        const;
    ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>* mutable_settings();

   private:
    const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
    _internal_settings() const;
    ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
    _internal_mutable_settings();

   public:
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
    // optional int64 user_id = 1;
    bool has_user_id() const;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // optional int64 group_id = 2;
    bool has_group_id() const;
    void clear_group_id();
    ::int64_t group_id() const;
    void set_group_id(::int64_t value);

   private:
    ::int64_t _internal_group_id() const;
    void _internal_set_group_id(::int64_t value);

   public:
    // optional int64 last_updated_date = 4;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.ConversationSettings)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 5, 3, 62, 2> _table_;

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
                              const ConversationSettings& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::internal::MapFieldLite<std::string,
                                                   ::turms::client::model::proto::Value>
            settings_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t user_id_;
        ::int64_t group_id_;
        ::int64_t last_updated_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fconversation_2fconversation_5fsettings_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// ConversationSettings

// optional int64 user_id = 1;
inline bool ConversationSettings::has_user_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void ConversationSettings::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t ConversationSettings::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ConversationSettings.user_id)
    return _internal_user_id();
}
inline void ConversationSettings::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ConversationSettings.user_id)
}
inline ::int64_t ConversationSettings::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void ConversationSettings::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// optional int64 group_id = 2;
inline bool ConversationSettings::has_group_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void ConversationSettings::clear_group_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t ConversationSettings::group_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ConversationSettings.group_id)
    return _internal_group_id();
}
inline void ConversationSettings::set_group_id(::int64_t value) {
    _internal_set_group_id(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ConversationSettings.group_id)
}
inline ::int64_t ConversationSettings::_internal_group_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_id_;
}
inline void ConversationSettings::_internal_set_group_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = value;
}

// map<string, .turms.client.model.proto.Value> settings = 3;
inline int ConversationSettings::_internal_settings_size() const {
    return _internal_settings().size();
}
inline int ConversationSettings::settings_size() const {
    return _internal_settings_size();
}
inline const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
ConversationSettings::_internal_settings() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.settings_.GetMap();
}
inline const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
ConversationSettings::settings() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_map:turms.client.model.proto.ConversationSettings.settings)
    return _internal_settings();
}
inline ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
ConversationSettings::_internal_mutable_settings() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.settings_.MutableMap();
}
inline ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
ConversationSettings::mutable_settings() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_map:turms.client.model.proto.ConversationSettings.settings)
    return _internal_mutable_settings();
}

// optional int64 last_updated_date = 4;
inline bool ConversationSettings::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void ConversationSettings::clear_last_updated_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t ConversationSettings::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ConversationSettings.last_updated_date)
    return _internal_last_updated_date();
}
inline void ConversationSettings::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.ConversationSettings.last_updated_date)
}
inline ::int64_t ConversationSettings::_internal_last_updated_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.last_updated_date_;
}
inline void ConversationSettings::_internal_set_last_updated_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int ConversationSettings::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int ConversationSettings::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* ConversationSettings::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.ConversationSettings.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
ConversationSettings::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.ConversationSettings.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& ConversationSettings::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.ConversationSettings.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* ConversationSettings::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.ConversationSettings.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
ConversationSettings::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.ConversationSettings.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
ConversationSettings::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
ConversationSettings::_internal_mutable_custom_attributes() {
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

#endif  // model_2fconversation_2fconversation_5fsettings_2eproto_2epb_2eh