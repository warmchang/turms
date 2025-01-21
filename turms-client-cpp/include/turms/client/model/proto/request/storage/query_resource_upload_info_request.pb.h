// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/storage/query_resource_upload_info_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto_2epb_2eh
#define request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto_2epb_2eh

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
#include "turms/client/model/proto/constant/storage_resource_type.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryResourceUploadInfoRequest;
struct QueryResourceUploadInfoRequestDefaultTypeInternal;
extern QueryResourceUploadInfoRequestDefaultTypeInternal
    _QueryResourceUploadInfoRequest_default_instance_;
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

class QueryResourceUploadInfoRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryResourceUploadInfoRequest)
 */
{
   public:
    inline QueryResourceUploadInfoRequest()
        : QueryResourceUploadInfoRequest(nullptr) {
    }
    ~QueryResourceUploadInfoRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(QueryResourceUploadInfoRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(QueryResourceUploadInfoRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryResourceUploadInfoRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryResourceUploadInfoRequest(const QueryResourceUploadInfoRequest& from)
        : QueryResourceUploadInfoRequest(nullptr, from) {
    }
    inline QueryResourceUploadInfoRequest(QueryResourceUploadInfoRequest&& from) noexcept
        : QueryResourceUploadInfoRequest(nullptr, std::move(from)) {
    }
    inline QueryResourceUploadInfoRequest& operator=(const QueryResourceUploadInfoRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryResourceUploadInfoRequest& operator=(
        QueryResourceUploadInfoRequest&& from) noexcept {
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

    static const QueryResourceUploadInfoRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryResourceUploadInfoRequest* internal_default_instance() {
        return reinterpret_cast<const QueryResourceUploadInfoRequest*>(
            &_QueryResourceUploadInfoRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryResourceUploadInfoRequest& a, QueryResourceUploadInfoRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryResourceUploadInfoRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(QueryResourceUploadInfoRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryResourceUploadInfoRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<QueryResourceUploadInfoRequest>(
            arena);
    }
    void CopyFrom(const QueryResourceUploadInfoRequest& from);
    void MergeFrom(const QueryResourceUploadInfoRequest& from) {
        QueryResourceUploadInfoRequest::MergeImpl(*this, from);
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
    void InternalSwap(QueryResourceUploadInfoRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryResourceUploadInfoRequest";
    }

   protected:
    explicit QueryResourceUploadInfoRequest(::google::protobuf::Arena* arena);
    QueryResourceUploadInfoRequest(::google::protobuf::Arena* arena,
                                   const QueryResourceUploadInfoRequest& from);
    QueryResourceUploadInfoRequest(::google::protobuf::Arena* arena,
                                   QueryResourceUploadInfoRequest&& from) noexcept
        : QueryResourceUploadInfoRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<56> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kIdStrFieldNumber = 3,
        kNameFieldNumber = 4,
        kMediaTypeFieldNumber = 5,
        kIdNumFieldNumber = 2,
        kTypeFieldNumber = 1,
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
    // optional string id_str = 3;
    bool has_id_str() const;
    void clear_id_str();
    const std::string& id_str() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_id_str(Arg_&& arg, Args_... args);
    std::string* mutable_id_str();
    PROTOBUF_NODISCARD std::string* release_id_str();
    void set_allocated_id_str(std::string* value);

   private:
    const std::string& _internal_id_str() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_id_str(const std::string& value);
    std::string* _internal_mutable_id_str();

   public:
    // optional string name = 4;
    bool has_name() const;
    void clear_name();
    const std::string& name() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_name(Arg_&& arg, Args_... args);
    std::string* mutable_name();
    PROTOBUF_NODISCARD std::string* release_name();
    void set_allocated_name(std::string* value);

   private:
    const std::string& _internal_name() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
    std::string* _internal_mutable_name();

   public:
    // optional string media_type = 5;
    bool has_media_type() const;
    void clear_media_type();
    const std::string& media_type() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_media_type(Arg_&& arg, Args_... args);
    std::string* mutable_media_type();
    PROTOBUF_NODISCARD std::string* release_media_type();
    void set_allocated_media_type(std::string* value);

   private:
    const std::string& _internal_media_type() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_media_type(const std::string& value);
    std::string* _internal_mutable_media_type();

   public:
    // optional int64 id_num = 2;
    bool has_id_num() const;
    void clear_id_num();
    ::int64_t id_num() const;
    void set_id_num(::int64_t value);

   private:
    ::int64_t _internal_id_num() const;
    void _internal_set_id_num(::int64_t value);

   public:
    // .turms.client.model.proto.StorageResourceType type = 1;
    void clear_type();
    ::turms::client::model::proto::StorageResourceType type() const;
    void set_type(::turms::client::model::proto::StorageResourceType value);

   private:
    ::turms::client::model::proto::StorageResourceType _internal_type() const;
    void _internal_set_type(::turms::client::model::proto::StorageResourceType value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryResourceUploadInfoRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 6, 1, 84, 2> _table_;

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
                              const QueryResourceUploadInfoRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr id_str_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::google::protobuf::internal::ArenaStringPtr media_type_;
        ::int64_t id_num_;
        int type_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryResourceUploadInfoRequest

// .turms.client.model.proto.StorageResourceType type = 1;
inline void QueryResourceUploadInfoRequest::clear_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.type_ = 0;
}
inline ::turms::client::model::proto::StorageResourceType QueryResourceUploadInfoRequest::type()
    const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.type)
    return _internal_type();
}
inline void QueryResourceUploadInfoRequest::set_type(
    ::turms::client::model::proto::StorageResourceType value) {
    _internal_set_type(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryResourceUploadInfoRequest.type)
}
inline ::turms::client::model::proto::StorageResourceType
QueryResourceUploadInfoRequest::_internal_type() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::StorageResourceType>(_impl_.type_);
}
inline void QueryResourceUploadInfoRequest::_internal_set_type(
    ::turms::client::model::proto::StorageResourceType value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.type_ = value;
}

// optional int64 id_num = 2;
inline bool QueryResourceUploadInfoRequest::has_id_num() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void QueryResourceUploadInfoRequest::clear_id_num() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_num_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t QueryResourceUploadInfoRequest::id_num() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.id_num)
    return _internal_id_num();
}
inline void QueryResourceUploadInfoRequest::set_id_num(::int64_t value) {
    _internal_set_id_num(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryResourceUploadInfoRequest.id_num)
}
inline ::int64_t QueryResourceUploadInfoRequest::_internal_id_num() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_num_;
}
inline void QueryResourceUploadInfoRequest::_internal_set_id_num(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_num_ = value;
}

// optional string id_str = 3;
inline bool QueryResourceUploadInfoRequest::has_id_str() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryResourceUploadInfoRequest::clear_id_str() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_str_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& QueryResourceUploadInfoRequest::id_str() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.id_str)
    return _internal_id_str();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void QueryResourceUploadInfoRequest::set_id_str(Arg_&& arg,
                                                                              Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.id_str_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryResourceUploadInfoRequest.id_str)
}
inline std::string* QueryResourceUploadInfoRequest::mutable_id_str() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_id_str();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryResourceUploadInfoRequest.id_str)
    return _s;
}
inline const std::string& QueryResourceUploadInfoRequest::_internal_id_str() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_str_.Get();
}
inline void QueryResourceUploadInfoRequest::_internal_set_id_str(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.id_str_.Set(value, GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::_internal_mutable_id_str() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.id_str_.Mutable(GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::release_id_str() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.QueryResourceUploadInfoRequest.id_str)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.id_str_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.id_str_.Set("", GetArena());
    }
    return released;
}
inline void QueryResourceUploadInfoRequest::set_allocated_id_str(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.id_str_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.id_str_.IsDefault()) {
        _impl_.id_str_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.QueryResourceUploadInfoRequest.id_str)
}

