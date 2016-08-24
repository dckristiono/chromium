// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: history_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "history_status.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_history_5fstatus_2eproto() {
  delete HistoryStatusRequest::default_instance_;
  delete HistoryStatusResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_history_5fstatus_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_history_5fstatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  HistoryStatusRequest::default_instance_ = new HistoryStatusRequest();
  HistoryStatusResponse::default_instance_ = new HistoryStatusResponse();
  HistoryStatusRequest::default_instance_->InitAsDefaultInstance();
  HistoryStatusResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_history_5fstatus_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_history_5fstatus_2eproto_once_);
void protobuf_AddDesc_history_5fstatus_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_history_5fstatus_2eproto_once_,
                 &protobuf_AddDesc_history_5fstatus_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_history_5fstatus_2eproto {
  StaticDescriptorInitializer_history_5fstatus_2eproto() {
    protobuf_AddDesc_history_5fstatus_2eproto();
  }
} static_descriptor_initializer_history_5fstatus_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForHistoryStatusRequest(
    HistoryStatusRequest* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HistoryStatusRequest::HistoryStatusRequest()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.HistoryStatusRequest)
}

void HistoryStatusRequest::InitAsDefaultInstance() {
}

HistoryStatusRequest::HistoryStatusRequest(const HistoryStatusRequest& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.HistoryStatusRequest)
}

void HistoryStatusRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HistoryStatusRequest::~HistoryStatusRequest() {
  // @@protoc_insertion_point(destructor:sync_pb.HistoryStatusRequest)
  SharedDtor();
}

void HistoryStatusRequest::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HistoryStatusRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HistoryStatusRequest& HistoryStatusRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_history_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_history_5fstatus_2eproto();
#endif
  return *default_instance_;
}

HistoryStatusRequest* HistoryStatusRequest::default_instance_ = NULL;

HistoryStatusRequest* HistoryStatusRequest::New(::google::protobuf::Arena* arena) const {
  HistoryStatusRequest* n = new HistoryStatusRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HistoryStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.HistoryStatusRequest)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HistoryStatusRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForHistoryStatusRequest, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.HistoryStatusRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.HistoryStatusRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.HistoryStatusRequest)
  return false;
#undef DO_
}

void HistoryStatusRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.HistoryStatusRequest)
  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.HistoryStatusRequest)
}

int HistoryStatusRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.HistoryStatusRequest)
  int total_size = 0;

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HistoryStatusRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HistoryStatusRequest*>(&from));
}

void HistoryStatusRequest::MergeFrom(const HistoryStatusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.HistoryStatusRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void HistoryStatusRequest::CopyFrom(const HistoryStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.HistoryStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HistoryStatusRequest::IsInitialized() const {

  return true;
}

void HistoryStatusRequest::Swap(HistoryStatusRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HistoryStatusRequest::InternalSwap(HistoryStatusRequest* other) {
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HistoryStatusRequest::GetTypeName() const {
  return "sync_pb.HistoryStatusRequest";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HistoryStatusRequest

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForHistoryStatusResponse(
    HistoryStatusResponse* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HistoryStatusResponse::kMinPollIntervalSecondsFieldNumber;
const int HistoryStatusResponse::kHasDerivedDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HistoryStatusResponse::HistoryStatusResponse()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.HistoryStatusResponse)
}

void HistoryStatusResponse::InitAsDefaultInstance() {
}

HistoryStatusResponse::HistoryStatusResponse(const HistoryStatusResponse& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.HistoryStatusResponse)
}

void HistoryStatusResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  min_poll_interval_seconds_ = 3600;
  has_derived_data_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HistoryStatusResponse::~HistoryStatusResponse() {
  // @@protoc_insertion_point(destructor:sync_pb.HistoryStatusResponse)
  SharedDtor();
}

void HistoryStatusResponse::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void HistoryStatusResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HistoryStatusResponse& HistoryStatusResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_history_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_history_5fstatus_2eproto();
#endif
  return *default_instance_;
}

HistoryStatusResponse* HistoryStatusResponse::default_instance_ = NULL;

HistoryStatusResponse* HistoryStatusResponse::New(::google::protobuf::Arena* arena) const {
  HistoryStatusResponse* n = new HistoryStatusResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HistoryStatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.HistoryStatusResponse)
  if (_has_bits_[0 / 32] & 3u) {
    min_poll_interval_seconds_ = 3600;
    has_derived_data_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HistoryStatusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForHistoryStatusResponse, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.HistoryStatusResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 min_poll_interval_seconds = 1 [default = 3600];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_poll_interval_seconds_)));
          set_has_min_poll_interval_seconds();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_has_derived_data;
        break;
      }

      // optional bool has_derived_data = 2;
      case 2: {
        if (tag == 16) {
         parse_has_derived_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &has_derived_data_)));
          set_has_has_derived_data();
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
  // @@protoc_insertion_point(parse_success:sync_pb.HistoryStatusResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.HistoryStatusResponse)
  return false;
