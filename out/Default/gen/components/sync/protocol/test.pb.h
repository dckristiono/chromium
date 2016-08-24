// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class UnknownFieldsTestA;
class UnknownFieldsTestB;

// ===================================================================

class UnknownFieldsTestA : public ::google::protobuf::MessageLite {
 public:
  UnknownFieldsTestA();
  virtual ~UnknownFieldsTestA();

  UnknownFieldsTestA(const UnknownFieldsTestA& from);

  inline UnknownFieldsTestA& operator=(const UnknownFieldsTestA& from) {
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

  static const UnknownFieldsTestA& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UnknownFieldsTestA* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(UnknownFieldsTestA* other);

  // implements Message ----------------------------------------------

  inline UnknownFieldsTestA* New() const { return New(NULL); }

  UnknownFieldsTestA* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UnknownFieldsTestA& from);
  void MergeFrom(const UnknownFieldsTestA& from);
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
  void InternalSwap(UnknownFieldsTestA* other);
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

  // required bool foo = 1;
  bool has_foo() const;
  void clear_foo();
  static const int kFooFieldNumber = 1;
  bool foo() const;
  void set_foo(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.UnknownFieldsTestA)
 private:
  inline void set_has_foo();
  inline void clear_has_foo();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool foo_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_test_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_test_2eproto();
  #endif
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static UnknownFieldsTestA* default_instance_;
};
// -------------------------------------------------------------------

class UnknownFieldsTestB : public ::google::protobuf::MessageLite {
 public:
  UnknownFieldsTestB();
  virtual ~UnknownFieldsTestB();

  UnknownFieldsTestB(const UnknownFieldsTestB& from);

  inline UnknownFieldsTestB& operator=(const UnknownFieldsTestB& from) {
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

  static const UnknownFieldsTestB& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UnknownFieldsTestB* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(UnknownFieldsTestB* other);

  // implements Message ----------------------------------------------

  inline UnknownFieldsTestB* New() const { return New(NULL); }

  UnknownFieldsTestB* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UnknownFieldsTestB& from);
  void MergeFrom(const UnknownFieldsTestB& from);
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
  void InternalSwap(UnknownFieldsTestB* other);
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

  // required bool foo = 1;
  bool has_foo() const;
  void clear_foo();
  static const int kFooFieldNumber = 1;
  bool foo() const;
  void set_foo(bool value);

  // required bool bar = 2;
  bool has_bar() const;
  void clear_bar();
  static const int kBarFieldNumber = 2;
  bool bar() const;
  void set_bar(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.UnknownFieldsTestB)
 private:
  inline void set_has_foo();
  inline void clear_has_foo();
  inline void set_has_bar();
  inline void clear_has_bar();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool foo_;
  bool bar_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_test_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_test_2eproto();
  #endif
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static UnknownFieldsTestB* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UnknownFieldsTestA

// required bool foo = 1;
inline bool UnknownFieldsTestA::has_foo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnknownFieldsTestA::set_has_foo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnknownFieldsTestA::clear_has_foo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnknownFieldsTestA::clear_foo() {
  foo_ = false;
  clear_has_foo();
}
inline bool UnknownFieldsTestA::foo() const {
  // @@protoc_insertion_point(field_get:sync_pb.UnknownFieldsTestA.foo)
  return foo_;
}
inline void UnknownFieldsTestA::set_foo(bool value) {
  set_has_foo();
  foo_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.UnknownFieldsTestA.foo)
}

// -------------------------------------------------------------------

// UnknownFieldsTestB

// required bool foo = 1;
inline bool UnknownFieldsTestB::has_foo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnknownFieldsTestB::set_has_foo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnknownFieldsTestB::clear_has_foo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnknownFieldsTestB::clear_foo() {
  foo_ = false;
  clear_has_foo();
}
inline bool UnknownFieldsTestB::foo() const {
  // @@protoc_insertion_point(field_get:sync_pb.UnknownFieldsTestB.foo)
  return foo_;
}
inline void UnknownFieldsTestB::set_foo(bool value) {
  set_has_foo();
  foo_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.UnknownFieldsTestB.foo)
}

// required bool bar = 2;
inline bool UnknownFieldsTestB::has_bar() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnknownFieldsTestB::set_has_bar() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnknownFieldsTestB::clear_has_bar() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnknownFieldsTestB::clear_bar() {
  bar_ = false;
  clear_has_bar();
}
inline bool UnknownFieldsTestB::bar() const {
  // @@protoc_insertion_point(field_get:sync_pb.UnknownFieldsTestB.bar)
  return bar_;
}
inline void UnknownFieldsTestB::set_bar(bool value) {
  set_has_bar();
  bar_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.UnknownFieldsTestB.bar)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
