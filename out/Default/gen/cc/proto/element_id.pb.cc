// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: element_id.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "element_id.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_element_5fid_2eproto() {
  delete ElementId::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_element_5fid_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_element_5fid_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ElementId::default_instance_ = new ElementId();
  ElementId::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_element_5fid_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_element_5fid_2eproto_once_);
void protobuf_AddDesc_element_5fid_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_element_5fid_2eproto_once_,
                 &protobuf_AddDesc_element_5fid_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_element_5fid_2eproto {
  StaticDescriptorInitializer_element_5fid_2eproto() {
    protobuf_AddDesc_element_5fid_2eproto();
  }
} static_descriptor_initializer_element_5fid_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForElementId(
    ElementId* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ElementId::kPrimaryIdFieldNumber;
const int ElementId::kSecondaryIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ElementId::ElementId()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cc.proto.ElementId)
}

void ElementId::InitAsDefaultInstance() {
}

ElementId::ElementId(const ElementId& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cc.proto.ElementId)
}

void ElementId::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  primary_id_ = GOOGLE_LONGLONG(0);
  secondary_id_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ElementId::~ElementId() {
  // @@protoc_insertion_point(destructor:cc.proto.ElementId)
  SharedDtor();
}

void ElementId::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ElementId::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ElementId& ElementId::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_element_5fid_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_element_5fid_2eproto();
#endif
  return *default_instance_;
}

ElementId* ElementId::default_instance_ = NULL;

ElementId* ElementId::New(::google::protobuf::Arena* arena) const {
  ElementId* n = new ElementId;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ElementId::Clear() {
// @@protoc_insertion_point(message_clear_start:cc.proto.ElementId)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ElementId, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ElementId*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(primary_id_, secondary_id_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ElementId::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForElementId, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cc.proto.ElementId)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 primary_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &primary_id_)));
          set_has_primary_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_secondary_id;
        break;
      }

      // required int64 secondary_id = 2;
      case 2: {
        if (tag == 16) {
         parse_secondary_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &secondary_id_)));
          set_has_secondary_id();
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
  // @@protoc_insertion_point(parse_success:cc.proto.ElementId)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cc.proto.ElementId)
  return false;
#undef DO_
}

void ElementId::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cc.proto.ElementId)
  // required int64 primary_id = 1;
  if (has_primary_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->primary_id(), output);
  }

  // required int64 secondary_id = 2;
  if (has_secondary_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->secondary_id(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cc.proto.ElementId)
}

int ElementId::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:cc.proto.ElementId)
  int total_size = 0;

  if (has_primary_id()) {
    // required int64 primary_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->primary_id());
  }

  if (has_secondary_id()) {
    // required int64 secondary_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->secondary_id());
  }

  return total_size;
}
int ElementId::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cc.proto.ElementId)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int64 primary_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->primary_id());

    // required int64 secondary_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->secondary_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ElementId::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ElementId*>(&from));
}

void ElementId::MergeFrom(const ElementId& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cc.proto.ElementId)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_primary_id()) {
      set_primary_id(from.primary_id());
    }
    if (from.has_secondary_id()) {
      set_secondary_id(from.secondary_id());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ElementId::CopyFrom(const ElementId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cc.proto.ElementId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ElementId::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ElementId::Swap(ElementId* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ElementId::InternalSwap(ElementId* other) {
  std::swap(primary_id_, other->primary_id_);
  std::swap(secondary_id_, other->secondary_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ElementId::GetTypeName() const {
  return "cc.proto.ElementId";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ElementId

// required int64 primary_id = 1;
bool ElementId::has_primary_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ElementId::set_has_primary_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ElementId::clear_has_primary_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ElementId::clear_primary_id() {
  primary_id_ = GOOGLE_LONGLONG(0);
  clear_has_primary_id();
}
 ::google::protobuf::int64 ElementId::primary_id() const {
  // @@protoc_insertion_point(field_get:cc.proto.ElementId.primary_id)
  return primary_id_;
}
 void ElementId::set_primary_id(::google::protobuf::int64 value) {
  set_has_primary_id();
  primary_id_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.ElementId.primary_id)
}

// required int64 secondary_id = 2;
bool ElementId::has_secondary_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ElementId::set_has_secondary_id() {
  _has_bits_[0] |= 0x00000002u;
}
void ElementId::clear_has_secondary_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void ElementId::clear_secondary_id() {
  secondary_id_ = GOOGLE_LONGLONG(0);
  clear_has_secondary_id();
}
 ::google::protobuf::int64 ElementId::secondary_id() const {
  // @@protoc_insertion_point(field_get:cc.proto.ElementId.secondary_id)
  return secondary_id_;
}
 void ElementId::set_secondary_id(::google::protobuf::int64 value) {
  set_has_secondary_id();
  secondary_id_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.ElementId.secondary_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
