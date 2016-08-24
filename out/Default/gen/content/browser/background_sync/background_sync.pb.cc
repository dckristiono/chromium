// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: background_sync.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "background_sync.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace content {

void protobuf_ShutdownFile_background_5fsync_2eproto() {
  delete BackgroundSyncRegistrationProto::default_instance_;
  delete BackgroundSyncRegistrationsProto::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_background_5fsync_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_background_5fsync_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  BackgroundSyncRegistrationProto::default_instance_ = new BackgroundSyncRegistrationProto();
  BackgroundSyncRegistrationsProto::default_instance_ = new BackgroundSyncRegistrationsProto();
  BackgroundSyncRegistrationProto::default_instance_->InitAsDefaultInstance();
  BackgroundSyncRegistrationsProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_background_5fsync_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_background_5fsync_2eproto_once_);
void protobuf_AddDesc_background_5fsync_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_background_5fsync_2eproto_once_,
                 &protobuf_AddDesc_background_5fsync_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_background_5fsync_2eproto {
  StaticDescriptorInitializer_background_5fsync_2eproto() {
    protobuf_AddDesc_background_5fsync_2eproto();
  }
} static_descriptor_initializer_background_5fsync_2eproto_;
#endif
bool SyncNetworkState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForBackgroundSyncRegistrationProto(
    BackgroundSyncRegistrationProto* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BackgroundSyncRegistrationProto::kIdFieldNumber;
const int BackgroundSyncRegistrationProto::kTagFieldNumber;
const int BackgroundSyncRegistrationProto::kNetworkStateFieldNumber;
const int BackgroundSyncRegistrationProto::kNumAttemptsFieldNumber;
const int BackgroundSyncRegistrationProto::kDelayUntilFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BackgroundSyncRegistrationProto::BackgroundSyncRegistrationProto()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:content.BackgroundSyncRegistrationProto)
}

void BackgroundSyncRegistrationProto::InitAsDefaultInstance() {
}

BackgroundSyncRegistrationProto::BackgroundSyncRegistrationProto(const BackgroundSyncRegistrationProto& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:content.BackgroundSyncRegistrationProto)
}

void BackgroundSyncRegistrationProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = GOOGLE_LONGLONG(0);
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  network_state_ = 0;
  num_attempts_ = 0;
  delay_until_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BackgroundSyncRegistrationProto::~BackgroundSyncRegistrationProto() {
  // @@protoc_insertion_point(destructor:content.BackgroundSyncRegistrationProto)
  SharedDtor();
}

void BackgroundSyncRegistrationProto::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BackgroundSyncRegistrationProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BackgroundSyncRegistrationProto& BackgroundSyncRegistrationProto::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_background_5fsync_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_background_5fsync_2eproto();
#endif
  return *default_instance_;
}

BackgroundSyncRegistrationProto* BackgroundSyncRegistrationProto::default_instance_ = NULL;

BackgroundSyncRegistrationProto* BackgroundSyncRegistrationProto::New(::google::protobuf::Arena* arena) const {
  BackgroundSyncRegistrationProto* n = new BackgroundSyncRegistrationProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BackgroundSyncRegistrationProto::Clear() {
// @@protoc_insertion_point(message_clear_start:content.BackgroundSyncRegistrationProto)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(BackgroundSyncRegistrationProto, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<BackgroundSyncRegistrationProto*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(network_state_, delay_until_);
    id_ = GOOGLE_LONGLONG(0);
    if (has_tag()) {
      tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool BackgroundSyncRegistrationProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForBackgroundSyncRegistrationProto, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:content.BackgroundSyncRegistrationProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tag;
        break;
      }

      // required string tag = 2;
      case 2: {
        if (tag == 18) {
         parse_tag:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_network_state;
        break;
      }

      // required .content.SyncNetworkState network_state = 5;
      case 5: {
        if (tag == 40) {
         parse_network_state:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::content::SyncNetworkState_IsValid(value)) {
            set_network_state(static_cast< ::content::SyncNetworkState >(value));
          } else {
            unknown_fields_stream.WriteVarint32(40);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_num_attempts;
        break;
      }

      // required int32 num_attempts = 7;
      case 7: {
        if (tag == 56) {
         parse_num_attempts:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_attempts_)));
          set_has_num_attempts();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_delay_until;
        break;
      }

      // required int64 delay_until = 8;
      case 8: {
        if (tag == 64) {
         parse_delay_until:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &delay_until_)));
          set_has_delay_until();
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
  // @@protoc_insertion_point(parse_success:content.BackgroundSyncRegistrationProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:content.BackgroundSyncRegistrationProto)
  return false;
#undef DO_
}

void BackgroundSyncRegistrationProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:content.BackgroundSyncRegistrationProto)
  // required int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // required string tag = 2;
  if (has_tag()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tag(), output);
  }

  // required .content.SyncNetworkState network_state = 5;
  if (has_network_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->network_state(), output);
  }

  // required int32 num_attempts = 7;
  if (has_num_attempts()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->num_attempts(), output);
  }

  // required int64 delay_until = 8;
  if (has_delay_until()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->delay_until(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:content.BackgroundSyncRegistrationProto)
}

int BackgroundSyncRegistrationProto::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:content.BackgroundSyncRegistrationProto)
  int total_size = 0;

  if (has_id()) {
    // required int64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  if (has_tag()) {
    // required string tag = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());
  }

  if (has_network_state()) {
    // required .content.SyncNetworkState network_state = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->network_state());
  }

  if (has_num_attempts()) {
    // required int32 num_attempts = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_attempts());
  }

  if (has_delay_until()) {
    // required int64 delay_until = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->delay_until());
  }

  return total_size;
}
int BackgroundSyncRegistrationProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:content.BackgroundSyncRegistrationProto)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required int64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());

    // required string tag = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());

    // required .content.SyncNetworkState network_state = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->network_state());

    // required int32 num_attempts = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_attempts());

    // required int64 delay_until = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->delay_until());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BackgroundSyncRegistrationProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BackgroundSyncRegistrationProto*>(&from));
}

void BackgroundSyncRegistrationProto::MergeFrom(const BackgroundSyncRegistrationProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.BackgroundSyncRegistrationProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_tag()) {
      set_has_tag();
      tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
    }
    if (from.has_network_state()) {
      set_network_state(from.network_state());
    }
    if (from.has_num_attempts()) {
      set_num_attempts(from.num_attempts());
    }
    if (from.has_delay_until()) {
      set_delay_until(from.delay_until());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void BackgroundSyncRegistrationProto::CopyFrom(const BackgroundSyncRegistrationProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.BackgroundSyncRegistrationProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackgroundSyncRegistrationProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void BackgroundSyncRegistrationProto::Swap(BackgroundSyncRegistrationProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BackgroundSyncRegistrationProto::InternalSwap(BackgroundSyncRegistrationProto* other) {
  std::swap(id_, other->id_);
  tag_.Swap(&other->tag_);
  std::swap(network_state_, other->network_state_);
  std::swap(num_attempts_, other->num_attempts_);
  std::swap(delay_until_, other->delay_until_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string BackgroundSyncRegistrationProto::GetTypeName() const {
  return "content.BackgroundSyncRegistrationProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BackgroundSyncRegistrationProto

// required int64 id = 1;
bool BackgroundSyncRegistrationProto::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void BackgroundSyncRegistrationProto::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void BackgroundSyncRegistrationProto::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
 ::google::protobuf::int64 BackgroundSyncRegistrationProto::id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.id)
  return id_;
}
 void BackgroundSyncRegistrationProto::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.id)
}

// required string tag = 2;
bool BackgroundSyncRegistrationProto::has_tag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_tag() {
  _has_bits_[0] |= 0x00000002u;
}
void BackgroundSyncRegistrationProto::clear_has_tag() {
  _has_bits_[0] &= ~0x00000002u;
}
void BackgroundSyncRegistrationProto::clear_tag() {
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tag();
}
 const ::std::string& BackgroundSyncRegistrationProto::tag() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.tag)
  return tag_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BackgroundSyncRegistrationProto::set_tag(const ::std::string& value) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.tag)
}
 void BackgroundSyncRegistrationProto::set_tag(const char* value) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationProto.tag)
}
 void BackgroundSyncRegistrationProto::set_tag(const char* value, size_t size) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationProto.tag)
}
 ::std::string* BackgroundSyncRegistrationProto::mutable_tag() {
  set_has_tag();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationProto.tag)
  return tag_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* BackgroundSyncRegistrationProto::release_tag() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationProto.tag)
  clear_has_tag();
  return tag_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BackgroundSyncRegistrationProto::set_allocated_tag(::std::string* tag) {
  if (tag != NULL) {
    set_has_tag();
  } else {
    clear_has_tag();
  }
  tag_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tag);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationProto.tag)
}

