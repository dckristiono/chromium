// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unique_position.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unique_position.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_unique_5fposition_2eproto() {
  delete UniquePosition::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_unique_5fposition_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_unique_5fposition_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  UniquePosition::default_instance_ = new UniquePosition();
  UniquePosition::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unique_5fposition_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_unique_5fposition_2eproto_once_);
void protobuf_AddDesc_unique_5fposition_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_unique_5fposition_2eproto_once_,
                 &protobuf_AddDesc_unique_5fposition_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unique_5fposition_2eproto {
  StaticDescriptorInitializer_unique_5fposition_2eproto() {
    protobuf_AddDesc_unique_5fposition_2eproto();
  }
} static_descriptor_initializer_unique_5fposition_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForUniquePosition(
    UniquePosition* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UniquePosition::kValueFieldNumber;
const int UniquePosition::kCompressedValueFieldNumber;
const int UniquePosition::kUncompressedLengthFieldNumber;
const int UniquePosition::kCustomCompressedV1FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UniquePosition::UniquePosition()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.UniquePosition)
}

void UniquePosition::InitAsDefaultInstance() {
}

UniquePosition::UniquePosition(const UniquePosition& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.UniquePosition)
}

void UniquePosition::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compressed_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uncompressed_length_ = GOOGLE_ULONGLONG(0);
  custom_compressed_v1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UniquePosition::~UniquePosition() {
  // @@protoc_insertion_point(destructor:sync_pb.UniquePosition)
  SharedDtor();
}

void UniquePosition::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compressed_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  custom_compressed_v1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UniquePosition::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UniquePosition& UniquePosition::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unique_5fposition_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unique_5fposition_2eproto();
#endif
  return *default_instance_;
}

UniquePosition* UniquePosition::default_instance_ = NULL;

UniquePosition* UniquePosition::New(::google::protobuf::Arena* arena) const {
  UniquePosition* n = new UniquePosition;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UniquePosition::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.UniquePosition)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_value()) {
      value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_compressed_value()) {
      compressed_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    uncompressed_length_ = GOOGLE_ULONGLONG(0);
    if (has_custom_compressed_v1()) {
      custom_compressed_v1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool UniquePosition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForUniquePosition, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.UniquePosition)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes value = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_compressed_value;
        break;
      }

      // optional bytes compressed_value = 2;
      case 2: {
        if (tag == 18) {
         parse_compressed_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_compressed_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_uncompressed_length;
        break;
      }

      // optional uint64 uncompressed_length = 3;
      case 3: {
        if (tag == 24) {
         parse_uncompressed_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &uncompressed_length_)));
          set_has_uncompressed_length();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_custom_compressed_v1;
        break;
      }

      // optional bytes custom_compressed_v1 = 4;
      case 4: {
        if (tag == 34) {
         parse_custom_compressed_v1:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_custom_compressed_v1()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.UniquePosition)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.UniquePosition)
  return false;
#undef DO_
}

void UniquePosition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.UniquePosition)
  // optional bytes value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->value(), output);
  }

  // optional bytes compressed_value = 2;
  if (has_compressed_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->compressed_value(), output);
  }

  // optional uint64 uncompressed_length = 3;
  if (has_uncompressed_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->uncompressed_length(), output);
  }

  // optional bytes custom_compressed_v1 = 4;
  if (has_custom_compressed_v1()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->custom_compressed_v1(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.UniquePosition)
}

int UniquePosition::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.UniquePosition)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional bytes value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->value());
    }

    // optional bytes compressed_value = 2;
    if (has_compressed_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->compressed_value());
    }

    // optional uint64 uncompressed_length = 3;
    if (has_uncompressed_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->uncompressed_length());
    }

    // optional bytes custom_compressed_v1 = 4;
    if (has_custom_compressed_v1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->custom_compressed_v1());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UniquePosition::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UniquePosition*>(&from));
}

