// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/group/enrollment/create_group_invitation_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/group/enrollment/create_group_invitation_request.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/wire_format_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {

inline constexpr CreateGroupInvitationRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : custom_attributes_{},
      content_(&::google::protobuf::internal::fixed_address_empty_string,
               ::_pbi::ConstantInitialized()),
      group_id_{::int64_t{0}},
      invitee_id_{::int64_t{0}},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR CreateGroupInvitationRequest::CreateGroupInvitationRequest(
    ::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct CreateGroupInvitationRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR CreateGroupInvitationRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~CreateGroupInvitationRequestDefaultTypeInternal() {
    }
    union {
        CreateGroupInvitationRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    CreateGroupInvitationRequestDefaultTypeInternal _CreateGroupInvitationRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class CreateGroupInvitationRequest::_Internal {
   public:
};

void CreateGroupInvitationRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
CreateGroupInvitationRequest::CreateGroupInvitationRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.CreateGroupInvitationRequest)
}
inline PROTOBUF_NDEBUG_INLINE CreateGroupInvitationRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::CreateGroupInvitationRequest& from_msg)
    : custom_attributes_{visibility, arena, from.custom_attributes_},
      content_(arena, from.content_),
      _cached_size_{0} {
}

CreateGroupInvitationRequest::CreateGroupInvitationRequest(::google::protobuf::Arena* arena,
                                                           const CreateGroupInvitationRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    CreateGroupInvitationRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, group_id_),
        reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, group_id_),
        offsetof(Impl_, invitee_id_) - offsetof(Impl_, group_id_) + sizeof(Impl_::invitee_id_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.CreateGroupInvitationRequest)
}
inline PROTOBUF_NDEBUG_INLINE CreateGroupInvitationRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : custom_attributes_{visibility, arena},
      content_(arena),
      _cached_size_{0} {
}

inline void CreateGroupInvitationRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, group_id_),
        0,
        offsetof(Impl_, invitee_id_) - offsetof(Impl_, group_id_) + sizeof(Impl_::invitee_id_));
}
CreateGroupInvitationRequest::~CreateGroupInvitationRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.CreateGroupInvitationRequest)
    SharedDtor(*this);
}
inline void CreateGroupInvitationRequest::SharedDtor(MessageLite& self) {
    CreateGroupInvitationRequest& this_ = static_cast<CreateGroupInvitationRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.content_.Destroy();
    this_._impl_.~Impl_();
}