#undef DO_
}

void HistoryStatusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.HistoryStatusResponse)
  // optional int32 min_poll_interval_seconds = 1 [default = 3600];
  if (has_min_poll_interval_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->min_poll_interval_seconds(), output);
  }

  // optional bool has_derived_data = 2;
  if (has_has_derived_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->has_derived_data(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.HistoryStatusResponse)
}

int HistoryStatusResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.HistoryStatusResponse)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int32 min_poll_interval_seconds = 1 [default = 3600];
    if (has_min_poll_interval_seconds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->min_poll_interval_seconds());
    }

    // optional bool has_derived_data = 2;
    if (has_has_derived_data()) {
      total_size += 1 + 1;
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HistoryStatusResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HistoryStatusResponse*>(&from));
}

void HistoryStatusResponse::MergeFrom(const HistoryStatusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.HistoryStatusResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_min_poll_interval_seconds()) {
      set_min_poll_interval_seconds(from.min_poll_interval_seconds());
    }
    if (from.has_has_derived_data()) {
      set_has_derived_data(from.has_derived_data());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void HistoryStatusResponse::CopyFrom(const HistoryStatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.HistoryStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HistoryStatusResponse::IsInitialized() const {

  return true;
}

void HistoryStatusResponse::Swap(HistoryStatusResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HistoryStatusResponse::InternalSwap(HistoryStatusResponse* other) {
  std::swap(min_poll_interval_seconds_, other->min_poll_interval_seconds_);
  std::swap(has_derived_data_, other->has_derived_data_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HistoryStatusResponse::GetTypeName() const {
  return "sync_pb.HistoryStatusResponse";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HistoryStatusResponse

// optional int32 min_poll_interval_seconds = 1 [default = 3600];
bool HistoryStatusResponse::has_min_poll_interval_seconds() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HistoryStatusResponse::set_has_min_poll_interval_seconds() {
  _has_bits_[0] |= 0x00000001u;
}
void HistoryStatusResponse::clear_has_min_poll_interval_seconds() {
  _has_bits_[0] &= ~0x00000001u;
}
void HistoryStatusResponse::clear_min_poll_interval_seconds() {
  min_poll_interval_seconds_ = 3600;
  clear_has_min_poll_interval_seconds();
}
 ::google::protobuf::int32 HistoryStatusResponse::min_poll_interval_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.HistoryStatusResponse.min_poll_interval_seconds)
  return min_poll_interval_seconds_;
}
 void HistoryStatusResponse::set_min_poll_interval_seconds(::google::protobuf::int32 value) {
  set_has_min_poll_interval_seconds();
  min_poll_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.HistoryStatusResponse.min_poll_interval_seconds)
}

// optional bool has_derived_data = 2;
bool HistoryStatusResponse::has_has_derived_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HistoryStatusResponse::set_has_has_derived_data() {
  _has_bits_[0] |= 0x00000002u;
}
void HistoryStatusResponse::clear_has_has_derived_data() {
  _has_bits_[0] &= ~0x00000002u;
}
void HistoryStatusResponse::clear_has_derived_data() {
  has_derived_data_ = false;
  clear_has_has_derived_data();
}
 bool HistoryStatusResponse::has_derived_data() const {
  // @@protoc_insertion_point(field_get:sync_pb.HistoryStatusResponse.has_derived_data)
  return has_derived_data_;
}
 void HistoryStatusResponse::set_has_derived_data(bool value) {
  set_has_has_derived_data();
  has_derived_data_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.HistoryStatusResponse.has_derived_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