// required .content.SyncNetworkState network_state = 5;
bool BackgroundSyncRegistrationProto::has_network_state() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_network_state() {
  _has_bits_[0] |= 0x00000004u;
}
void BackgroundSyncRegistrationProto::clear_has_network_state() {
  _has_bits_[0] &= ~0x00000004u;
}
void BackgroundSyncRegistrationProto::clear_network_state() {
  network_state_ = 0;
  clear_has_network_state();
}
 ::content::SyncNetworkState BackgroundSyncRegistrationProto::network_state() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.network_state)
  return static_cast< ::content::SyncNetworkState >(network_state_);
}
 void BackgroundSyncRegistrationProto::set_network_state(::content::SyncNetworkState value) {
  assert(::content::SyncNetworkState_IsValid(value));
  set_has_network_state();
  network_state_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.network_state)
}

// required int32 num_attempts = 7;
bool BackgroundSyncRegistrationProto::has_num_attempts() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_num_attempts() {
  _has_bits_[0] |= 0x00000008u;
}
void BackgroundSyncRegistrationProto::clear_has_num_attempts() {
  _has_bits_[0] &= ~0x00000008u;
}
void BackgroundSyncRegistrationProto::clear_num_attempts() {
  num_attempts_ = 0;
  clear_has_num_attempts();
}
 ::google::protobuf::int32 BackgroundSyncRegistrationProto::num_attempts() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.num_attempts)
  return num_attempts_;
}
 void BackgroundSyncRegistrationProto::set_num_attempts(::google::protobuf::int32 value) {
  set_has_num_attempts();
  num_attempts_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.num_attempts)
}

// required int64 delay_until = 8;
bool BackgroundSyncRegistrationProto::has_delay_until() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_delay_until() {
  _has_bits_[0] |= 0x00000010u;
}
void BackgroundSyncRegistrationProto::clear_has_delay_until() {
  _has_bits_[0] &= ~0x00000010u;
}
void BackgroundSyncRegistrationProto::clear_delay_until() {
  delay_until_ = GOOGLE_LONGLONG(0);
  clear_has_delay_until();
}
 ::google::protobuf::int64 BackgroundSyncRegistrationProto::delay_until() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.delay_until)
  return delay_until_;
}
 void BackgroundSyncRegistrationProto::set_delay_until(::google::protobuf::int64 value) {
  set_has_delay_until();
  delay_until_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.delay_until)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForBackgroundSyncRegistrationsProto(
    BackgroundSyncRegistrationsProto* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BackgroundSyncRegistrationsProto::kRegistrationFieldNumber;
const int BackgroundSyncRegistrationsProto::kNextRegistrationIdFieldNumber;
const int BackgroundSyncRegistrationsProto::kOriginFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BackgroundSyncRegistrationsProto::BackgroundSyncRegistrationsProto()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:content.BackgroundSyncRegistrationsProto)
}

void BackgroundSyncRegistrationsProto::InitAsDefaultInstance() {
}