inline void* CreateGroupInvitationRequest::PlacementNew_(const void*,
                                                         void* mem,
                                                         ::google::protobuf::Arena* arena) {
    return ::new (mem) CreateGroupInvitationRequest(arena);
}
constexpr auto CreateGroupInvitationRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.custom_attributes_) +
            decltype(CreateGroupInvitationRequest::_impl_.custom_attributes_)::
                InternalGetArenaOffset(::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::CopyInit(
            sizeof(CreateGroupInvitationRequest),
            alignof(CreateGroupInvitationRequest),
            *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &CreateGroupInvitationRequest::PlacementNew_,
            sizeof(CreateGroupInvitationRequest),
            alignof(CreateGroupInvitationRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<54> CreateGroupInvitationRequest::_class_data_ = {
    {
        &_CreateGroupInvitationRequest_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &CreateGroupInvitationRequest::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<CreateGroupInvitationRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &CreateGroupInvitationRequest::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<CreateGroupInvitationRequest>(),
        &CreateGroupInvitationRequest::ByteSizeLong,
        &CreateGroupInvitationRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.CreateGroupInvitationRequest",
};
const ::google::protobuf::internal::ClassData* CreateGroupInvitationRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<3, 4, 1, 69, 2>
    CreateGroupInvitationRequest::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            15,
            56,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950904,  // skipmap
            offsetof(decltype(_table_), field_entries),
            4,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::CreateGroupInvitationRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // int64 group_id = 1;
            {::_pbi::TcParser::FastV64S1,
             {8, 63, 0, PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.group_id_)}},
            // int64 invitee_id = 2;
            {::_pbi::TcParser::FastV64S1,
             {16, 63, 0, PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.invitee_id_)}},
            // string content = 3;
            {::_pbi::TcParser::FastUS1,
             {26, 63, 0, PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.content_)}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // int64 group_id = 1;
            {PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.group_id_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
            // int64 invitee_id = 2;
            {PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.invitee_id_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
            // string content = 3;
            {PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.content_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.custom_attributes_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{"\65\0\0\7\0\0\0\0"
          "turms.client.model.proto.CreateGroupInvitationRequest"
          "content"}},
    };

PROTOBUF_NOINLINE void CreateGroupInvitationRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.CreateGroupInvitationRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.custom_attributes_.Clear();
    _impl_.content_.ClearToEmpty();
    ::memset(&_impl_.group_id_,
             0,
             static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.invitee_id_) -
                                   reinterpret_cast<char*>(&_impl_.group_id_)) +
                 sizeof(_impl_.invitee_id_));
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* CreateGroupInvitationRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const CreateGroupInvitationRequest& this_ =
        static_cast<const CreateGroupInvitationRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* CreateGroupInvitationRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const CreateGroupInvitationRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.CreateGroupInvitationRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // int64 group_id = 1;
    if (this_._internal_group_id() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this_._internal_group_id(), target);
    }

    // int64 invitee_id = 2;
    if (this_._internal_invitee_id() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>(
            stream, this_._internal_invitee_id(), target);
    }

    // string content = 3;
    if (!this_._internal_content().empty()) {
        const std::string& _s = this_._internal_content();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.CreateGroupInvitationRequest.content");
        target = stream->WriteStringMaybeAliased(3, _s, target);
    }

    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    for (unsigned i = 0, n = static_cast<unsigned>(this_._internal_custom_attributes_size()); i < n;
         i++) {
        const auto& repfield = this_._internal_custom_attributes().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            15, repfield, repfield.GetCachedSize(), target, stream);
    }

    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        target = stream->WriteRaw(
            this_._internal_metadata_
                .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                .data(),
            static_cast<int>(
                this_._internal_metadata_
                    .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                    .size()),
            target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.CreateGroupInvitationRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t CreateGroupInvitationRequest::ByteSizeLong(const MessageLite& base) {
    const CreateGroupInvitationRequest& this_ =
        static_cast<const CreateGroupInvitationRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t CreateGroupInvitationRequest::ByteSizeLong() const {
    const CreateGroupInvitationRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.CreateGroupInvitationRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
        }
    }
    {
        // string content = 3;
        if (!this_._internal_content().empty()) {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                  this_._internal_content());
        }
        // int64 group_id = 1;
        if (this_._internal_group_id() != 0) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_group_id());
        }
        // int64 invitee_id = 2;
        if (this_._internal_invitee_id() != 0) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_invitee_id());
        }
    }
    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        total_size += this_._internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void CreateGroupInvitationRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                             const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<CreateGroupInvitationRequest*>(&to_msg);
    auto& from = static_cast<const CreateGroupInvitationRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.CreateGroupInvitationRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    if (!from._internal_content().empty()) {
        _this->_internal_set_content(from._internal_content());
    }
    if (from._internal_group_id() != 0) {
        _this->_impl_.group_id_ = from._impl_.group_id_;
    }
    if (from._internal_invitee_id() != 0) {
        _this->_impl_.invitee_id_ = from._impl_.invitee_id_;
    }
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void CreateGroupInvitationRequest::CopyFrom(const CreateGroupInvitationRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.CreateGroupInvitationRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void CreateGroupInvitationRequest::InternalSwap(
    CreateGroupInvitationRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.content_, &other->_impl_.content_, arena);
    ::google::protobuf::internal::memswap<
        PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.invitee_id_) +
        sizeof(CreateGroupInvitationRequest::_impl_.invitee_id_) -
        PROTOBUF_FIELD_OFFSET(CreateGroupInvitationRequest, _impl_.group_id_)>(
        reinterpret_cast<char*>(&_impl_.group_id_),
        reinterpret_cast<char*>(&other->_impl_.group_id_));
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"