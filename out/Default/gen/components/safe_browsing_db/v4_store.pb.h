// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v4_store.proto

#ifndef PROTOBUF_v4_5fstore_2eproto__INCLUDED
#define PROTOBUF_v4_5fstore_2eproto__INCLUDED

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
#include "safebrowsing.pb.h"
// @@protoc_insertion_point(includes)

namespace safe_browsing {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_v4_5fstore_2eproto();
void protobuf_AssignDesc_v4_5fstore_2eproto();
void protobuf_ShutdownFile_v4_5fstore_2eproto();

class V4StoreFileFormat;

// ===================================================================

class V4StoreFileFormat : public ::google::protobuf::MessageLite {
 public:
  V4StoreFileFormat();
  virtual ~V4StoreFileFormat();

  V4StoreFileFormat(const V4StoreFileFormat& from);

  inline V4StoreFileFormat& operator=(const V4StoreFileFormat& from) {
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

  static const V4StoreFileFormat& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const V4StoreFileFormat* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(V4StoreFileFormat* other);

  // implements Message ----------------------------------------------

  inline V4StoreFileFormat* New() const { return New(NULL); }

  V4StoreFileFormat* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const V4StoreFileFormat& from);
  void MergeFrom(const V4StoreFileFormat& from);
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
  void InternalSwap(V4StoreFileFormat* other);
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

  // accessors -------------------------------------------------------

  // optional uint32 magic_number = 1;
  bool has_magic_number() const;
  void clear_magic_number();
  static const int kMagicNumberFieldNumber = 1;
  ::google::protobuf::uint32 magic_number() const;
  void set_magic_number(::google::protobuf::uint32 value);

  // optional uint32 version_number = 2;
  bool has_version_number() const;
  void clear_version_number();
  static const int kVersionNumberFieldNumber = 2;
  ::google::protobuf::uint32 version_number() const;
  void set_version_number(::google::protobuf::uint32 value);

  // optional .safe_browsing.FetchThreatListUpdatesResponse.ListUpdateResponse list_update_response = 3;
  bool has_list_update_response() const;
  void clear_list_update_response();
  static const int kListUpdateResponseFieldNumber = 3;
  const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& list_update_response() const;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* mutable_list_update_response();
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* release_list_update_response();
  void set_allocated_list_update_response(::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response);

  // @@protoc_insertion_point(class_scope:safe_browsing.V4StoreFileFormat)
 private:
  inline void set_has_magic_number();
  inline void clear_has_magic_number();
  inline void set_has_version_number();
  inline void clear_has_version_number();
  inline void set_has_list_update_response();
  inline void clear_has_list_update_response();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 magic_number_;
  ::google::protobuf::uint32 version_number_;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_v4_5fstore_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_v4_5fstore_2eproto();
  #endif
  friend void protobuf_AssignDesc_v4_5fstore_2eproto();
  friend void protobuf_ShutdownFile_v4_5fstore_2eproto();

  void InitAsDefaultInstance();
  static V4StoreFileFormat* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// V4StoreFileFormat

// optional uint32 magic_number = 1;
inline bool V4StoreFileFormat::has_magic_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void V4StoreFileFormat::set_has_magic_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void V4StoreFileFormat::clear_has_magic_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void V4StoreFileFormat::clear_magic_number() {
  magic_number_ = 0u;
  clear_has_magic_number();
}
inline ::google::protobuf::uint32 V4StoreFileFormat::magic_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.magic_number)
  return magic_number_;
}
inline void V4StoreFileFormat::set_magic_number(::google::protobuf::uint32 value) {
  set_has_magic_number();
  magic_number_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.V4StoreFileFormat.magic_number)
}

// optional uint32 version_number = 2;
inline bool V4StoreFileFormat::has_version_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void V4StoreFileFormat::set_has_version_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void V4StoreFileFormat::clear_has_version_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void V4StoreFileFormat::clear_version_number() {
  version_number_ = 0u;
  clear_has_version_number();
}
inline ::google::protobuf::uint32 V4StoreFileFormat::version_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.version_number)
  return version_number_;
}
inline void V4StoreFileFormat::set_version_number(::google::protobuf::uint32 value) {
  set_has_version_number();
  version_number_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.V4StoreFileFormat.version_number)
}

// optional .safe_browsing.FetchThreatListUpdatesResponse.ListUpdateResponse list_update_response = 3;
inline bool V4StoreFileFormat::has_list_update_response() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void V4StoreFileFormat::set_has_list_update_response() {
  _has_bits_[0] |= 0x00000004u;
}
inline void V4StoreFileFormat::clear_has_list_update_response() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void V4StoreFileFormat::clear_list_update_response() {
  if (list_update_response_ != NULL) list_update_response_->::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse::Clear();
  clear_has_list_update_response();
}
inline const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& V4StoreFileFormat::list_update_response() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.list_update_response)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return list_update_response_ != NULL ? *list_update_response_ : *default_instance().list_update_response_;
#else
  return list_update_response_ != NULL ? *list_update_response_ : *default_instance_->list_update_response_;
#endif
}
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::mutable_list_update_response() {
  set_has_list_update_response();
  if (list_update_response_ == NULL) {
    list_update_response_ = new ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse;
  }
  // @@protoc_insertion_point(field_mutable:safe_browsing.V4StoreFileFormat.list_update_response)
  return list_update_response_;
}
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::release_list_update_response() {
  // @@protoc_insertion_point(field_release:safe_browsing.V4StoreFileFormat.list_update_response)
  clear_has_list_update_response();
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* temp = list_update_response_;
  list_update_response_ = NULL;
  return temp;
}
inline void V4StoreFileFormat::set_allocated_list_update_response(::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response) {
  delete list_update_response_;
  list_update_response_ = list_update_response;
  if (list_update_response) {
    set_has_list_update_response();
  } else {
    clear_has_list_update_response();
  }
  // @@protoc_insertion_point(field_set_allocated:safe_browsing.V4StoreFileFormat.list_update_response)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v4_5fstore_2eproto__INCLUDED