void UniquePosition::MergeFrom(const UniquePosition& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.UniquePosition)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_value()) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
    if (from.has_compressed_value()) {
      set_has_compressed_value();
      compressed_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.compressed_value_);
    }
    if (from.has_uncompressed_length()) {
      set_uncompressed_length(from.uncompressed_length());
    }
    if (from.has_custom_compressed_v1()) {
      set_has_custom_compressed_v1();
      custom_compressed_v1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.custom_compressed_v1_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void UniquePosition::CopyFrom(const UniquePosition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.UniquePosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UniquePosition::IsInitialized() const {

  return true;
}

void UniquePosition::Swap(UniquePosition* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UniquePosition::InternalSwap(UniquePosition* other) {
  value_.Swap(&other->value_);
  compressed_value_.Swap(&other->compressed_value_);
  std::swap(uncompressed_length_, other->uncompressed_length_);
  custom_compressed_v1_.Swap(&other->custom_compressed_v1_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string UniquePosition::GetTypeName() const {
  return "sync_pb.UniquePosition";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UniquePosition

// optional bytes value = 1;
bool UniquePosition::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UniquePosition::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
void UniquePosition::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
void UniquePosition::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
 const ::std::string& UniquePosition::value() const {
  // @@protoc_insertion_point(field_get:sync_pb.UniquePosition.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.UniquePosition.value)
}
 void UniquePosition::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.UniquePosition.value)
}
 void UniquePosition::set_value(const void* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.UniquePosition.value)
}
 ::std::string* UniquePosition::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.UniquePosition.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UniquePosition::release_value() {
  // @@protoc_insertion_point(field_release:sync_pb.UniquePosition.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.UniquePosition.value)
}

// optional bytes compressed_value = 2;
bool UniquePosition::has_compressed_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UniquePosition::set_has_compressed_value() {
  _has_bits_[0] |= 0x00000002u;
}
void UniquePosition::clear_has_compressed_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void UniquePosition::clear_compressed_value() {
  compressed_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_compressed_value();
}
 const ::std::string& UniquePosition::compressed_value() const {
  // @@protoc_insertion_point(field_get:sync_pb.UniquePosition.compressed_value)
  return compressed_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_compressed_value(const ::std::string& value) {
  set_has_compressed_value();
  compressed_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.UniquePosition.compressed_value)
}
 void UniquePosition::set_compressed_value(const char* value) {
  set_has_compressed_value();
  compressed_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.UniquePosition.compressed_value)
}
 void UniquePosition::set_compressed_value(const void* value, size_t size) {
  set_has_compressed_value();
  compressed_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.UniquePosition.compressed_value)
}
 ::std::string* UniquePosition::mutable_compressed_value() {
  set_has_compressed_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.UniquePosition.compressed_value)
  return compressed_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UniquePosition::release_compressed_value() {
  // @@protoc_insertion_point(field_release:sync_pb.UniquePosition.compressed_value)
  clear_has_compressed_value();
  return compressed_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_allocated_compressed_value(::std::string* compressed_value) {
  if (compressed_value != NULL) {
    set_has_compressed_value();
  } else {
    clear_has_compressed_value();
  }
  compressed_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), compressed_value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.UniquePosition.compressed_value)
}

// optional uint64 uncompressed_length = 3;
bool UniquePosition::has_uncompressed_length() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void UniquePosition::set_has_uncompressed_length() {
  _has_bits_[0] |= 0x00000004u;
}
void UniquePosition::clear_has_uncompressed_length() {
  _has_bits_[0] &= ~0x00000004u;
}
void UniquePosition::clear_uncompressed_length() {
  uncompressed_length_ = GOOGLE_ULONGLONG(0);
  clear_has_uncompressed_length();
}
 ::google::protobuf::uint64 UniquePosition::uncompressed_length() const {
  // @@protoc_insertion_point(field_get:sync_pb.UniquePosition.uncompressed_length)
  return uncompressed_length_;
}
 void UniquePosition::set_uncompressed_length(::google::protobuf::uint64 value) {
  set_has_uncompressed_length();
  uncompressed_length_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.UniquePosition.uncompressed_length)
}

// optional bytes custom_compressed_v1 = 4;
bool UniquePosition::has_custom_compressed_v1() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void UniquePosition::set_has_custom_compressed_v1() {
  _has_bits_[0] |= 0x00000008u;
}
void UniquePosition::clear_has_custom_compressed_v1() {
  _has_bits_[0] &= ~0x00000008u;
}
void UniquePosition::clear_custom_compressed_v1() {
  custom_compressed_v1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_custom_compressed_v1();
}
 const ::std::string& UniquePosition::custom_compressed_v1() const {
  // @@protoc_insertion_point(field_get:sync_pb.UniquePosition.custom_compressed_v1)
  return custom_compressed_v1_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_custom_compressed_v1(const ::std::string& value) {
  set_has_custom_compressed_v1();
  custom_compressed_v1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.UniquePosition.custom_compressed_v1)
}
 void UniquePosition::set_custom_compressed_v1(const char* value) {
  set_has_custom_compressed_v1();
  custom_compressed_v1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.UniquePosition.custom_compressed_v1)
}
 void UniquePosition::set_custom_compressed_v1(const void* value, size_t size) {
  set_has_custom_compressed_v1();
  custom_compressed_v1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.UniquePosition.custom_compressed_v1)
}
 ::std::string* UniquePosition::mutable_custom_compressed_v1() {
  set_has_custom_compressed_v1();
  // @@protoc_insertion_point(field_mutable:sync_pb.UniquePosition.custom_compressed_v1)
  return custom_compressed_v1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UniquePosition::release_custom_compressed_v1() {
  // @@protoc_insertion_point(field_release:sync_pb.UniquePosition.custom_compressed_v1)
  clear_has_custom_compressed_v1();
  return custom_compressed_v1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UniquePosition::set_allocated_custom_compressed_v1(::std::string* custom_compressed_v1) {
  if (custom_compressed_v1 != NULL) {
    set_has_custom_compressed_v1();
  } else {
    clear_has_custom_compressed_v1();
  }
  custom_compressed_v1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), custom_compressed_v1);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.UniquePosition.custom_compressed_v1)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)