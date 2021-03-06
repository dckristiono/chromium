// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: annotations.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "annotations.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace userfeedback {

void protobuf_ShutdownFile_annotations_2eproto() {
  delete Annotation::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_annotations_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_annotations_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::userfeedback::protobuf_AddDesc_math_2eproto();
  ::userfeedback::protobuf_AddDesc_dom_2eproto();
  Annotation::default_instance_ = new Annotation();
  Annotation::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_annotations_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_annotations_2eproto_once_);
void protobuf_AddDesc_annotations_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_annotations_2eproto_once_,
                 &protobuf_AddDesc_annotations_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_annotations_2eproto {
  StaticDescriptorInitializer_annotations_2eproto() {
    protobuf_AddDesc_annotations_2eproto();
  }
} static_descriptor_initializer_annotations_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForAnnotation(
    Annotation* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Annotation::kRectangleFieldNumber;
const int Annotation::kSnippetFieldNumber;
const int Annotation::kAnnotatedElementPathFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Annotation::Annotation()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:userfeedback.Annotation)
}

void Annotation::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  rectangle_ = const_cast< ::userfeedback::Rectangle*>(
      ::userfeedback::Rectangle::internal_default_instance());
#else
  rectangle_ = const_cast< ::userfeedback::Rectangle*>(&::userfeedback::Rectangle::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  annotatedelementpath_ = const_cast< ::userfeedback::HtmlPath*>(
      ::userfeedback::HtmlPath::internal_default_instance());
#else
  annotatedelementpath_ = const_cast< ::userfeedback::HtmlPath*>(&::userfeedback::HtmlPath::default_instance());
#endif
}

Annotation::Annotation(const Annotation& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:userfeedback.Annotation)
}

void Annotation::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rectangle_ = NULL;
  snippet_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  annotatedelementpath_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Annotation::~Annotation() {
  // @@protoc_insertion_point(destructor:userfeedback.Annotation)
  SharedDtor();
}

void Annotation::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  snippet_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete rectangle_;
    delete annotatedelementpath_;
  }
}

void Annotation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Annotation& Annotation::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_annotations_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_annotations_2eproto();
#endif
  return *default_instance_;
}

Annotation* Annotation::default_instance_ = NULL;

Annotation* Annotation::New(::google::protobuf::Arena* arena) const {
  Annotation* n = new Annotation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Annotation::Clear() {
// @@protoc_insertion_point(message_clear_start:userfeedback.Annotation)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_rectangle()) {
      if (rectangle_ != NULL) rectangle_->::userfeedback::Rectangle::Clear();
    }
    if (has_snippet()) {
      snippet_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_annotatedelementpath()) {
      if (annotatedelementpath_ != NULL) annotatedelementpath_->::userfeedback::HtmlPath::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Annotation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForAnnotation, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:userfeedback.Annotation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .userfeedback.Rectangle rectangle = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rectangle()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_snippet;
        break;
      }

      // optional string snippet = 2;
      case 2: {
        if (tag == 18) {
         parse_snippet:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_snippet()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_annotatedElementPath;
        break;
      }

      // optional .userfeedback.HtmlPath annotatedElementPath = 3;
      case 3: {
        if (tag == 26) {
         parse_annotatedElementPath:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_annotatedelementpath()));
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
  // @@protoc_insertion_point(parse_success:userfeedback.Annotation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:userfeedback.Annotation)
  return false;
#undef DO_
}

void Annotation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:userfeedback.Annotation)
  // required .userfeedback.Rectangle rectangle = 1;
  if (has_rectangle()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->rectangle_, output);
  }

  // optional string snippet = 2;
  if (has_snippet()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->snippet(), output);
  }

  // optional .userfeedback.HtmlPath annotatedElementPath = 3;
  if (has_annotatedelementpath()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->annotatedelementpath_, output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:userfeedback.Annotation)
}

int Annotation::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:userfeedback.Annotation)
  int total_size = 0;

  // required .userfeedback.Rectangle rectangle = 1;
  if (has_rectangle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rectangle_);
  }
  if (_has_bits_[1 / 32] & 6u) {
    // optional string snippet = 2;
    if (has_snippet()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->snippet());
    }

    // optional .userfeedback.HtmlPath annotatedElementPath = 3;
    if (has_annotatedelementpath()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->annotatedelementpath_);
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Annotation::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Annotation*>(&from));
}

void Annotation::MergeFrom(const Annotation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userfeedback.Annotation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rectangle()) {
      mutable_rectangle()->::userfeedback::Rectangle::MergeFrom(from.rectangle());
    }
    if (from.has_snippet()) {
      set_has_snippet();
      snippet_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.snippet_);
    }
    if (from.has_annotatedelementpath()) {
      mutable_annotatedelementpath()->::userfeedback::HtmlPath::MergeFrom(from.annotatedelementpath());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void Annotation::CopyFrom(const Annotation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userfeedback.Annotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Annotation::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_rectangle()) {
    if (!this->rectangle_->IsInitialized()) return false;
  }
  return true;
}

