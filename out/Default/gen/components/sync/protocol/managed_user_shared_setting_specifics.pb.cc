// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_user_shared_setting_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "managed_user_shared_setting_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  delete ManagedUserSharedSettingSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ManagedUserSharedSettingSpecifics::default_instance_ = new ManagedUserSharedSettingSpecifics();
  ManagedUserSharedSettingSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_once_);
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto {
  StaticDescriptorInitializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
    protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
  }
} static_descriptor_initializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForManagedUserSharedSettingSpecifics(
    ManagedUserSharedSettingSpecifics* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ManagedUserSharedSettingSpecifics::kMuIdFieldNumber;
const int ManagedUserSharedSettingSpecifics::kKeyFieldNumber;
const int ManagedUserSharedSettingSpecifics::kValueFieldNumber;
const int ManagedUserSharedSettingSpecifics::kAcknowledgedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ManagedUserSharedSettingSpecifics::ManagedUserSharedSettingSpecifics()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ManagedUserSharedSettingSpecifics)
}

void ManagedUserSharedSettingSpecifics::InitAsDefaultInstance() {
}

ManagedUserSharedSettingSpecifics::ManagedUserSharedSettingSpecifics(const ManagedUserSharedSettingSpecifics& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.ManagedUserSharedSettingSpecifics)
}

void ManagedUserSharedSettingSpecifics::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mu_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  acknowledged_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ManagedUserSharedSettingSpecifics::~ManagedUserSharedSettingSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.ManagedUserSharedSettingSpecifics)
  SharedDtor();
}

void ManagedUserSharedSettingSpecifics::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mu_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ManagedUserSharedSettingSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ManagedUserSharedSettingSpecifics& ManagedUserSharedSettingSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

ManagedUserSharedSettingSpecifics* ManagedUserSharedSettingSpecifics::default_instance_ = NULL;

ManagedUserSharedSettingSpecifics* ManagedUserSharedSettingSpecifics::New(::google::protobuf::Arena* arena) const {
  ManagedUserSharedSettingSpecifics* n = new ManagedUserSharedSettingSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ManagedUserSharedSettingSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ManagedUserSharedSettingSpecifics)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_mu_id()) {
      mu_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_key()) {
      key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_value()) {
      value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    acknowledged_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ManagedUserSharedSettingSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForManagedUserSharedSettingSpecifics, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ManagedUserSharedSettingSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string mu_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mu_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }

      // optional string key = 2;
      case 2: {
        if (tag == 18) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_value;
        break;
      }

      // optional string value = 3;
      case 3: {
        if (tag == 26) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_acknowledged;
        break;
      }

      // optional bool acknowledged = 4 [default = false];
      case 4: {
        if (tag == 32) {
         parse_acknowledged:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &acknowledged_)));
          set_has_acknowledged();
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
  // @@protoc_insertion_point(parse_success:sync_pb.ManagedUserSharedSettingSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ManagedUserSharedSettingSpecifics)
  return false;
#undef DO_
}

void ManagedUserSharedSettingSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ManagedUserSharedSettingSpecifics)
  // optional string mu_id = 1;
  if (has_mu_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->mu_id(), output);
  }

  // optional string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->key(), output);
  }

  // optional string value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->value(), output);
  }

  // optional bool acknowledged = 4 [default = false];
  if (has_acknowledged()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->acknowledged(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ManagedUserSharedSettingSpecifics)
}

int ManagedUserSharedSettingSpecifics::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ManagedUserSharedSettingSpecifics)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional string mu_id = 1;
    if (has_mu_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mu_id());
    }

    // optional string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

    // optional bool acknowledged = 4 [default = false];
    if (has_acknowledged()) {
      total_size += 1 + 1;
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ManagedUserSharedSettingSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ManagedUserSharedSettingSpecifics*>(&from));
}

