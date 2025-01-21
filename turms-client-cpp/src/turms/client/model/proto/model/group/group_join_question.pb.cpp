// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/group/group_join_question.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/model/group/group_join_question.pb.h"

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

inline constexpr GroupJoinQuestion::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      answers_{},
      custom_attributes_{},
      question_(&::google::protobuf::internal::fixed_address_empty_string,
                ::_pbi::ConstantInitialized()),
      id_{::int64_t{0}},
      group_id_{::int64_t{0}},
      score_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR GroupJoinQuestion::GroupJoinQuestion(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct GroupJoinQuestionDefaultTypeInternal {
    PROTOBUF_CONSTEXPR GroupJoinQuestionDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~GroupJoinQuestionDefaultTypeInternal() {
    }
    union {
        GroupJoinQuestion _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    GroupJoinQuestionDefaultTypeInternal _GroupJoinQuestion_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class GroupJoinQuestion::_Internal {
   public:
    using HasBits = decltype(std::declval<GroupJoinQuestion>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_._has_bits_);
};

void GroupJoinQuestion::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
GroupJoinQuestion::GroupJoinQuestion(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.GroupJoinQuestion)
}
inline PROTOBUF_NDEBUG_INLINE GroupJoinQuestion::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::GroupJoinQuestion& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      answers_{visibility, arena, from.answers_},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      question_(arena, from.question_) {
}

GroupJoinQuestion::GroupJoinQuestion(::google::protobuf::Arena* arena,
                                     const GroupJoinQuestion& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    GroupJoinQuestion* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, id_),
             reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, id_),
             offsetof(Impl_, score_) - offsetof(Impl_, id_) + sizeof(Impl_::score_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.GroupJoinQuestion)
}
inline PROTOBUF_NDEBUG_INLINE GroupJoinQuestion::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      answers_{visibility, arena},
      custom_attributes_{visibility, arena},
      question_(arena) {
}

inline void GroupJoinQuestion::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, id_),
             0,
             offsetof(Impl_, score_) - offsetof(Impl_, id_) + sizeof(Impl_::score_));
}
GroupJoinQuestion::~GroupJoinQuestion() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.GroupJoinQuestion)
    SharedDtor(*this);
}
inline void GroupJoinQuestion::SharedDtor(MessageLite& self) {
    GroupJoinQuestion& this_ = static_cast<GroupJoinQuestion&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.question_.Destroy();
    this_._impl_.~Impl_();
}

inline void* GroupJoinQuestion::PlacementNew_(const void*,
                                              void* mem,
                                              ::google::protobuf::Arena* arena) {
    return ::new (mem) GroupJoinQuestion(arena);
}
constexpr auto GroupJoinQuestion::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.answers_) +
            decltype(GroupJoinQuestion::_impl_.answers_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.custom_attributes_) +
            decltype(GroupJoinQuestion::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::CopyInit(
            sizeof(GroupJoinQuestion), alignof(GroupJoinQuestion), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(&GroupJoinQuestion::PlacementNew_,
                                                            sizeof(GroupJoinQuestion),
                                                            alignof(GroupJoinQuestion));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<43> GroupJoinQuestion::_class_data_ = {
    {
        &_GroupJoinQuestion_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &GroupJoinQuestion::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<GroupJoinQuestion>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &GroupJoinQuestion::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<GroupJoinQuestion>(),
        &GroupJoinQuestion::ByteSizeLong,
        &GroupJoinQuestion::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.GroupJoinQuestion",
};
const ::google::protobuf::internal::ClassData* GroupJoinQuestion::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<3, 6, 1, 66, 2>
    GroupJoinQuestion::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_._has_bits_),
            0,  // no _extensions_
            15,
            56,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950880,  // skipmap
            offsetof(decltype(_table_), field_entries),
            6,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::GroupJoinQuestion>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // optional int64 id = 1;
            {::_pbi::TcParser::FastV64S1,
             {8, 1, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.id_)}},
            // optional int64 group_id = 2;
            {::_pbi::TcParser::FastV64S1,
             {16, 2, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.group_id_)}},
            // optional string question = 3;
            {::_pbi::TcParser::FastUS1,
             {26, 0, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.question_)}},
            // repeated string answers = 4;
            {::_pbi::TcParser::FastUR1,
             {34, 63, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.answers_)}},
            // optional int32 score = 5;
            {::_pbi::TcParser::FastV32S1,
             {40, 3, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.score_)}},
            {::_pbi::TcParser::MiniParse, {}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122, 63, 0, PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // optional int64 id = 1;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.id_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
            // optional int64 group_id = 2;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.group_id_),
             _Internal::kHasBitsOffset + 2,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
            // optional string question = 3;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.question_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
            // repeated string answers = 4;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.answers_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
            // optional int32 score = 5;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.score_),
             _Internal::kHasBitsOffset + 3,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.custom_attributes_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{"\52\0\0\10\7\0\0\0"
          "turms.client.model.proto.GroupJoinQuestion"
          "question"
          "answers"}},
    };

