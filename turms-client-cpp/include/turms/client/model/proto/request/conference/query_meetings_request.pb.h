// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/conference/query_meetings_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef request_2fconference_2fquery_5fmeetings_5frequest_2eproto_2epb_2eh
#define request_2fconference_2fquery_5fmeetings_5frequest_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_request_2fconference_2fquery_5fmeetings_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fconference_2fquery_5fmeetings_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryMeetingsRequest;
struct QueryMeetingsRequestDefaultTypeInternal;
extern QueryMeetingsRequestDefaultTypeInternal _QueryMeetingsRequest_default_instance_;
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

class QueryMeetingsRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryMeetingsRequest) */ {
   public:
    inline QueryMeetingsRequest()
        : QueryMeetingsRequest(nullptr) {
    }
    ~QueryMeetingsRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(QueryMeetingsRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(QueryMeetingsRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryMeetingsRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryMeetingsRequest(const QueryMeetingsRequest& from)
        : QueryMeetingsRequest(nullptr, from) {
    }
    inline QueryMeetingsRequest(QueryMeetingsRequest&& from) noexcept
        : QueryMeetingsRequest(nullptr, std::move(from)) {
    }
    inline QueryMeetingsRequest& operator=(const QueryMeetingsRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryMeetingsRequest& operator=(QueryMeetingsRequest&& from) noexcept {
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

    static const QueryMeetingsRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryMeetingsRequest* internal_default_instance() {
        return reinterpret_cast<const QueryMeetingsRequest*>(
            &_QueryMeetingsRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryMeetingsRequest& a, QueryMeetingsRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryMeetingsRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(QueryMeetingsRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryMeetingsRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<QueryMeetingsRequest>(arena);
    }
    void CopyFrom(const QueryMeetingsRequest& from);
    void MergeFrom(const QueryMeetingsRequest& from) {
        QueryMeetingsRequest::MergeImpl(*this, from);
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
    void InternalSwap(QueryMeetingsRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryMeetingsRequest";
    }

   protected:
    explicit QueryMeetingsRequest(::google::protobuf::Arena* arena);
    QueryMeetingsRequest(::google::protobuf::Arena* arena, const QueryMeetingsRequest& from);
    QueryMeetingsRequest(::google::protobuf::Arena* arena, QueryMeetingsRequest&& from) noexcept
        : QueryMeetingsRequest(arena) {
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
        kIdsFieldNumber = 1,
        kCreatorIdsFieldNumber = 2,
        kUserIdsFieldNumber = 3,
        kGroupIdsFieldNumber = 4,
        kCustomAttributesFieldNumber = 15,
        kCreationDateStartFieldNumber = 5,
        kCreationDateEndFieldNumber = 6,
        kSkipFieldNumber = 10,
        kLimitFieldNumber = 11,
    };
    // repeated int64 ids = 1;
    int ids_size() const;

   private:
    int _internal_ids_size() const;

   public:
    void clear_ids();
    ::int64_t ids(int index) const;
    void set_ids(int index, ::int64_t value);
    void add_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_ids();

   public:
    // repeated int64 creator_ids = 2;
    int creator_ids_size() const;

   private:
    int _internal_creator_ids_size() const;

   public:
    void clear_creator_ids();
    ::int64_t creator_ids(int index) const;
    void set_creator_ids(int index, ::int64_t value);
    void add_creator_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& creator_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_creator_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_creator_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_creator_ids();

   public:
    // repeated int64 user_ids = 3;
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
    // repeated int64 group_ids = 4;
    int group_ids_size() const;

   private:
    int _internal_group_ids_size() const;

   public:
    void clear_group_ids();
    ::int64_t group_ids(int index) const;
    void set_group_ids(int index, ::int64_t value);
    void add_group_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& group_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_group_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_group_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_group_ids();

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
    // optional int64 creation_date_start = 5;
    bool has_creation_date_start() const;
    void clear_creation_date_start();
    ::int64_t creation_date_start() const;
    void set_creation_date_start(::int64_t value);

   private:
    ::int64_t _internal_creation_date_start() const;
    void _internal_set_creation_date_start(::int64_t value);

   public:
    // optional int64 creation_date_end = 6;
    bool has_creation_date_end() const;
    void clear_creation_date_end();
    ::int64_t creation_date_end() const;
    void set_creation_date_end(::int64_t value);

   private:
    ::int64_t _internal_creation_date_end() const;
    void _internal_set_creation_date_end(::int64_t value);

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
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryMeetingsRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 9, 1, 0, 2> _table_;

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
                              const QueryMeetingsRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedField<::int64_t> ids_;
        ::google::protobuf::internal::CachedSize _ids_cached_byte_size_;
        ::google::protobuf::RepeatedField<::int64_t> creator_ids_;
        ::google::protobuf::internal::CachedSize _creator_ids_cached_byte_size_;
        ::google::protobuf::RepeatedField<::int64_t> user_ids_;
        ::google::protobuf::internal::CachedSize _user_ids_cached_byte_size_;
        ::google::protobuf::RepeatedField<::int64_t> group_ids_;
        ::google::protobuf::internal::CachedSize _group_ids_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t creation_date_start_;
        ::int64_t creation_date_end_;
        ::int32_t skip_;
        ::int32_t limit_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_request_2fconference_2fquery_5fmeetings_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryMeetingsRequest

// repeated int64 ids = 1;
inline int QueryMeetingsRequest::_internal_ids_size() const {
    return _internal_ids().size();
}
inline int QueryMeetingsRequest::ids_size() const {
    return _internal_ids_size();
}
inline void QueryMeetingsRequest::clear_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.ids_.Clear();
}
inline ::int64_t QueryMeetingsRequest::ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.ids)
    return _internal_ids().Get(index);
}
inline void QueryMeetingsRequest::set_ids(int index, ::int64_t value) {
    _internal_mutable_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.ids)
}
inline void QueryMeetingsRequest::add_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMeetingsRequest.ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryMeetingsRequest::ids() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMeetingsRequest.ids)
    return _internal_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryMeetingsRequest::mutable_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMeetingsRequest.ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryMeetingsRequest::_internal_ids()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryMeetingsRequest::_internal_mutable_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.ids_;
}

// repeated int64 creator_ids = 2;
inline int QueryMeetingsRequest::_internal_creator_ids_size() const {
    return _internal_creator_ids().size();
}
inline int QueryMeetingsRequest::creator_ids_size() const {
    return _internal_creator_ids_size();
}
inline void QueryMeetingsRequest::clear_creator_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creator_ids_.Clear();
}
inline ::int64_t QueryMeetingsRequest::creator_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.creator_ids)
    return _internal_creator_ids().Get(index);
}
inline void QueryMeetingsRequest::set_creator_ids(int index, ::int64_t value) {
    _internal_mutable_creator_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.creator_ids)
}
inline void QueryMeetingsRequest::add_creator_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_creator_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMeetingsRequest.creator_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryMeetingsRequest::creator_ids() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMeetingsRequest.creator_ids)
    return _internal_creator_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryMeetingsRequest::mutable_creator_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMeetingsRequest.creator_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_creator_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMeetingsRequest::_internal_creator_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creator_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMeetingsRequest::_internal_mutable_creator_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.creator_ids_;
}

