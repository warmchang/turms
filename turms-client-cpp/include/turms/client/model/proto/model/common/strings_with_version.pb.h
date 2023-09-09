// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/common/strings_with_version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fcommon_2fstrings_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fcommon_2fstrings_5fwith_5fversion_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fcommon_2fstrings_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fcommon_2fstrings_5fwith_5fversion_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class StringsWithVersion;
struct StringsWithVersionDefaultTypeInternal;
extern StringsWithVersionDefaultTypeInternal _StringsWithVersion_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class StringsWithVersion final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.StringsWithVersion) */ {
 public:
  inline StringsWithVersion() : StringsWithVersion(nullptr) {}
  ~StringsWithVersion() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR StringsWithVersion(::google::protobuf::internal::ConstantInitialized);

  StringsWithVersion(const StringsWithVersion& from);
  StringsWithVersion(StringsWithVersion&& from) noexcept
    : StringsWithVersion() {
    *this = ::std::move(from);
  }

  inline StringsWithVersion& operator=(const StringsWithVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline StringsWithVersion& operator=(StringsWithVersion&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const StringsWithVersion& default_instance() {
    return *internal_default_instance();
  }
  static inline const StringsWithVersion* internal_default_instance() {
    return reinterpret_cast<const StringsWithVersion*>(
               &_StringsWithVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StringsWithVersion& a, StringsWithVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(StringsWithVersion* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StringsWithVersion* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StringsWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StringsWithVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const StringsWithVersion& from);
  void MergeFrom(const StringsWithVersion& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StringsWithVersion* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.StringsWithVersion";
  }
  protected:
  explicit StringsWithVersion(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStringsFieldNumber = 1,
    kLastUpdatedDateFieldNumber = 2,
  };
  // repeated string strings = 1;
  int strings_size() const;
  private:
  int _internal_strings_size() const;

  public:
  void clear_strings() ;
  const std::string& strings(int index) const;
  std::string* mutable_strings(int index);
  void set_strings(int index, const std::string& value);
  void set_strings(int index, std::string&& value);
  void set_strings(int index, const char* value);
  void set_strings(int index, const char* value, std::size_t size);
  void set_strings(int index, absl::string_view value);
  std::string* add_strings();
  void add_strings(const std::string& value);
  void add_strings(std::string&& value);
  void add_strings(const char* value);
  void add_strings(const char* value, std::size_t size);
  void add_strings(absl::string_view value);
  const ::google::protobuf::RepeatedPtrField<std::string>& strings() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_strings();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_strings() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_strings();

  public:
  // optional int64 last_updated_date = 2;
  bool has_last_updated_date() const;
  void clear_last_updated_date() ;
  ::int64_t last_updated_date() const;
  void set_last_updated_date(::int64_t value);

  private:
  ::int64_t _internal_last_updated_date() const;
  void _internal_set_last_updated_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.StringsWithVersion)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<1, 2, 0, 59, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedPtrField<std::string> strings_;
    ::int64_t last_updated_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fcommon_2fstrings_5fwith_5fversion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// StringsWithVersion

// repeated string strings = 1;
inline int StringsWithVersion::_internal_strings_size() const {
  return _internal_strings().size();
}
inline int StringsWithVersion::strings_size() const {
  return _internal_strings_size();
}
inline void StringsWithVersion::clear_strings() {
  _internal_mutable_strings()->Clear();
}
inline std::string* StringsWithVersion::add_strings() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  std::string* _s = _internal_mutable_strings()->Add();
  // @@protoc_insertion_point(field_add_mutable:turms.client.model.proto.StringsWithVersion.strings)
  return _s;
}
inline const std::string& StringsWithVersion::strings(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.StringsWithVersion.strings)
  return _internal_strings().Get(index);
}
inline std::string* StringsWithVersion::mutable_strings(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.StringsWithVersion.strings)
  return _internal_mutable_strings()->Mutable(index);
}
inline void StringsWithVersion::set_strings(int index, const std::string& value) {
  _internal_mutable_strings()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::set_strings(int index, std::string&& value) {
  _internal_mutable_strings()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::set_strings(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_strings()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::set_strings(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_strings()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::set_strings(int index, absl::string_view value) {
  _internal_mutable_strings()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::add_strings(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_strings()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::add_strings(std::string&& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_strings()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::add_strings(const char* value) {
  ABSL_DCHECK(value != nullptr);
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_strings()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::add_strings(const char* value, std::size_t size) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_strings()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:turms.client.model.proto.StringsWithVersion.strings)
}
inline void StringsWithVersion::add_strings(absl::string_view value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_strings()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:turms.client.model.proto.StringsWithVersion.strings)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
StringsWithVersion::strings() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.StringsWithVersion.strings)
  return _internal_strings();
}
inline ::google::protobuf::RepeatedPtrField<std::string>* StringsWithVersion::mutable_strings() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.StringsWithVersion.strings)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_strings();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
StringsWithVersion::_internal_strings() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.strings_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
StringsWithVersion::_internal_mutable_strings() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.strings_;
}

// optional int64 last_updated_date = 2;
inline bool StringsWithVersion::has_last_updated_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void StringsWithVersion::clear_last_updated_date() {
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t StringsWithVersion::last_updated_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.StringsWithVersion.last_updated_date)
  return _internal_last_updated_date();
}
inline void StringsWithVersion::set_last_updated_date(::int64_t value) {
  _internal_set_last_updated_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.StringsWithVersion.last_updated_date)
}
inline ::int64_t StringsWithVersion::_internal_last_updated_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.last_updated_date_;
}
inline void StringsWithVersion::_internal_set_last_updated_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.last_updated_date_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fcommon_2fstrings_5fwith_5fversion_2eproto_2epb_2eh