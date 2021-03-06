// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: encrypted_cert_logger.proto

#ifndef PROTOBUF_encrypted_5fcert_5flogger_2eproto__INCLUDED
#define PROTOBUF_encrypted_5fcert_5flogger_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace certificate_reporting {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_encrypted_5fcert_5flogger_2eproto();
void protobuf_AssignDesc_encrypted_5fcert_5flogger_2eproto();
void protobuf_ShutdownFile_encrypted_5fcert_5flogger_2eproto();

class EncryptedCertLoggerRequest;

enum EncryptedCertLoggerRequest_Algorithm {
  EncryptedCertLoggerRequest_Algorithm_UNKNOWN_ALGORITHM = 0,
  EncryptedCertLoggerRequest_Algorithm_AEAD_ECDH_AES_128_CTR_HMAC_SHA256 = 1
};
bool EncryptedCertLoggerRequest_Algorithm_IsValid(int value);
const EncryptedCertLoggerRequest_Algorithm EncryptedCertLoggerRequest_Algorithm_Algorithm_MIN = EncryptedCertLoggerRequest_Algorithm_UNKNOWN_ALGORITHM;
const EncryptedCertLoggerRequest_Algorithm EncryptedCertLoggerRequest_Algorithm_Algorithm_MAX = EncryptedCertLoggerRequest_Algorithm_AEAD_ECDH_AES_128_CTR_HMAC_SHA256;
const int EncryptedCertLoggerRequest_Algorithm_Algorithm_ARRAYSIZE = EncryptedCertLoggerRequest_Algorithm_Algorithm_MAX + 1;

// ===================================================================

class EncryptedCertLoggerRequest : public ::google::protobuf::MessageLite {
 public:
  EncryptedCertLoggerRequest();
  virtual ~EncryptedCertLoggerRequest();

  EncryptedCertLoggerRequest(const EncryptedCertLoggerRequest& from);