// repeated int64 user_ids = 3;
inline int QueryMeetingsRequest::_internal_user_ids_size() const {
    return _internal_user_ids().size();
}
inline int QueryMeetingsRequest::user_ids_size() const {
    return _internal_user_ids_size();
}
inline void QueryMeetingsRequest::clear_user_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_ids_.Clear();
}
inline ::int64_t QueryMeetingsRequest::user_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.user_ids)
    return _internal_user_ids().Get(index);
}
inline void QueryMeetingsRequest::set_user_ids(int index, ::int64_t value) {
    _internal_mutable_user_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.user_ids)
}
inline void QueryMeetingsRequest::add_user_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_user_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMeetingsRequest.user_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryMeetingsRequest::user_ids() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMeetingsRequest.user_ids)
    return _internal_user_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryMeetingsRequest::mutable_user_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMeetingsRequest.user_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_user_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMeetingsRequest::_internal_user_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMeetingsRequest::_internal_mutable_user_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.user_ids_;
}

// repeated int64 group_ids = 4;
inline int QueryMeetingsRequest::_internal_group_ids_size() const {
    return _internal_group_ids().size();
}
inline int QueryMeetingsRequest::group_ids_size() const {
    return _internal_group_ids_size();
}
inline void QueryMeetingsRequest::clear_group_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_ids_.Clear();
}
inline ::int64_t QueryMeetingsRequest::group_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.group_ids)
    return _internal_group_ids().Get(index);
}
inline void QueryMeetingsRequest::set_group_ids(int index, ::int64_t value) {
    _internal_mutable_group_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.group_ids)
}
inline void QueryMeetingsRequest::add_group_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_group_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMeetingsRequest.group_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryMeetingsRequest::group_ids() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMeetingsRequest.group_ids)
    return _internal_group_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryMeetingsRequest::mutable_group_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMeetingsRequest.group_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_group_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMeetingsRequest::_internal_group_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMeetingsRequest::_internal_mutable_group_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.group_ids_;
}