PROTOBUF_NOINLINE void GroupJoinQuestion::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.GroupJoinQuestion)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.answers_.Clear();
    _impl_.custom_attributes_.Clear();
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        _impl_.question_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x0000000eu) {
        ::memset(&_impl_.id_,
                 0,
                 static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.score_) -
                                       reinterpret_cast<char*>(&_impl_.id_)) +
                     sizeof(_impl_.score_));
    }
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* GroupJoinQuestion::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const GroupJoinQuestion& this_ = static_cast<const GroupJoinQuestion&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* GroupJoinQuestion::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const GroupJoinQuestion& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.GroupJoinQuestion)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = this_._impl_._has_bits_[0];
    // optional int64 id = 1;
    if (cached_has_bits & 0x00000002u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this_._internal_id(), target);
    }

    // optional int64 group_id = 2;
    if (cached_has_bits & 0x00000004u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>(
            stream, this_._internal_group_id(), target);
    }

    // optional string question = 3;
    if (cached_has_bits & 0x00000001u) {
        const std::string& _s = this_._internal_question();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.GroupJoinQuestion.question");
        target = stream->WriteStringMaybeAliased(3, _s, target);
    }

    // repeated string answers = 4;
    for (int i = 0, n = this_._internal_answers_size(); i < n; ++i) {
        const auto& s = this_._internal_answers().Get(i);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            s.data(),
            static_cast<int>(s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.GroupJoinQuestion.answers");
        target = stream->WriteString(4, s, target);
    }

    // optional int32 score = 5;
    if (cached_has_bits & 0x00000008u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>(
            stream, this_._internal_score(), target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.GroupJoinQuestion)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t GroupJoinQuestion::ByteSizeLong(const MessageLite& base) {
    const GroupJoinQuestion& this_ = static_cast<const GroupJoinQuestion&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t GroupJoinQuestion::ByteSizeLong() const {
    const GroupJoinQuestion& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.GroupJoinQuestion)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated string answers = 4;
        {
            total_size +=
                1 * ::google::protobuf::internal::FromIntSize(this_._internal_answers().size());
            for (int i = 0, n = this_._internal_answers().size(); i < n; ++i) {
                total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
                    this_._internal_answers().Get(i));
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
    cached_has_bits = this_._impl_._has_bits_[0];
    if (cached_has_bits & 0x0000000fu) {
        // optional string question = 3;
        if (cached_has_bits & 0x00000001u) {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                  this_._internal_question());
        }
        // optional int64 id = 1;
        if (cached_has_bits & 0x00000002u) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_id());
        }
        // optional int64 group_id = 2;
        if (cached_has_bits & 0x00000004u) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_group_id());
        }
        // optional int32 score = 5;
        if (cached_has_bits & 0x00000008u) {
            total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this_._internal_score());
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

void GroupJoinQuestion::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                  const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<GroupJoinQuestion*>(&to_msg);
    auto& from = static_cast<const GroupJoinQuestion&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.GroupJoinQuestion)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_answers()->MergeFrom(from._internal_answers());
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x0000000fu) {
        if (cached_has_bits & 0x00000001u) {
            _this->_internal_set_question(from._internal_question());
        }
        if (cached_has_bits & 0x00000002u) {
            _this->_impl_.id_ = from._impl_.id_;
        }
        if (cached_has_bits & 0x00000004u) {
            _this->_impl_.group_id_ = from._impl_.group_id_;
        }
        if (cached_has_bits & 0x00000008u) {
            _this->_impl_.score_ = from._impl_.score_;
        }
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void GroupJoinQuestion::CopyFrom(const GroupJoinQuestion& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.GroupJoinQuestion)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void GroupJoinQuestion::InternalSwap(GroupJoinQuestion* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.answers_.InternalSwap(&other->_impl_.answers_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.question_, &other->_impl_.question_, arena);
    ::google::protobuf::internal::memswap<PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.score_) +
                                          sizeof(GroupJoinQuestion::_impl_.score_) -
                                          PROTOBUF_FIELD_OFFSET(GroupJoinQuestion, _impl_.id_)>(
        reinterpret_cast<char*>(&_impl_.id_), reinterpret_cast<char*>(&other->_impl_.id_));
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