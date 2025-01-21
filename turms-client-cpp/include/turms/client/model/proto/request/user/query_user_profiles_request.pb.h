// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/query_user_profiles_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh
#define request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryUserProfilesRequest;
struct QueryUserProfilesRequestDefaultTypeInternal;
extern QueryUserProfilesRequestDefaultTypeInternal _QueryUserProfilesRequest_default_instance_;
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

class QueryUserProfilesRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryUserProfilesRequest) */ {
   public:
    inline QueryUserProfilesRequest()
        : QueryUserProfilesRequest(nullptr) {
    }
    ~QueryUserProfilesRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(QueryUserProfilesRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(QueryUserProfilesRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryUserProfilesRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryUserProfilesRequest(const QueryUserProfilesRequest& from)
        : QueryUserProfilesRequest(nullptr, from) {
    }
    inline QueryUserProfilesRequest(QueryUserProfilesRequest&& from) noexcept
        : QueryUserProfilesRequest(nullptr, std::move(from)) {
    }
    inline QueryUserProfilesRequest& operator=(const QueryUserProfilesRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryUserProfilesRequest& operator=(QueryUserProfilesRequest&& from) noexcept {
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

    static const QueryUserProfilesRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryUserProfilesRequest* internal_default_instance() {
        return reinterpret_cast<const QueryUserProfilesRequest*>(
            &_QueryUserProfilesRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryUserProfilesRequest& a, QueryUserProfilesRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryUserProfilesRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(QueryUserProfilesRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryUserProfilesRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<QueryUserProfilesRequest>(arena);
    }
    void CopyFrom(const QueryUserProfilesRequest& from);
    void MergeFrom(const QueryUserProfilesRequest& from) {
        QueryUserProfilesRequest::MergeImpl(*this, from);
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
    void InternalSwap(QueryUserProfilesRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryUserProfilesRequest";
    }

   protected:
    explicit QueryUserProfilesRequest(::google::protobuf::Arena* arena);
    QueryUserProfilesRequest(::google::protobuf::Arena* arena,
                             const QueryUserProfilesRequest& from);
    QueryUserProfilesRequest(::google::protobuf::Arena* arena,
                             QueryUserProfilesRequest&& from) noexcept
        : QueryUserProfilesRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<50> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserIdsFieldNumber = 1,
        kFieldsToHighlightFieldNumber = 12,
        kCustomAttributesFieldNumber = 15,
        kNameFieldNumber = 3,
        kLastUpdatedDateFieldNumber = 2,
        kSkipFieldNumber = 10,
        kLimitFieldNumber = 11,
    };
    // repeated int64 user_ids = 1;
    int user_ids_size() const;

   private:
    int _internal_user_ids_size() const;

   public:
    void clear_user_ids();
    ::int64_t user_ids(int index) const;
    void set_user_ids(int index, ::int64_t value);
    void add_user_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& user_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_user_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_user_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_user_ids();

   public:
    // repeated int32 fields_to_highlight = 12;
    int fields_to_highlight_size() const;

   private:
    int _internal_fields_to_highlight_size() const;

   public:
    void clear_fields_to_highlight();
    ::int32_t fields_to_highlight(int index) const;
    void set_fields_to_highlight(int index, ::int32_t value);
    void add_fields_to_highlight(::int32_t value);
    const ::google::protobuf::RepeatedField<::int32_t>& fields_to_highlight() const;
    ::google::protobuf::RepeatedField<::int32_t>* mutable_fields_to_highlight();

   private:
    const ::google::protobuf::RepeatedField<::int32_t>& _internal_fields_to_highlight() const;
    ::google::protobuf::RepeatedField<::int32_t>* _internal_mutable_fields_to_highlight();

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
    // optional string name = 3;
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
    // optional int64 last_updated_date = 2;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // optional int32 skip = 10;
    bool has_skip() const;
    void clear_skip();
    ::int32_t skip() const;
    void set_skip(::int32_t value);

   private:
    ::int32_t _internal_skip() const;
    void _internal_set_skip(::int32_t value);

   public:
    // optional int32 limit = 11;
    bool has_limit() const;
    void clear_limit();
    ::int32_t limit() const;
    void set_limit(::int32_t value);

   private:
    ::int32_t _internal_limit() const;
    void _internal_set_limit(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryUserProfilesRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 7, 1, 62, 2> _table_;

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
                              const QueryUserProfilesRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedField<::int64_t> user_ids_;
        ::google::protobuf::internal::CachedSize _user_ids_cached_byte_size_;
        ::google::protobuf::RepeatedField<::int32_t> fields_to_highlight_;
        ::google::protobuf::internal::CachedSize _fields_to_highlight_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::int64_t last_updated_date_;
        ::int32_t skip_;
        ::int32_t limit_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryUserProfilesRequest

// repeated int64 user_ids = 1;
inline int QueryUserProfilesRequest::_internal_user_ids_size() const {
    return _internal_user_ids().size();
}
inline int QueryUserProfilesRequest::user_ids_size() const {
    return _internal_user_ids_size();
}
inline void QueryUserProfilesRequest::clear_user_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_ids_.Clear();
}
inline ::int64_t QueryUserProfilesRequest::user_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
    return _internal_user_ids().Get(index);
}
inline void QueryUserProfilesRequest::set_user_ids(int index, ::int64_t value) {
    _internal_mutable_user_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
}
inline void QueryUserProfilesRequest::add_user_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_user_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryUserProfilesRequest::user_ids()
    const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
    return _internal_user_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryUserProfilesRequest::mutable_user_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_user_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryUserProfilesRequest::_internal_user_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryUserProfilesRequest::_internal_mutable_user_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.user_ids_;
}

// optional int64 last_updated_date = 2;
inline bool QueryUserProfilesRequest::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void QueryUserProfilesRequest::clear_last_updated_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t QueryUserProfilesRequest::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.last_updated_date)
    return _internal_last_updated_date();
}
inline void QueryUserProfilesRequest::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.last_updated_date)
}
inline ::int64_t QueryUserProfilesRequest::_internal_last_updated_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.last_updated_date_;
}
inline void QueryUserProfilesRequest::_internal_set_last_updated_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = value;
}

