// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/update_user_location_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/user/update_user_location_request.pb.h"

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

inline constexpr UpdateUserLocationRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : details_{},
      custom_attributes_{},
      latitude_{0},
      longitude_{0},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR UpdateUserLocationRequest::UpdateUserLocationRequest(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct UpdateUserLocationRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR UpdateUserLocationRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~UpdateUserLocationRequestDefaultTypeInternal() {
    }
    union {
        UpdateUserLocationRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    UpdateUserLocationRequestDefaultTypeInternal _UpdateUserLocationRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

// ===================================================================

class UpdateUserLocationRequest::_Internal {
   public:
};

void UpdateUserLocationRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
UpdateUserLocationRequest::UpdateUserLocationRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UpdateUserLocationRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateUserLocationRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::UpdateUserLocationRequest& from_msg)
    : details_{visibility, arena, from.details_},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      _cached_size_{0} {
}

UpdateUserLocationRequest::UpdateUserLocationRequest(::google::protobuf::Arena* arena,
                                                     const UpdateUserLocationRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    UpdateUserLocationRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, latitude_),
             reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, latitude_),
             offsetof(Impl_, longitude_) - offsetof(Impl_, latitude_) + sizeof(Impl_::longitude_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UpdateUserLocationRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateUserLocationRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : details_{visibility, arena},
      custom_attributes_{visibility, arena},
      _cached_size_{0} {
}

inline void UpdateUserLocationRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, latitude_),
             0,
             offsetof(Impl_, longitude_) - offsetof(Impl_, latitude_) + sizeof(Impl_::longitude_));
}
UpdateUserLocationRequest::~UpdateUserLocationRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.UpdateUserLocationRequest)
    SharedDtor(*this);
}
inline void UpdateUserLocationRequest::SharedDtor(MessageLite& self) {
    UpdateUserLocationRequest& this_ = static_cast<UpdateUserLocationRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* UpdateUserLocationRequest::PlacementNew_(const void*,
                                                      void* mem,
                                                      ::google::protobuf::Arena* arena) {
    return ::new (mem) UpdateUserLocationRequest(arena);
}
constexpr auto UpdateUserLocationRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.details_) +
            decltype(UpdateUserLocationRequest::_impl_.details_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.custom_attributes_) +
            decltype(UpdateUserLocationRequest::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::CopyInit(
            sizeof(UpdateUserLocationRequest), alignof(UpdateUserLocationRequest), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &UpdateUserLocationRequest::PlacementNew_,
            sizeof(UpdateUserLocationRequest),
            alignof(UpdateUserLocationRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<51> UpdateUserLocationRequest::_class_data_ = {
    {
        &_UpdateUserLocationRequest_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &UpdateUserLocationRequest::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<UpdateUserLocationRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &UpdateUserLocationRequest::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<UpdateUserLocationRequest>(),
        &UpdateUserLocationRequest::ByteSizeLong,
        &UpdateUserLocationRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.UpdateUserLocationRequest",
};
const ::google::protobuf::internal::ClassData* UpdateUserLocationRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 4, 2, 66, 2>
    UpdateUserLocationRequest::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            15,
            24,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950904,  // skipmap
            offsetof(decltype(_table_), field_entries),
            4,  // num_field_entries
            2,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::UpdateUserLocationRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // float latitude = 1;
            {::_pbi::TcParser::FastF32S1,
             {13, 63, 0, PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.latitude_)}},
            // float longitude = 2;
            {::_pbi::TcParser::FastF32S1,
             {21, 63, 0, PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.longitude_)}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // float latitude = 1;
            {PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.latitude_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
            // float longitude = 2;
            {PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.longitude_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
            // map<string, string> details = 3;
            {PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.details_),
             0,
             1,
             (0 | ::_fl::kFcRepeated | ::_fl::kMap)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.custom_attributes_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
            {::_pbi::TcParser::GetMapAuxInfo<decltype(UpdateUserLocationRequest()._impl_.details_)>(
                1, 0, 0, 9, 9)},
        }},
        {{"\62\0\0\7\0\0\0\0"
          "turms.client.model.proto.UpdateUserLocationRequest"
          "details"}},
    };

PROTOBUF_NOINLINE void UpdateUserLocationRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UpdateUserLocationRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.details_.Clear();
    _impl_.custom_attributes_.Clear();
    ::memset(&_impl_.latitude_,
             0,
             static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.longitude_) -
                                   reinterpret_cast<char*>(&_impl_.latitude_)) +
                 sizeof(_impl_.longitude_));
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* UpdateUserLocationRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const UpdateUserLocationRequest& this_ = static_cast<const UpdateUserLocationRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* UpdateUserLocationRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const UpdateUserLocationRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UpdateUserLocationRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // float latitude = 1;
    if (::absl::bit_cast<::uint32_t>(this_._internal_latitude()) != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this_._internal_latitude(), target);
    }

    // float longitude = 2;
    if (::absl::bit_cast<::uint32_t>(this_._internal_longitude()) != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this_._internal_longitude(), target);
    }

    // map<string, string> details = 3;
    if (!this_._internal_details().empty()) {
        using MapType = ::google::protobuf::Map<std::string, std::string>;
        using WireHelper = _pbi::MapEntryFuncs<std::string,
                                               std::string,
                                               _pbi::WireFormatLite::TYPE_STRING,
                                               _pbi::WireFormatLite::TYPE_STRING>;
        const auto& field = this_._internal_details();

        if (stream->IsSerializationDeterministic() && field.size() > 1) {
            for (const auto& entry : ::google::protobuf::internal::MapSorterPtr<MapType>(field)) {
                target =
                    WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.first.data(),
                    static_cast<int>(entry.first.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserLocationRequest.details");
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.second.data(),
                    static_cast<int>(entry.second.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserLocationRequest.details");
            }
        } else {
            for (const auto& entry : field) {
                target =
                    WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.first.data(),
                    static_cast<int>(entry.first.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserLocationRequest.details");
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.second.data(),
                    static_cast<int>(entry.second.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserLocationRequest.details");
            }
        }
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UpdateUserLocationRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t UpdateUserLocationRequest::ByteSizeLong(const MessageLite& base) {
    const UpdateUserLocationRequest& this_ = static_cast<const UpdateUserLocationRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t UpdateUserLocationRequest::ByteSizeLong() const {
    const UpdateUserLocationRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UpdateUserLocationRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // map<string, string> details = 3;
        {
            total_size +=
                1 * ::google::protobuf::internal::FromIntSize(this_._internal_details_size());
            for (const auto& entry : this_._internal_details()) {
                total_size += _pbi::MapEntryFuncs<
                    std::string,
                    std::string,
                    _pbi::WireFormatLite::TYPE_STRING,
                    _pbi::WireFormatLite::TYPE_STRING>::ByteSizeLong(entry.first, entry.second);
            }
        }
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
        }
    }
    {
        // float latitude = 1;
        if (::absl::bit_cast<::uint32_t>(this_._internal_latitude()) != 0) {
            total_size += 5;
        }
        // float longitude = 2;
        if (::absl::bit_cast<::uint32_t>(this_._internal_longitude()) != 0) {
            total_size += 5;
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

void UpdateUserLocationRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                          const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<UpdateUserLocationRequest*>(&to_msg);
    auto& from = static_cast<const UpdateUserLocationRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UpdateUserLocationRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_impl_.details_.MergeFrom(from._impl_.details_);
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    if (::absl::bit_cast<::uint32_t>(from._internal_latitude()) != 0) {
        _this->_impl_.latitude_ = from._impl_.latitude_;
    }
    if (::absl::bit_cast<::uint32_t>(from._internal_longitude()) != 0) {
        _this->_impl_.longitude_ = from._impl_.longitude_;
    }
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UpdateUserLocationRequest::CopyFrom(const UpdateUserLocationRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UpdateUserLocationRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void UpdateUserLocationRequest::InternalSwap(UpdateUserLocationRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.details_.InternalSwap(&other->_impl_.details_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::google::protobuf::internal::memswap<
        PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.longitude_) +
        sizeof(UpdateUserLocationRequest::_impl_.longitude_) -
        PROTOBUF_FIELD_OFFSET(UpdateUserLocationRequest, _impl_.latitude_)>(
        reinterpret_cast<char*>(&_impl_.latitude_),
        reinterpret_cast<char*>(&other->_impl_.latitude_));
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