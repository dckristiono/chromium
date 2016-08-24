// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "metadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace safe_browsing {

void protobuf_ShutdownFile_metadata_2eproto() {
  delete MalwarePatternType::default_instance_;
  delete SocialEngineeringPatternType::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_metadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_metadata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MalwarePatternType::default_instance_ = new MalwarePatternType();
  SocialEngineeringPatternType::default_instance_ = new SocialEngineeringPatternType();
  MalwarePatternType::default_instance_->InitAsDefaultInstance();
  SocialEngineeringPatternType::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_metadata_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_metadata_2eproto_once_);
void protobuf_AddDesc_metadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_metadata_2eproto_once_,
                 &protobuf_AddDesc_metadata_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_metadata_2eproto {
  StaticDescriptorInitializer_metadata_2eproto() {
    protobuf_AddDesc_metadata_2eproto();
  }
} static_descriptor_initializer_metadata_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMalwarePatternType(
    MalwarePatternType* ptr) {
  return ptr->mutable_unknown_fields();
}

bool MalwarePatternType_PATTERN_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::TYPE_UNSPECIFIED;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::LANDING;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::DISTRIBUTION;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::PATTERN_TYPE_MIN;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::PATTERN_TYPE_MAX;
const int MalwarePatternType::PATTERN_TYPE_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MalwarePatternType::kPatternTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MalwarePatternType::MalwarePatternType()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:safe_browsing.MalwarePatternType)
}

void MalwarePatternType::InitAsDefaultInstance() {
}

MalwarePatternType::MalwarePatternType(const MalwarePatternType& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:safe_browsing.MalwarePatternType)
}

void MalwarePatternType::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pattern_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MalwarePatternType::~MalwarePatternType() {
  // @@protoc_insertion_point(destructor:safe_browsing.MalwarePatternType)
  SharedDtor();
}

void MalwarePatternType::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MalwarePatternType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MalwarePatternType& MalwarePatternType::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_metadata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_metadata_2eproto();
#endif
  return *default_instance_;
}

MalwarePatternType* MalwarePatternType::default_instance_ = NULL;

MalwarePatternType* MalwarePatternType::New(::google::protobuf::Arena* arena) const {
  MalwarePatternType* n = new MalwarePatternType;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MalwarePatternType::Clear() {
// @@protoc_insertion_point(message_clear_start:safe_browsing.MalwarePatternType)
  pattern_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MalwarePatternType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMalwarePatternType, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:safe_browsing.MalwarePatternType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::MalwarePatternType_PATTERN_TYPE_IsValid(value)) {
            set_pattern_type(static_cast< ::safe_browsing::MalwarePatternType_PATTERN_TYPE >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:safe_browsing.MalwarePatternType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:safe_browsing.MalwarePatternType)
  return false;
#undef DO_
}

void MalwarePatternType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:safe_browsing.MalwarePatternType)
  // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->pattern_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:safe_browsing.MalwarePatternType)
}

int MalwarePatternType::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:safe_browsing.MalwarePatternType)
  int total_size = 0;

  // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->pattern_type());
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MalwarePatternType::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MalwarePatternType*>(&from));
}