void Annotation::Swap(Annotation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Annotation::InternalSwap(Annotation* other) {
  std::swap(rectangle_, other->rectangle_);
  snippet_.Swap(&other->snippet_);
  std::swap(annotatedelementpath_, other->annotatedelementpath_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Annotation::GetTypeName() const {
  return "userfeedback.Annotation";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Annotation

// required .userfeedback.Rectangle rectangle = 1;
bool Annotation::has_rectangle() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Annotation::set_has_rectangle() {
  _has_bits_[0] |= 0x00000001u;
}
void Annotation::clear_has_rectangle() {
  _has_bits_[0] &= ~0x00000001u;
}
void Annotation::clear_rectangle() {
  if (rectangle_ != NULL) rectangle_->::userfeedback::Rectangle::Clear();
  clear_has_rectangle();
}
const ::userfeedback::Rectangle& Annotation::rectangle() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.rectangle)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return rectangle_ != NULL ? *rectangle_ : *default_instance().rectangle_;
#else
  return rectangle_ != NULL ? *rectangle_ : *default_instance_->rectangle_;
#endif
}
::userfeedback::Rectangle* Annotation::mutable_rectangle() {
  set_has_rectangle();
  if (rectangle_ == NULL) {
    rectangle_ = new ::userfeedback::Rectangle;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.rectangle)
  return rectangle_;
}
::userfeedback::Rectangle* Annotation::release_rectangle() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.rectangle)
  clear_has_rectangle();
  ::userfeedback::Rectangle* temp = rectangle_;
  rectangle_ = NULL;
  return temp;
}
void Annotation::set_allocated_rectangle(::userfeedback::Rectangle* rectangle) {
  delete rectangle_;
  rectangle_ = rectangle;
  if (rectangle) {
    set_has_rectangle();
  } else {
    clear_has_rectangle();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.rectangle)
}

// optional string snippet = 2;
bool Annotation::has_snippet() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Annotation::set_has_snippet() {
  _has_bits_[0] |= 0x00000002u;
}
void Annotation::clear_has_snippet() {
  _has_bits_[0] &= ~0x00000002u;
}
void Annotation::clear_snippet() {
  snippet_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_snippet();
}
 const ::std::string& Annotation::snippet() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.snippet)
  return snippet_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Annotation::set_snippet(const ::std::string& value) {
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.Annotation.snippet)
}
 void Annotation::set_snippet(const char* value) {
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.Annotation.snippet)
}
 void Annotation::set_snippet(const char* value, size_t size) {
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.Annotation.snippet)
}
 ::std::string* Annotation::mutable_snippet() {
  set_has_snippet();
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.snippet)
  return snippet_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Annotation::release_snippet() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.snippet)
  clear_has_snippet();
  return snippet_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Annotation::set_allocated_snippet(::std::string* snippet) {
  if (snippet != NULL) {
    set_has_snippet();
  } else {
    clear_has_snippet();
  }
  snippet_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), snippet);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.snippet)
}

// optional .userfeedback.HtmlPath annotatedElementPath = 3;
bool Annotation::has_annotatedelementpath() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Annotation::set_has_annotatedelementpath() {
  _has_bits_[0] |= 0x00000004u;
}
void Annotation::clear_has_annotatedelementpath() {
  _has_bits_[0] &= ~0x00000004u;
}
void Annotation::clear_annotatedelementpath() {
  if (annotatedelementpath_ != NULL) annotatedelementpath_->::userfeedback::HtmlPath::Clear();
  clear_has_annotatedelementpath();
}
const ::userfeedback::HtmlPath& Annotation::annotatedelementpath() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.annotatedElementPath)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return annotatedelementpath_ != NULL ? *annotatedelementpath_ : *default_instance().annotatedelementpath_;
#else
  return annotatedelementpath_ != NULL ? *annotatedelementpath_ : *default_instance_->annotatedelementpath_;
#endif
}
::userfeedback::HtmlPath* Annotation::mutable_annotatedelementpath() {
  set_has_annotatedelementpath();
  if (annotatedelementpath_ == NULL) {
    annotatedelementpath_ = new ::userfeedback::HtmlPath;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.annotatedElementPath)
  return annotatedelementpath_;
}
::userfeedback::HtmlPath* Annotation::release_annotatedelementpath() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.annotatedElementPath)
  clear_has_annotatedelementpath();
  ::userfeedback::HtmlPath* temp = annotatedelementpath_;
  annotatedelementpath_ = NULL;
  return temp;
}
void Annotation::set_allocated_annotatedelementpath(::userfeedback::HtmlPath* annotatedelementpath) {
  delete annotatedelementpath_;
  annotatedelementpath_ = annotatedelementpath;
  if (annotatedelementpath) {
    set_has_annotatedelementpath();
  } else {
    clear_has_annotatedelementpath();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.annotatedElementPath)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace userfeedback

// @@protoc_insertion_point(global_scope)