// optional string name = 3;
inline bool QueryUserProfilesRequest::has_name() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryUserProfilesRequest::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& QueryUserProfilesRequest::name() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void QueryUserProfilesRequest::set_name(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.name)
}
inline std::string* QueryUserProfilesRequest::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryUserProfilesRequest.name)
    return _s;
}
inline const std::string& QueryUserProfilesRequest::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void QueryUserProfilesRequest::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(value, GetArena());
}
inline std::string* QueryUserProfilesRequest::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* QueryUserProfilesRequest::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.QueryUserProfilesRequest.name)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.name_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.name_.Set("", GetArena());
    }
    return released;
}
inline void QueryUserProfilesRequest::set_allocated_name(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.name_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.name_.IsDefault()) {
        _impl_.name_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.QueryUserProfilesRequest.name)
}

// optional int32 skip = 10;
inline bool QueryUserProfilesRequest::has_skip() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void QueryUserProfilesRequest::clear_skip() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.skip_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t QueryUserProfilesRequest::skip() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.skip)
    return _internal_skip();
}
inline void QueryUserProfilesRequest::set_skip(::int32_t value) {
    _internal_set_skip(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.skip)
}
inline ::int32_t QueryUserProfilesRequest::_internal_skip() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.skip_;
}
inline void QueryUserProfilesRequest::_internal_set_skip(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.skip_ = value;
}

// optional int32 limit = 11;
inline bool QueryUserProfilesRequest::has_limit() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void QueryUserProfilesRequest::clear_limit() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.limit_ = 0;
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t QueryUserProfilesRequest::limit() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.limit)
    return _internal_limit();
}
inline void QueryUserProfilesRequest::set_limit(::int32_t value) {
    _internal_set_limit(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.limit)
}
inline ::int32_t QueryUserProfilesRequest::_internal_limit() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.limit_;
}
inline void QueryUserProfilesRequest::_internal_set_limit(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.limit_ = value;
}

// repeated int32 fields_to_highlight = 12;
inline int QueryUserProfilesRequest::_internal_fields_to_highlight_size() const {
    return _internal_fields_to_highlight().size();
}
inline int QueryUserProfilesRequest::fields_to_highlight_size() const {
    return _internal_fields_to_highlight_size();
}
inline void QueryUserProfilesRequest::clear_fields_to_highlight() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.fields_to_highlight_.Clear();
}
inline ::int32_t QueryUserProfilesRequest::fields_to_highlight(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.fields_to_highlight)
    return _internal_fields_to_highlight().Get(index);
}
inline void QueryUserProfilesRequest::set_fields_to_highlight(int index, ::int32_t value) {
    _internal_mutable_fields_to_highlight()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.fields_to_highlight)
}
inline void QueryUserProfilesRequest::add_fields_to_highlight(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_fields_to_highlight()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryUserProfilesRequest.fields_to_highlight)
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
QueryUserProfilesRequest::fields_to_highlight() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryUserProfilesRequest.fields_to_highlight)
    return _internal_fields_to_highlight();
}
inline ::google::protobuf::RepeatedField<::int32_t>*
QueryUserProfilesRequest::mutable_fields_to_highlight() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryUserProfilesRequest.fields_to_highlight)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_fields_to_highlight();
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
QueryUserProfilesRequest::_internal_fields_to_highlight() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.fields_to_highlight_;
}
inline ::google::protobuf::RepeatedField<::int32_t>*
QueryUserProfilesRequest::_internal_mutable_fields_to_highlight() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.fields_to_highlight_;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int QueryUserProfilesRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int QueryUserProfilesRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* QueryUserProfilesRequest::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryUserProfilesRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryUserProfilesRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryUserProfilesRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& QueryUserProfilesRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* QueryUserProfilesRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryUserProfilesRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryUserProfilesRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryUserProfilesRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryUserProfilesRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryUserProfilesRequest::_internal_mutable_custom_attributes() {
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

#endif  // request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh