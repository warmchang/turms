// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/message/messages.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2fmessage_2fmessages_2eproto_2epb_2eh
#define model_2fmessage_2fmessages_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/message/message.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fmessage_2fmessages_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fmessage_2fmessages_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class Messages;
struct MessagesDefaultTypeInternal;
extern MessagesDefaultTypeInternal _Messages_default_instance_;
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

class Messages final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.Messages) */ {
   public:
    inline Messages()
        : Messages(nullptr) {
    }
    ~Messages() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(Messages* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(Messages));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR Messages(::google::protobuf::internal::ConstantInitialized);

    inline Messages(const Messages& from)
        : Messages(nullptr, from) {
    }
    inline Messages(Messages&& from) noexcept
        : Messages(nullptr, std::move(from)) {
    }
    inline Messages& operator=(const Messages& from) {
        CopyFrom(from);
        return *this;
    }
    inline Messages& operator=(Messages&& from) noexcept {
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

    static const Messages& default_instance() {
        return *internal_default_instance();
    }
    static inline const Messages* internal_default_instance() {
        return reinterpret_cast<const Messages*>(&_Messages_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(Messages& a, Messages& b) {
        a.Swap(&b);
    }
    inline void Swap(Messages* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(Messages* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    Messages* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<Messages>(arena);
    }
    void CopyFrom(const Messages& from);
    void MergeFrom(const Messages& from) {
        Messages::MergeImpl(*this, from);
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
    void InternalSwap(Messages* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.Messages";
    }

   protected:
    explicit Messages(::google::protobuf::Arena* arena);
    Messages(::google::protobuf::Arena* arena, const Messages& from);
    Messages(::google::protobuf::Arena* arena, Messages&& from) noexcept
        : Messages(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<34> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kMessagesFieldNumber = 1,
    };
    // repeated .turms.client.model.proto.Message messages = 1;
    int messages_size() const;

   private:
    int _internal_messages_size() const;

   public:
    void clear_messages();
    ::turms::client::model::proto::Message* mutable_messages(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>*
    mutable_messages();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>&
    _internal_messages() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>*
    _internal_mutable_messages();

   public:
    const ::turms::client::model::proto::Message& messages(int index) const;
    ::turms::client::model::proto::Message* add_messages();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>& messages()
        const;
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.Messages)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<0, 1, 1, 0, 2> _table_;

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
                              const Messages& from_msg);
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message> messages_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fmessage_2fmessages_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Messages

// repeated .turms.client.model.proto.Message messages = 1;
inline int Messages::_internal_messages_size() const {
    return _internal_messages().size();
}
inline int Messages::messages_size() const {
    return _internal_messages_size();
}
inline ::turms::client::model::proto::Message* Messages::mutable_messages(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Messages.messages)
    return _internal_mutable_messages()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>*
Messages::mutable_messages() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.Messages.messages)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_messages();
}
inline const ::turms::client::model::proto::Message& Messages::messages(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Messages.messages)
    return _internal_messages().Get(index);
}
inline ::turms::client::model::proto::Message* Messages::add_messages()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Message* _add = _internal_mutable_messages()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.Messages.messages)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>&
Messages::messages() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.Messages.messages)
    return _internal_messages();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>&
Messages::_internal_messages() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.messages_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>*
Messages::_internal_mutable_messages() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.messages_;
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

#endif  // model_2fmessage_2fmessages_2eproto_2epb_2eh