void ManagedUserSharedSettingSpecifics::MergeFrom(const ManagedUserSharedSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ManagedUserSharedSettingSpecifics)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_mu_id()) {
      set_has_mu_id();
      mu_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mu_id_);
    }
    if (from.has_key()) {
      set_has_key();
      key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
    }
    if (from.has_value()) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
    if (from.has_acknowledged()) {
      set_acknowledged(from.acknowledged());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ManagedUserSharedSettingSpecifics::CopyFrom(const ManagedUserSharedSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ManagedUserSharedSettingSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManagedUserSharedSettingSpecifics::IsInitialized() const {

  return true;
}

void ManagedUserSharedSettingSpecifics::Swap(ManagedUserSharedSettingSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ManagedUserSharedSettingSpecifics::InternalSwap(ManagedUserSharedSettingSpecifics* other) {
  mu_id_.Swap(&other->mu_id_);
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  std::swap(acknowledged_, other->acknowledged_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ManagedUserSharedSettingSpecifics::GetTypeName() const {
  return "sync_pb.ManagedUserSharedSettingSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagedUserSharedSettingSpecifics

// optional string mu_id = 1;
bool ManagedUserSharedSettingSpecifics::has_mu_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ManagedUserSharedSettingSpecifics::set_has_mu_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ManagedUserSharedSettingSpecifics::clear_has_mu_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ManagedUserSharedSettingSpecifics::clear_mu_id() {
  mu_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mu_id();
}
 const ::std::string& ManagedUserSharedSettingSpecifics::mu_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  return mu_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_mu_id(const ::std::string& value) {
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
 void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value) {
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
 void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value, size_t size) {
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
 ::std::string* ManagedUserSharedSettingSpecifics::mutable_mu_id() {
  set_has_mu_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  return mu_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ManagedUserSharedSettingSpecifics::release_mu_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  clear_has_mu_id();
  return mu_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_allocated_mu_id(::std::string* mu_id) {
  if (mu_id != NULL) {
    set_has_mu_id();
  } else {
    clear_has_mu_id();
  }
  mu_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mu_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}

// optional string key = 2;
bool ManagedUserSharedSettingSpecifics::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ManagedUserSharedSettingSpecifics::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
void ManagedUserSharedSettingSpecifics::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
void ManagedUserSharedSettingSpecifics::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
 const ::std::string& ManagedUserSharedSettingSpecifics::key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
 void ManagedUserSharedSettingSpecifics::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
 void ManagedUserSharedSettingSpecifics::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
 ::std::string* ManagedUserSharedSettingSpecifics::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ManagedUserSharedSettingSpecifics::release_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.key)
}

// optional string value = 3;
bool ManagedUserSharedSettingSpecifics::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ManagedUserSharedSettingSpecifics::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
void ManagedUserSharedSettingSpecifics::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
void ManagedUserSharedSettingSpecifics::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
 const ::std::string& ManagedUserSharedSettingSpecifics::value() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
 void ManagedUserSharedSettingSpecifics::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
 void ManagedUserSharedSettingSpecifics::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
 ::std::string* ManagedUserSharedSettingSpecifics::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ManagedUserSharedSettingSpecifics::release_value() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ManagedUserSharedSettingSpecifics::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.value)
}

// optional bool acknowledged = 4 [default = false];
bool ManagedUserSharedSettingSpecifics::has_acknowledged() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ManagedUserSharedSettingSpecifics::set_has_acknowledged() {
  _has_bits_[0] |= 0x00000008u;
}
void ManagedUserSharedSettingSpecifics::clear_has_acknowledged() {
  _has_bits_[0] &= ~0x00000008u;
}
void ManagedUserSharedSettingSpecifics::clear_acknowledged() {
  acknowledged_ = false;
  clear_has_acknowledged();
}
 bool ManagedUserSharedSettingSpecifics::acknowledged() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.acknowledged)
  return acknowledged_;
}
 void ManagedUserSharedSettingSpecifics::set_acknowledged(bool value) {
  set_has_acknowledged();
  acknowledged_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.acknowledged)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)