// optional int64 creation_date_start = 5;
inline bool QueryMeetingsRequest::has_creation_date_start() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryMeetingsRequest::clear_creation_date_start() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_start_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t QueryMeetingsRequest::creation_date_start() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.creation_date_start)
    return _internal_creation_date_start();
}
inline void QueryMeetingsRequest::set_creation_date_start(::int64_t value) {
    _internal_set_creation_date_start(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.creation_date_start)
}
inline ::int64_t QueryMeetingsRequest::_internal_creation_date_start() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_start_;
}
inline void QueryMeetingsRequest::_internal_set_creation_date_start(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_start_ = value;
}

// optional int64 creation_date_end = 6;
inline bool QueryMeetingsRequest::has_creation_date_end() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void QueryMeetingsRequest::clear_creation_date_end() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_end_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t QueryMeetingsRequest::creation_date_end() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.creation_date_end)
    return _internal_creation_date_end();
}
inline void QueryMeetingsRequest::set_creation_date_end(::int64_t value) {
    _internal_set_creation_date_end(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.creation_date_end)
}
inline ::int64_t QueryMeetingsRequest::_internal_creation_date_end() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_end_;
}
inline void QueryMeetingsRequest::_internal_set_creation_date_end(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_end_ = value;
}

// optional int32 skip = 10;
inline bool QueryMeetingsRequest::has_skip() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void QueryMeetingsRequest::clear_skip() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.skip_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t QueryMeetingsRequest::skip() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.skip)
    return _internal_skip();
}
inline void QueryMeetingsRequest::set_skip(::int32_t value) {
    _internal_set_skip(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.skip)
}
inline ::int32_t QueryMeetingsRequest::_internal_skip() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.skip_;
}
inline void QueryMeetingsRequest::_internal_set_skip(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.skip_ = value;
}

// optional int32 limit = 11;
inline bool QueryMeetingsRequest::has_limit() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void QueryMeetingsRequest::clear_limit() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.limit_ = 0;
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t QueryMeetingsRequest::limit() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.limit)
    return _internal_limit();
}
inline void QueryMeetingsRequest::set_limit(::int32_t value) {
    _internal_set_limit(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMeetingsRequest.limit)
}
inline ::int32_t QueryMeetingsRequest::_internal_limit() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.limit_;
}
inline void QueryMeetingsRequest::_internal_set_limit(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.limit_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int QueryMeetingsRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int QueryMeetingsRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* QueryMeetingsRequest::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryMeetingsRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryMeetingsRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMeetingsRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& QueryMeetingsRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMeetingsRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* QueryMeetingsRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMeetingsRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryMeetingsRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMeetingsRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryMeetingsRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryMeetingsRequest::_internal_mutable_custom_attributes() {
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

#endif  // request_2fconference_2fquery_5fmeetings_5frequest_2eproto_2epb_2eh