  inline EncryptedCertLoggerRequest& operator=(const EncryptedCertLoggerRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const EncryptedCertLoggerRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EncryptedCertLoggerRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(EncryptedCertLoggerRequest* other);

  // implements Message ----------------------------------------------

  inline EncryptedCertLoggerRequest* New() const { return New(NULL); }

  EncryptedCertLoggerRequest* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EncryptedCertLoggerRequest& from);
  void MergeFrom(const EncryptedCertLoggerRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EncryptedCertLoggerRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef EncryptedCertLoggerRequest_Algorithm Algorithm;
  static const Algorithm UNKNOWN_ALGORITHM =
    EncryptedCertLoggerRequest_Algorithm_UNKNOWN_ALGORITHM;
  static const Algorithm AEAD_ECDH_AES_128_CTR_HMAC_SHA256 =
    EncryptedCertLoggerRequest_Algorithm_AEAD_ECDH_AES_128_CTR_HMAC_SHA256;
  static inline bool Algorithm_IsValid(int value) {
    return EncryptedCertLoggerRequest_Algorithm_IsValid(value);
  }
  static const Algorithm Algorithm_MIN =
    EncryptedCertLoggerRequest_Algorithm_Algorithm_MIN;
  static const Algorithm Algorithm_MAX =
    EncryptedCertLoggerRequest_Algorithm_Algorithm_MAX;
  static const int Algorithm_ARRAYSIZE =
    EncryptedCertLoggerRequest_Algorithm_Algorithm_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required bytes encrypted_report = 1;
  bool has_encrypted_report() const;
  void clear_encrypted_report();
  static const int kEncryptedReportFieldNumber = 1;
  const ::std::string& encrypted_report() const;
  void set_encrypted_report(const ::std::string& value);
  void set_encrypted_report(const char* value);
  void set_encrypted_report(const void* value, size_t size);
  ::std::string* mutable_encrypted_report();
  ::std::string* release_encrypted_report();
  void set_allocated_encrypted_report(::std::string* encrypted_report);

  // required uint32 server_public_key_version = 2;
  bool has_server_public_key_version() const;
  void clear_server_public_key_version();
  static const int kServerPublicKeyVersionFieldNumber = 2;
  ::google::protobuf::uint32 server_public_key_version() const;
  void set_server_public_key_version(::google::protobuf::uint32 value);

  // required bytes client_public_key = 3;
  bool has_client_public_key() const;
  void clear_client_public_key();
  static const int kClientPublicKeyFieldNumber = 3;
  const ::std::string& client_public_key() const;
  void set_client_public_key(const ::std::string& value);
  void set_client_public_key(const char* value);
  void set_client_public_key(const void* value, size_t size);
  ::std::string* mutable_client_public_key();
  ::std::string* release_client_public_key();
  void set_allocated_client_public_key(::std::string* client_public_key);

  // optional .certificate_reporting.EncryptedCertLoggerRequest.Algorithm algorithm = 4 [default = AEAD_ECDH_AES_128_CTR_HMAC_SHA256];
  bool has_algorithm() const;
  void clear_algorithm();
  static const int kAlgorithmFieldNumber = 4;
  ::certificate_reporting::EncryptedCertLoggerRequest_Algorithm algorithm() const;
  void set_algorithm(::certificate_reporting::EncryptedCertLoggerRequest_Algorithm value);

  // @@protoc_insertion_point(class_scope:certificate_reporting.EncryptedCertLoggerRequest)
 private:
  inline void set_has_encrypted_report();
  inline void clear_has_encrypted_report();
  inline void set_has_server_public_key_version();
  inline void clear_has_server_public_key_version();
  inline void set_has_client_public_key();
  inline void clear_has_client_public_key();
  inline void set_has_algorithm();
  inline void clear_has_algorithm();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr encrypted_report_;
  ::google::protobuf::internal::ArenaStringPtr client_public_key_;
  ::google::protobuf::uint32 server_public_key_version_;
  int algorithm_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_encrypted_5fcert_5flogger_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_encrypted_5fcert_5flogger_2eproto();
  #endif
  friend void protobuf_AssignDesc_encrypted_5fcert_5flogger_2eproto();
  friend void protobuf_ShutdownFile_encrypted_5fcert_5flogger_2eproto();

  void InitAsDefaultInstance();
  static EncryptedCertLoggerRequest* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EncryptedCertLoggerRequest

// required bytes encrypted_report = 1;
inline bool EncryptedCertLoggerRequest::has_encrypted_report() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EncryptedCertLoggerRequest::set_has_encrypted_report() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EncryptedCertLoggerRequest::clear_has_encrypted_report() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EncryptedCertLoggerRequest::clear_encrypted_report() {
  encrypted_report_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_encrypted_report();
}
inline const ::std::string& EncryptedCertLoggerRequest::encrypted_report() const {
  // @@protoc_insertion_point(field_get:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
  return encrypted_report_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EncryptedCertLoggerRequest::set_encrypted_report(const ::std::string& value) {
  set_has_encrypted_report();
  encrypted_report_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
}
inline void EncryptedCertLoggerRequest::set_encrypted_report(const char* value) {
  set_has_encrypted_report();
  encrypted_report_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
}
inline void EncryptedCertLoggerRequest::set_encrypted_report(const void* value, size_t size) {
  set_has_encrypted_report();
  encrypted_report_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
}
inline ::std::string* EncryptedCertLoggerRequest::mutable_encrypted_report() {
  set_has_encrypted_report();
  // @@protoc_insertion_point(field_mutable:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
  return encrypted_report_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EncryptedCertLoggerRequest::release_encrypted_report() {
  // @@protoc_insertion_point(field_release:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
  clear_has_encrypted_report();
  return encrypted_report_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EncryptedCertLoggerRequest::set_allocated_encrypted_report(::std::string* encrypted_report) {
  if (encrypted_report != NULL) {
    set_has_encrypted_report();
  } else {
    clear_has_encrypted_report();
  }
  encrypted_report_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encrypted_report);
  // @@protoc_insertion_point(field_set_allocated:certificate_reporting.EncryptedCertLoggerRequest.encrypted_report)
}

// required uint32 server_public_key_version = 2;
inline bool EncryptedCertLoggerRequest::has_server_public_key_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EncryptedCertLoggerRequest::set_has_server_public_key_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EncryptedCertLoggerRequest::clear_has_server_public_key_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EncryptedCertLoggerRequest::clear_server_public_key_version() {
  server_public_key_version_ = 0u;
  clear_has_server_public_key_version();
}
inline ::google::protobuf::uint32 EncryptedCertLoggerRequest::server_public_key_version() const {
  // @@protoc_insertion_point(field_get:certificate_reporting.EncryptedCertLoggerRequest.server_public_key_version)
  return server_public_key_version_;
}
inline void EncryptedCertLoggerRequest::set_server_public_key_version(::google::protobuf::uint32 value) {
  set_has_server_public_key_version();
  server_public_key_version_ = value;
  // @@protoc_insertion_point(field_set:certificate_reporting.EncryptedCertLoggerRequest.server_public_key_version)
}

// required bytes client_public_key = 3;
inline bool EncryptedCertLoggerRequest::has_client_public_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EncryptedCertLoggerRequest::set_has_client_public_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EncryptedCertLoggerRequest::clear_has_client_public_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EncryptedCertLoggerRequest::clear_client_public_key() {
  client_public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_client_public_key();
}
inline const ::std::string& EncryptedCertLoggerRequest::client_public_key() const {
  // @@protoc_insertion_point(field_get:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
  return client_public_key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EncryptedCertLoggerRequest::set_client_public_key(const ::std::string& value) {
  set_has_client_public_key();
  client_public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
}
inline void EncryptedCertLoggerRequest::set_client_public_key(const char* value) {
  set_has_client_public_key();
  client_public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
}
inline void EncryptedCertLoggerRequest::set_client_public_key(const void* value, size_t size) {
  set_has_client_public_key();
  client_public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
}
inline ::std::string* EncryptedCertLoggerRequest::mutable_client_public_key() {
  set_has_client_public_key();
  // @@protoc_insertion_point(field_mutable:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
  return client_public_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EncryptedCertLoggerRequest::release_client_public_key() {
  // @@protoc_insertion_point(field_release:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
  clear_has_client_public_key();
  return client_public_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EncryptedCertLoggerRequest::set_allocated_client_public_key(::std::string* client_public_key) {
  if (client_public_key != NULL) {
    set_has_client_public_key();
  } else {
    clear_has_client_public_key();
  }
  client_public_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), client_public_key);
  // @@protoc_insertion_point(field_set_allocated:certificate_reporting.EncryptedCertLoggerRequest.client_public_key)
}

// optional .certificate_reporting.EncryptedCertLoggerRequest.Algorithm algorithm = 4 [default = AEAD_ECDH_AES_128_CTR_HMAC_SHA256];
inline bool EncryptedCertLoggerRequest::has_algorithm() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EncryptedCertLoggerRequest::set_has_algorithm() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EncryptedCertLoggerRequest::clear_has_algorithm() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EncryptedCertLoggerRequest::clear_algorithm() {
  algorithm_ = 1;
  clear_has_algorithm();
}
inline ::certificate_reporting::EncryptedCertLoggerRequest_Algorithm EncryptedCertLoggerRequest::algorithm() const {
  // @@protoc_insertion_point(field_get:certificate_reporting.EncryptedCertLoggerRequest.algorithm)
  return static_cast< ::certificate_reporting::EncryptedCertLoggerRequest_Algorithm >(algorithm_);
}
inline void EncryptedCertLoggerRequest::set_algorithm(::certificate_reporting::EncryptedCertLoggerRequest_Algorithm value) {
  assert(::certificate_reporting::EncryptedCertLoggerRequest_Algorithm_IsValid(value));
  set_has_algorithm();
  algorithm_ = value;
  // @@protoc_insertion_point(field_set:certificate_reporting.EncryptedCertLoggerRequest.algorithm)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace certificate_reporting

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::certificate_reporting::EncryptedCertLoggerRequest_Algorithm> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_encrypted_5fcert_5flogger_2eproto__INCLUDED