// optional string name = 4;
inline bool QueryResourceUploadInfoRequest::has_name() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void QueryResourceUploadInfoRequest::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& QueryResourceUploadInfoRequest::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void QueryResourceUploadInfoRequest::set_name(Arg_&& arg,
                                                                            Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryResourceUploadInfoRequest.name)
}
inline std::string* QueryResourceUploadInfoRequest::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryResourceUploadInfoRequest.name)
    return _s;
}
inline const std::string& QueryResourceUploadInfoRequest::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void QueryResourceUploadInfoRequest::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.name_.Set(value, GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.QueryResourceUploadInfoRequest.name)
    if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000002u;
    auto* released = _impl_.name_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.name_.Set("", GetArena());
    }
    return released;
}
inline void QueryResourceUploadInfoRequest::set_allocated_name(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    _impl_.name_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.name_.IsDefault()) {
        _impl_.name_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.QueryResourceUploadInfoRequest.name)
}

// optional string media_type = 5;
inline bool QueryResourceUploadInfoRequest::has_media_type() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void QueryResourceUploadInfoRequest::clear_media_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.media_type_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& QueryResourceUploadInfoRequest::media_type() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.media_type)
    return _internal_media_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void QueryResourceUploadInfoRequest::set_media_type(Arg_&& arg,
                                                                                  Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.media_type_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryResourceUploadInfoRequest.media_type)
}
inline std::string* QueryResourceUploadInfoRequest::mutable_media_type()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_media_type();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryResourceUploadInfoRequest.media_type)
    return _s;
}
inline const std::string& QueryResourceUploadInfoRequest::_internal_media_type() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.media_type_.Get();
}
inline void QueryResourceUploadInfoRequest::_internal_set_media_type(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.media_type_.Set(value, GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::_internal_mutable_media_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    return _impl_.media_type_.Mutable(GetArena());
}
inline std::string* QueryResourceUploadInfoRequest::release_media_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.QueryResourceUploadInfoRequest.media_type)
    if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000004u;
    auto* released = _impl_.media_type_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.media_type_.Set("", GetArena());
    }
    return released;
}
inline void QueryResourceUploadInfoRequest::set_allocated_media_type(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000004u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000004u;
    }
    _impl_.media_type_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.media_type_.IsDefault()) {
        _impl_.media_type_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.QueryResourceUploadInfoRequest.media_type)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int QueryResourceUploadInfoRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int QueryResourceUploadInfoRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value*
QueryResourceUploadInfoRequest::mutable_custom_attributes(int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryResourceUploadInfoRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryResourceUploadInfoRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryResourceUploadInfoRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value&
QueryResourceUploadInfoRequest::custom_attributes(int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryResourceUploadInfoRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* QueryResourceUploadInfoRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryResourceUploadInfoRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryResourceUploadInfoRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryResourceUploadInfoRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryResourceUploadInfoRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryResourceUploadInfoRequest::_internal_mutable_custom_attributes() {
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

#endif  // request_2fstorage_2fquery_5fresource_5fupload_5finfo_5frequest_2eproto_2epb_2eh