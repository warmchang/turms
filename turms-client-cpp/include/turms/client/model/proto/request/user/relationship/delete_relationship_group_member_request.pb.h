// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/relationship/delete_relationship_group_member_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto_2epb_2eh
#define request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct
    TableStruct_request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class DeleteRelationshipGroupMemberRequest;
struct DeleteRelationshipGroupMemberRequestDefaultTypeInternal;
extern DeleteRelationshipGroupMemberRequestDefaultTypeInternal
    _DeleteRelationshipGroupMemberRequest_default_instance_;
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

class DeleteRelationshipGroupMemberRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
 */
{
   public:
    inline DeleteRelationshipGroupMemberRequest()
        : DeleteRelationshipGroupMemberRequest(nullptr) {
    }
    ~DeleteRelationshipGroupMemberRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(DeleteRelationshipGroupMemberRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg,
                                                  sizeof(DeleteRelationshipGroupMemberRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR DeleteRelationshipGroupMemberRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline DeleteRelationshipGroupMemberRequest(const DeleteRelationshipGroupMemberRequest& from)
        : DeleteRelationshipGroupMemberRequest(nullptr, from) {
    }
    inline DeleteRelationshipGroupMemberRequest(
        DeleteRelationshipGroupMemberRequest&& from) noexcept
        : DeleteRelationshipGroupMemberRequest(nullptr, std::move(from)) {
    }
    inline DeleteRelationshipGroupMemberRequest& operator=(
        const DeleteRelationshipGroupMemberRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline DeleteRelationshipGroupMemberRequest& operator=(
        DeleteRelationshipGroupMemberRequest&& from) noexcept {
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

    static const DeleteRelationshipGroupMemberRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const DeleteRelationshipGroupMemberRequest* internal_default_instance() {
        return reinterpret_cast<const DeleteRelationshipGroupMemberRequest*>(
            &_DeleteRelationshipGroupMemberRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(DeleteRelationshipGroupMemberRequest& a,
                     DeleteRelationshipGroupMemberRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(DeleteRelationshipGroupMemberRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(DeleteRelationshipGroupMemberRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    DeleteRelationshipGroupMemberRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<
            DeleteRelationshipGroupMemberRequest>(arena);
    }
    void CopyFrom(const DeleteRelationshipGroupMemberRequest& from);
    void MergeFrom(const DeleteRelationshipGroupMemberRequest& from) {
        DeleteRelationshipGroupMemberRequest::MergeImpl(*this, from);
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
    void InternalSwap(DeleteRelationshipGroupMemberRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.DeleteRelationshipGroupMemberRequest";
    }

   protected:
    explicit DeleteRelationshipGroupMemberRequest(::google::protobuf::Arena* arena);
    DeleteRelationshipGroupMemberRequest(::google::protobuf::Arena* arena,
                                         const DeleteRelationshipGroupMemberRequest& from);
    DeleteRelationshipGroupMemberRequest(::google::protobuf::Arena* arena,
                                         DeleteRelationshipGroupMemberRequest&& from) noexcept
        : DeleteRelationshipGroupMemberRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<62> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kUserIdFieldNumber = 1,
        kGroupIndexFieldNumber = 2,
        kTargetGroupIndexFieldNumber = 3,
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
    // int64 user_id = 1;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // int32 group_index = 2;
    void clear_group_index();
    ::int32_t group_index() const;
    void set_group_index(::int32_t value);

   private:
    ::int32_t _internal_group_index() const;
    void _internal_set_group_index(::int32_t value);

   public:
    // optional int32 target_group_index = 3;
    bool has_target_group_index() const;
    void clear_target_group_index();
    ::int32_t target_group_index() const;
    void set_target_group_index(::int32_t value);

   private:
    ::int32_t _internal_target_group_index() const;
    void _internal_set_target_group_index(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 4, 1, 0, 2> _table_;

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
                              const DeleteRelationshipGroupMemberRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t user_id_;
        ::int32_t group_index_;
        ::int32_t target_group_index_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DeleteRelationshipGroupMemberRequest

// int64 user_id = 1;
inline void DeleteRelationshipGroupMemberRequest::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
}
inline ::int64_t DeleteRelationshipGroupMemberRequest::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.user_id)
    return _internal_user_id();
}
inline void DeleteRelationshipGroupMemberRequest::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.user_id)
}
inline ::int64_t DeleteRelationshipGroupMemberRequest::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void DeleteRelationshipGroupMemberRequest::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// int32 group_index = 2;
inline void DeleteRelationshipGroupMemberRequest::clear_group_index() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_index_ = 0;
}
inline ::int32_t DeleteRelationshipGroupMemberRequest::group_index() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.group_index)
    return _internal_group_index();
}
inline void DeleteRelationshipGroupMemberRequest::set_group_index(::int32_t value) {
    _internal_set_group_index(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.group_index)
}
inline ::int32_t DeleteRelationshipGroupMemberRequest::_internal_group_index() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_index_;
}
inline void DeleteRelationshipGroupMemberRequest::_internal_set_group_index(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_index_ = value;
}

// optional int32 target_group_index = 3;
inline bool DeleteRelationshipGroupMemberRequest::has_target_group_index() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void DeleteRelationshipGroupMemberRequest::clear_target_group_index() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.target_group_index_ = 0;
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int32_t DeleteRelationshipGroupMemberRequest::target_group_index() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.target_group_index)
    return _internal_target_group_index();
}
inline void DeleteRelationshipGroupMemberRequest::set_target_group_index(::int32_t value) {
    _internal_set_target_group_index(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.target_group_index)
}
inline ::int32_t DeleteRelationshipGroupMemberRequest::_internal_target_group_index() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.target_group_index_;
}
inline void DeleteRelationshipGroupMemberRequest::_internal_set_target_group_index(
    ::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.target_group_index_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int DeleteRelationshipGroupMemberRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int DeleteRelationshipGroupMemberRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value*
DeleteRelationshipGroupMemberRequest::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
DeleteRelationshipGroupMemberRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value&
DeleteRelationshipGroupMemberRequest::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value*
DeleteRelationshipGroupMemberRequest::add_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
DeleteRelationshipGroupMemberRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.DeleteRelationshipGroupMemberRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
DeleteRelationshipGroupMemberRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
DeleteRelationshipGroupMemberRequest::_internal_mutable_custom_attributes() {
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

#endif  // request_2fuser_2frelationship_2fdelete_5frelationship_5fgroup_5fmember_5frequest_2eproto_2epb_2eh