void MalwarePatternType::MergeFrom(const MalwarePatternType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:safe_browsing.MalwarePatternType)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pattern_type()) {
      set_pattern_type(from.pattern_type());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MalwarePatternType::CopyFrom(const MalwarePatternType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:safe_browsing.MalwarePatternType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MalwarePatternType::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MalwarePatternType::Swap(MalwarePatternType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MalwarePatternType::InternalSwap(MalwarePatternType* other) {
  std::swap(pattern_type_, other->pattern_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MalwarePatternType::GetTypeName() const {
  return "safe_browsing.MalwarePatternType";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MalwarePatternType

// required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
bool MalwarePatternType::has_pattern_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MalwarePatternType::set_has_pattern_type() {
  _has_bits_[0] |= 0x00000001u;
}
void MalwarePatternType::clear_has_pattern_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void MalwarePatternType::clear_pattern_type() {
  pattern_type_ = 0;
  clear_has_pattern_type();
}
 ::safe_browsing::MalwarePatternType_PATTERN_TYPE MalwarePatternType::pattern_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.MalwarePatternType.pattern_type)
  return static_cast< ::safe_browsing::MalwarePatternType_PATTERN_TYPE >(pattern_type_);
}
 void MalwarePatternType::set_pattern_type(::safe_browsing::MalwarePatternType_PATTERN_TYPE value) {
  assert(::safe_browsing::MalwarePatternType_PATTERN_TYPE_IsValid(value));
  set_has_pattern_type();
  pattern_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.MalwarePatternType.pattern_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForSocialEngineeringPatternType(
    SocialEngineeringPatternType* ptr) {
  return ptr->mutable_unknown_fields();
}

bool SocialEngineeringPatternType_PATTERN_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::TYPE_UNSPECIFIED;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::SOCIAL_ENGINEERING_ADS;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::SOCIAL_ENGINEERING_LANDING;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PHISHING;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PATTERN_TYPE_MIN;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PATTERN_TYPE_MAX;
const int SocialEngineeringPatternType::PATTERN_TYPE_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SocialEngineeringPatternType::kPatternTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SocialEngineeringPatternType::SocialEngineeringPatternType()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:safe_browsing.SocialEngineeringPatternType)
}

void SocialEngineeringPatternType::InitAsDefaultInstance() {
}

SocialEngineeringPatternType::SocialEngineeringPatternType(const SocialEngineeringPatternType& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:safe_browsing.SocialEngineeringPatternType)
}

void SocialEngineeringPatternType::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pattern_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SocialEngineeringPatternType::~SocialEngineeringPatternType() {
  // @@protoc_insertion_point(destructor:safe_browsing.SocialEngineeringPatternType)
  SharedDtor();
}

void SocialEngineeringPatternType::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SocialEngineeringPatternType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SocialEngineeringPatternType& SocialEngineeringPatternType::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_metadata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_metadata_2eproto();
#endif
  return *default_instance_;
}

SocialEngineeringPatternType* SocialEngineeringPatternType::default_instance_ = NULL;

SocialEngineeringPatternType* SocialEngineeringPatternType::New(::google::protobuf::Arena* arena) const {
  SocialEngineeringPatternType* n = new SocialEngineeringPatternType;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SocialEngineeringPatternType::Clear() {
// @@protoc_insertion_point(message_clear_start:safe_browsing.SocialEngineeringPatternType)
  pattern_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SocialEngineeringPatternType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForSocialEngineeringPatternType, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:safe_browsing.SocialEngineeringPatternType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE_IsValid(value)) {
            set_pattern_type(static_cast< ::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:safe_browsing.SocialEngineeringPatternType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:safe_browsing.SocialEngineeringPatternType)
  return false;
#undef DO_
}

void SocialEngineeringPatternType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:safe_browsing.SocialEngineeringPatternType)
  // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->pattern_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:safe_browsing.SocialEngineeringPatternType)
}

int SocialEngineeringPatternType::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:safe_browsing.SocialEngineeringPatternType)
  int total_size = 0;

  // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->pattern_type());
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SocialEngineeringPatternType::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SocialEngineeringPatternType*>(&from));
}

void SocialEngineeringPatternType::MergeFrom(const SocialEngineeringPatternType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:safe_browsing.SocialEngineeringPatternType)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pattern_type()) {
      set_pattern_type(from.pattern_type());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void SocialEngineeringPatternType::CopyFrom(const SocialEngineeringPatternType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:safe_browsing.SocialEngineeringPatternType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SocialEngineeringPatternType::IsInitialized() const {

  return true;
}

void SocialEngineeringPatternType::Swap(SocialEngineeringPatternType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SocialEngineeringPatternType::InternalSwap(SocialEngineeringPatternType* other) {
  std::swap(pattern_type_, other->pattern_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string SocialEngineeringPatternType::GetTypeName() const {
  return "safe_browsing.SocialEngineeringPatternType";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SocialEngineeringPatternType

// optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
bool SocialEngineeringPatternType::has_pattern_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SocialEngineeringPatternType::set_has_pattern_type() {
  _has_bits_[0] |= 0x00000001u;
}
void SocialEngineeringPatternType::clear_has_pattern_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void SocialEngineeringPatternType::clear_pattern_type() {
  pattern_type_ = 0;
  clear_has_pattern_type();
}
 ::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::pattern_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.SocialEngineeringPatternType.pattern_type)
  return static_cast< ::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE >(pattern_type_);
}
 void SocialEngineeringPatternType::set_pattern_type(::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE value) {
  assert(::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE_IsValid(value));
  set_has_pattern_type();
  pattern_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.SocialEngineeringPatternType.pattern_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)