BackgroundSyncRegistrationsProto::BackgroundSyncRegistrationsProto(const BackgroundSyncRegistrationsProto& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:content.BackgroundSyncRegistrationsProto)
}

void BackgroundSyncRegistrationsProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  next_registration_id_ = GOOGLE_LONGLONG(0);
  origin_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BackgroundSyncRegistrationsProto::~BackgroundSyncRegistrationsProto() {
  // @@protoc_insertion_point(destructor:content.BackgroundSyncRegistrationsProto)
  SharedDtor();
}

void BackgroundSyncRegistrationsProto::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  origin_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BackgroundSyncRegistrationsProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BackgroundSyncRegistrationsProto& BackgroundSyncRegistrationsProto::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_background_5fsync_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_background_5fsync_2eproto();
#endif
  return *default_instance_;
}

BackgroundSyncRegistrationsProto* BackgroundSyncRegistrationsProto::default_instance_ = NULL;

BackgroundSyncRegistrationsProto* BackgroundSyncRegistrationsProto::New(::google::protobuf::Arena* arena) const {
  BackgroundSyncRegistrationsProto* n = new BackgroundSyncRegistrationsProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BackgroundSyncRegistrationsProto::Clear() {
// @@protoc_insertion_point(message_clear_start:content.BackgroundSyncRegistrationsProto)
  if (_has_bits_[0 / 32] & 6u) {
    next_registration_id_ = GOOGLE_LONGLONG(0);
    if (has_origin()) {
      origin_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  registration_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool BackgroundSyncRegistrationsProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForBackgroundSyncRegistrationsProto, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:content.BackgroundSyncRegistrationsProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .content.BackgroundSyncRegistrationProto registration = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_registration:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_registration()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_registration;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(16)) goto parse_next_registration_id;
        break;
      }

      // required int64 next_registration_id = 2;
      case 2: {
        if (tag == 16) {
         parse_next_registration_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &next_registration_id_)));
          set_has_next_registration_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_origin;
        break;
      }

      // required string origin = 3;
      case 3: {
        if (tag == 26) {
         parse_origin:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_origin()));
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
  // @@protoc_insertion_point(parse_success:content.BackgroundSyncRegistrationsProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:content.BackgroundSyncRegistrationsProto)
  return false;
#undef DO_
}

void BackgroundSyncRegistrationsProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:content.BackgroundSyncRegistrationsProto)
  // repeated .content.BackgroundSyncRegistrationProto registration = 1;
  for (unsigned int i = 0, n = this->registration_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->registration(i), output);
  }

  // required int64 next_registration_id = 2;
  if (has_next_registration_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->next_registration_id(), output);
  }

  // required string origin = 3;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->origin(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:content.BackgroundSyncRegistrationsProto)
}

int BackgroundSyncRegistrationsProto::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:content.BackgroundSyncRegistrationsProto)
  int total_size = 0;

  if (has_next_registration_id()) {
    // required int64 next_registration_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->next_registration_id());
  }

  if (has_origin()) {
    // required string origin = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->origin());
  }

  return total_size;
}
int BackgroundSyncRegistrationsProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:content.BackgroundSyncRegistrationsProto)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000006) ^ 0x00000006) == 0) {  // All required fields are present.
    // required int64 next_registration_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->next_registration_id());

    // required string origin = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->origin());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated .content.BackgroundSyncRegistrationProto registration = 1;
  total_size += 1 * this->registration_size();
  for (int i = 0; i < this->registration_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->registration(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BackgroundSyncRegistrationsProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BackgroundSyncRegistrationsProto*>(&from));
}

void BackgroundSyncRegistrationsProto::MergeFrom(const BackgroundSyncRegistrationsProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.BackgroundSyncRegistrationsProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  registration_.MergeFrom(from.registration_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_next_registration_id()) {
      set_next_registration_id(from.next_registration_id());
    }
    if (from.has_origin()) {
      set_has_origin();
      origin_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.origin_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void BackgroundSyncRegistrationsProto::CopyFrom(const BackgroundSyncRegistrationsProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.BackgroundSyncRegistrationsProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackgroundSyncRegistrationsProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000006) != 0x00000006) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->registration())) return false;
  return true;
}

void BackgroundSyncRegistrationsProto::Swap(BackgroundSyncRegistrationsProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BackgroundSyncRegistrationsProto::InternalSwap(BackgroundSyncRegistrationsProto* other) {
  registration_.UnsafeArenaSwap(&other->registration_);
  std::swap(next_registration_id_, other->next_registration_id_);
  origin_.Swap(&other->origin_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string BackgroundSyncRegistrationsProto::GetTypeName() const {
  return "content.BackgroundSyncRegistrationsProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BackgroundSyncRegistrationsProto

// repeated .content.BackgroundSyncRegistrationProto registration = 1;
int BackgroundSyncRegistrationsProto::registration_size() const {
  return registration_.size();
}
void BackgroundSyncRegistrationsProto::clear_registration() {
  registration_.Clear();
}
const ::content::BackgroundSyncRegistrationProto& BackgroundSyncRegistrationsProto::registration(int index) const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Get(index);
}
::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::mutable_registration(int index) {
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Mutable(index);
}
::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::add_registration() {
  // @@protoc_insertion_point(field_add:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Add();
}
::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >*
BackgroundSyncRegistrationsProto::mutable_registration() {
  // @@protoc_insertion_point(field_mutable_list:content.BackgroundSyncRegistrationsProto.registration)
  return &registration_;
}
const ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >&
BackgroundSyncRegistrationsProto::registration() const {
  // @@protoc_insertion_point(field_list:content.BackgroundSyncRegistrationsProto.registration)
  return registration_;
}

// required int64 next_registration_id = 2;
bool BackgroundSyncRegistrationsProto::has_next_registration_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BackgroundSyncRegistrationsProto::set_has_next_registration_id() {
  _has_bits_[0] |= 0x00000002u;
}
void BackgroundSyncRegistrationsProto::clear_has_next_registration_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void BackgroundSyncRegistrationsProto::clear_next_registration_id() {
  next_registration_id_ = GOOGLE_LONGLONG(0);
  clear_has_next_registration_id();
}
 ::google::protobuf::int64 BackgroundSyncRegistrationsProto::next_registration_id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.next_registration_id)
  return next_registration_id_;
}
 void BackgroundSyncRegistrationsProto::set_next_registration_id(::google::protobuf::int64 value) {
  set_has_next_registration_id();
  next_registration_id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.next_registration_id)
}

// required string origin = 3;
bool BackgroundSyncRegistrationsProto::has_origin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void BackgroundSyncRegistrationsProto::set_has_origin() {
  _has_bits_[0] |= 0x00000004u;
}
void BackgroundSyncRegistrationsProto::clear_has_origin() {
  _has_bits_[0] &= ~0x00000004u;
}
void BackgroundSyncRegistrationsProto::clear_origin() {
  origin_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_origin();
}
 const ::std::string& BackgroundSyncRegistrationsProto::origin() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BackgroundSyncRegistrationsProto::set_origin(const ::std::string& value) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.origin)
}
 void BackgroundSyncRegistrationsProto::set_origin(const char* value) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationsProto.origin)
}
 void BackgroundSyncRegistrationsProto::set_origin(const char* value, size_t size) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationsProto.origin)
}
 ::std::string* BackgroundSyncRegistrationsProto::mutable_origin() {
  set_has_origin();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* BackgroundSyncRegistrationsProto::release_origin() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationsProto.origin)
  clear_has_origin();
  return origin_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BackgroundSyncRegistrationsProto::set_allocated_origin(::std::string* origin) {
  if (origin != NULL) {
    set_has_origin();
  } else {
    clear_has_origin();
  }
  origin_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), origin);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationsProto.origin)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace content

// @@protoc_insertion_point(global_scope)
