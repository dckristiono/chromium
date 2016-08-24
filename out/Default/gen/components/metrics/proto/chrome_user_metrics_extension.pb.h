// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chrome_user_metrics_extension.proto

#ifndef PROTOBUF_chrome_5fuser_5fmetrics_5fextension_2eproto__INCLUDED
#define PROTOBUF_chrome_5fuser_5fmetrics_5fextension_2eproto__INCLUDED

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
#include "cast_logs.pb.h"
#include "histogram_event.pb.h"
#include "memory_leak_report.pb.h"
#include "omnibox_event.pb.h"
#include "profiler_event.pb.h"
#include "system_profile.pb.h"
#include "user_action_event.pb.h"
#include "perf_data.pb.h"
#include "sampled_profile.pb.h"
// @@protoc_insertion_point(includes)

namespace metrics {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_chrome_5fuser_5fmetrics_5fextension_2eproto();
void protobuf_AssignDesc_chrome_5fuser_5fmetrics_5fextension_2eproto();
void protobuf_ShutdownFile_chrome_5fuser_5fmetrics_5fextension_2eproto();

class ChromeUserMetricsExtension;

enum ChromeUserMetricsExtension_Product {
  ChromeUserMetricsExtension_Product_CHROME = 0,
  ChromeUserMetricsExtension_Product_ANDROID_WEBVIEW = 20
};
bool ChromeUserMetricsExtension_Product_IsValid(int value);
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension_Product_Product_MIN = ChromeUserMetricsExtension_Product_CHROME;
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension_Product_Product_MAX = ChromeUserMetricsExtension_Product_ANDROID_WEBVIEW;
const int ChromeUserMetricsExtension_Product_Product_ARRAYSIZE = ChromeUserMetricsExtension_Product_Product_MAX + 1;

// ===================================================================

class ChromeUserMetricsExtension : public ::google::protobuf::MessageLite {
 public:
  ChromeUserMetricsExtension();
  virtual ~ChromeUserMetricsExtension();

  ChromeUserMetricsExtension(const ChromeUserMetricsExtension& from);

  inline ChromeUserMetricsExtension& operator=(const ChromeUserMetricsExtension& from) {
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

  static const ChromeUserMetricsExtension& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ChromeUserMetricsExtension* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChromeUserMetricsExtension* other);

  // implements Message ----------------------------------------------

  inline ChromeUserMetricsExtension* New() const { return New(NULL); }

  ChromeUserMetricsExtension* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ChromeUserMetricsExtension& from);
  void MergeFrom(const ChromeUserMetricsExtension& from);
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
  void InternalSwap(ChromeUserMetricsExtension* other);
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

  typedef ChromeUserMetricsExtension_Product Product;
  static const Product CHROME =
    ChromeUserMetricsExtension_Product_CHROME;
  static const Product ANDROID_WEBVIEW =
    ChromeUserMetricsExtension_Product_ANDROID_WEBVIEW;
  static inline bool Product_IsValid(int value) {
    return ChromeUserMetricsExtension_Product_IsValid(value);
  }
  static const Product Product_MIN =
    ChromeUserMetricsExtension_Product_Product_MIN;
  static const Product Product_MAX =
    ChromeUserMetricsExtension_Product_Product_MAX;
  static const int Product_ARRAYSIZE =
    ChromeUserMetricsExtension_Product_Product_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional int32 product = 10 [default = 0];
  bool has_product() const;
  void clear_product();
  static const int kProductFieldNumber = 10;
  ::google::protobuf::int32 product() const;
  void set_product(::google::protobuf::int32 value);

  // optional fixed64 client_id = 1;
  bool has_client_id() const;
  void clear_client_id();
  static const int kClientIdFieldNumber = 1;
  ::google::protobuf::uint64 client_id() const;
  void set_client_id(::google::protobuf::uint64 value);

  // optional int32 session_id = 2;
  bool has_session_id() const;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 2;
  ::google::protobuf::int32 session_id() const;
  void set_session_id(::google::protobuf::int32 value);

  // optional .metrics.SystemProfileProto system_profile = 3;
  bool has_system_profile() const;
  void clear_system_profile();
  static const int kSystemProfileFieldNumber = 3;
  const ::metrics::SystemProfileProto& system_profile() const;
  ::metrics::SystemProfileProto* mutable_system_profile();
  ::metrics::SystemProfileProto* release_system_profile();
  void set_allocated_system_profile(::metrics::SystemProfileProto* system_profile);

  // repeated .metrics.UserActionEventProto user_action_event = 4;
  int user_action_event_size() const;
  void clear_user_action_event();
  static const int kUserActionEventFieldNumber = 4;
  const ::metrics::UserActionEventProto& user_action_event(int index) const;
  ::metrics::UserActionEventProto* mutable_user_action_event(int index);
  ::metrics::UserActionEventProto* add_user_action_event();
  ::google::protobuf::RepeatedPtrField< ::metrics::UserActionEventProto >*
      mutable_user_action_event();
  const ::google::protobuf::RepeatedPtrField< ::metrics::UserActionEventProto >&
      user_action_event() const;

  // repeated .metrics.OmniboxEventProto omnibox_event = 5;
  int omnibox_event_size() const;
  void clear_omnibox_event();
  static const int kOmniboxEventFieldNumber = 5;
  const ::metrics::OmniboxEventProto& omnibox_event(int index) const;
  ::metrics::OmniboxEventProto* mutable_omnibox_event(int index);
  ::metrics::OmniboxEventProto* add_omnibox_event();
  ::google::protobuf::RepeatedPtrField< ::metrics::OmniboxEventProto >*
      mutable_omnibox_event();
  const ::google::protobuf::RepeatedPtrField< ::metrics::OmniboxEventProto >&
      omnibox_event() const;

  // repeated .metrics.HistogramEventProto histogram_event = 6;
  int histogram_event_size() const;
  void clear_histogram_event();
  static const int kHistogramEventFieldNumber = 6;
  const ::metrics::HistogramEventProto& histogram_event(int index) const;
  ::metrics::HistogramEventProto* mutable_histogram_event(int index);
  ::metrics::HistogramEventProto* add_histogram_event();
  ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto >*
      mutable_histogram_event();
  const ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto >&
      histogram_event() const;

  // repeated .metrics.ProfilerEventProto profiler_event = 7;
  int profiler_event_size() const;
  void clear_profiler_event();
  static const int kProfilerEventFieldNumber = 7;
  const ::metrics::ProfilerEventProto& profiler_event(int index) const;
  ::metrics::ProfilerEventProto* mutable_profiler_event(int index);
  ::metrics::ProfilerEventProto* add_profiler_event();
  ::google::protobuf::RepeatedPtrField< ::metrics::ProfilerEventProto >*
      mutable_profiler_event();
  const ::google::protobuf::RepeatedPtrField< ::metrics::ProfilerEventProto >&
      profiler_event() const;

  // repeated .metrics.PerfDataProto perf_data = 8 [deprecated = true];
  PROTOBUF_DEPRECATED_ATTR int perf_data_size() const;
  PROTOBUF_DEPRECATED_ATTR void clear_perf_data();
  PROTOBUF_DEPRECATED_ATTR static const int kPerfDataFieldNumber = 8;
  PROTOBUF_DEPRECATED_ATTR const ::metrics::PerfDataProto& perf_data(int index) const;
  PROTOBUF_DEPRECATED_ATTR ::metrics::PerfDataProto* mutable_perf_data(int index);
  PROTOBUF_DEPRECATED_ATTR ::metrics::PerfDataProto* add_perf_data();
  PROTOBUF_DEPRECATED_ATTR ::google::protobuf::RepeatedPtrField< ::metrics::PerfDataProto >*
      mutable_perf_data();
  PROTOBUF_DEPRECATED_ATTR const ::google::protobuf::RepeatedPtrField< ::metrics::PerfDataProto >&
      perf_data() const;

  // repeated .metrics.SampledProfile sampled_profile = 11;
  int sampled_profile_size() const;
  void clear_sampled_profile();
  static const int kSampledProfileFieldNumber = 11;
  const ::metrics::SampledProfile& sampled_profile(int index) const;
  ::metrics::SampledProfile* mutable_sampled_profile(int index);
  ::metrics::SampledProfile* add_sampled_profile();
  ::google::protobuf::RepeatedPtrField< ::metrics::SampledProfile >*
      mutable_sampled_profile();
  const ::google::protobuf::RepeatedPtrField< ::metrics::SampledProfile >&
      sampled_profile() const;

  // optional .metrics.CastLogsProto cast_logs = 12;
  bool has_cast_logs() const;
  void clear_cast_logs();
  static const int kCastLogsFieldNumber = 12;
  const ::metrics::CastLogsProto& cast_logs() const;
  ::metrics::CastLogsProto* mutable_cast_logs();
  ::metrics::CastLogsProto* release_cast_logs();
  void set_allocated_cast_logs(::metrics::CastLogsProto* cast_logs);

  // repeated .metrics.MemoryLeakReportProto memory_leak_report = 13;
  int memory_leak_report_size() const;
  void clear_memory_leak_report();
  static const int kMemoryLeakReportFieldNumber = 13;
  const ::metrics::MemoryLeakReportProto& memory_leak_report(int index) const;
  ::metrics::MemoryLeakReportProto* mutable_memory_leak_report(int index);
  ::metrics::MemoryLeakReportProto* add_memory_leak_report();
  ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto >*
      mutable_memory_leak_report();
  const ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto >&
      memory_leak_report() const;

  // @@protoc_insertion_point(class_scope:metrics.ChromeUserMetricsExtension)
 private:
  inline void set_has_product();
  inline void clear_has_product();
  inline void set_has_client_id();
  inline void clear_has_client_id();
  inline void set_has_session_id();
  inline void clear_has_session_id();
  inline void set_has_system_profile();
  inline void clear_has_system_profile();
  inline void set_has_cast_logs();
  inline void clear_has_cast_logs();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 client_id_;
  ::google::protobuf::int32 product_;
  ::google::protobuf::int32 session_id_;
  ::metrics::SystemProfileProto* system_profile_;
  ::google::protobuf::RepeatedPtrField< ::metrics::UserActionEventProto > user_action_event_;
  ::google::protobuf::RepeatedPtrField< ::metrics::OmniboxEventProto > omnibox_event_;
  ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto > histogram_event_;
  ::google::protobuf::RepeatedPtrField< ::metrics::ProfilerEventProto > profiler_event_;
  ::google::protobuf::RepeatedPtrField< ::metrics::PerfDataProto > perf_data_;
  ::google::protobuf::RepeatedPtrField< ::metrics::SampledProfile > sampled_profile_;
  ::metrics::CastLogsProto* cast_logs_;
  ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto > memory_leak_report_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_chrome_5fuser_5fmetrics_5fextension_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_chrome_5fuser_5fmetrics_5fextension_2eproto();
  #endif
  friend void protobuf_AssignDesc_chrome_5fuser_5fmetrics_5fextension_2eproto();
  friend void protobuf_ShutdownFile_chrome_5fuser_5fmetrics_5fextension_2eproto();

  void InitAsDefaultInstance();
  static ChromeUserMetricsExtension* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ChromeUserMetricsExtension

// optional int32 product = 10 [default = 0];
inline bool ChromeUserMetricsExtension::has_product() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeUserMetricsExtension::set_has_product() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChromeUserMetricsExtension::clear_has_product() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChromeUserMetricsExtension::clear_product() {
  product_ = 0;
  clear_has_product();
}
inline ::google::protobuf::int32 ChromeUserMetricsExtension::product() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.product)
  return product_;
}
inline void ChromeUserMetricsExtension::set_product(::google::protobuf::int32 value) {
  set_has_product();
  product_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeUserMetricsExtension.product)
}

// optional fixed64 client_id = 1;
inline bool ChromeUserMetricsExtension::has_client_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChromeUserMetricsExtension::set_has_client_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChromeUserMetricsExtension::clear_has_client_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChromeUserMetricsExtension::clear_client_id() {
  client_id_ = GOOGLE_ULONGLONG(0);
  clear_has_client_id();
}
inline ::google::protobuf::uint64 ChromeUserMetricsExtension::client_id() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.client_id)
  return client_id_;
}
inline void ChromeUserMetricsExtension::set_client_id(::google::protobuf::uint64 value) {
  set_has_client_id();
  client_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeUserMetricsExtension.client_id)
}

// optional int32 session_id = 2;
inline bool ChromeUserMetricsExtension::has_session_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChromeUserMetricsExtension::set_has_session_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChromeUserMetricsExtension::clear_has_session_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChromeUserMetricsExtension::clear_session_id() {
  session_id_ = 0;
  clear_has_session_id();
}
inline ::google::protobuf::int32 ChromeUserMetricsExtension::session_id() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.session_id)
  return session_id_;
}
inline void ChromeUserMetricsExtension::set_session_id(::google::protobuf::int32 value) {
  set_has_session_id();
  session_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeUserMetricsExtension.session_id)
}

// optional .metrics.SystemProfileProto system_profile = 3;
inline bool ChromeUserMetricsExtension::has_system_profile() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChromeUserMetricsExtension::set_has_system_profile() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChromeUserMetricsExtension::clear_has_system_profile() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChromeUserMetricsExtension::clear_system_profile() {
  if (system_profile_ != NULL) system_profile_->::metrics::SystemProfileProto::Clear();
  clear_has_system_profile();
}
inline const ::metrics::SystemProfileProto& ChromeUserMetricsExtension::system_profile() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.system_profile)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return system_profile_ != NULL ? *system_profile_ : *default_instance().system_profile_;
#else
  return system_profile_ != NULL ? *system_profile_ : *default_instance_->system_profile_;
#endif
}
inline ::metrics::SystemProfileProto* ChromeUserMetricsExtension::mutable_system_profile() {
  set_has_system_profile();
  if (system_profile_ == NULL) {
    system_profile_ = new ::metrics::SystemProfileProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.system_profile)
  return system_profile_;
}
inline ::metrics::SystemProfileProto* ChromeUserMetricsExtension::release_system_profile() {
  // @@protoc_insertion_point(field_release:metrics.ChromeUserMetricsExtension.system_profile)
  clear_has_system_profile();
  ::metrics::SystemProfileProto* temp = system_profile_;
  system_profile_ = NULL;
  return temp;
}
inline void ChromeUserMetricsExtension::set_allocated_system_profile(::metrics::SystemProfileProto* system_profile) {
  delete system_profile_;
  system_profile_ = system_profile;
  if (system_profile) {
    set_has_system_profile();
  } else {
    clear_has_system_profile();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.ChromeUserMetricsExtension.system_profile)
}

// repeated .metrics.UserActionEventProto user_action_event = 4;
inline int ChromeUserMetricsExtension::user_action_event_size() const {
  return user_action_event_.size();
}
inline void ChromeUserMetricsExtension::clear_user_action_event() {
  user_action_event_.Clear();
}
inline const ::metrics::UserActionEventProto& ChromeUserMetricsExtension::user_action_event(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.user_action_event)
  return user_action_event_.Get(index);
}
inline ::metrics::UserActionEventProto* ChromeUserMetricsExtension::mutable_user_action_event(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.user_action_event)
  return user_action_event_.Mutable(index);
}
inline ::metrics::UserActionEventProto* ChromeUserMetricsExtension::add_user_action_event() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.user_action_event)
  return user_action_event_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::UserActionEventProto >*
ChromeUserMetricsExtension::mutable_user_action_event() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.user_action_event)
  return &user_action_event_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::UserActionEventProto >&
ChromeUserMetricsExtension::user_action_event() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.user_action_event)
  return user_action_event_;
}

// repeated .metrics.OmniboxEventProto omnibox_event = 5;
inline int ChromeUserMetricsExtension::omnibox_event_size() const {
  return omnibox_event_.size();
}
inline void ChromeUserMetricsExtension::clear_omnibox_event() {
  omnibox_event_.Clear();
}
inline const ::metrics::OmniboxEventProto& ChromeUserMetricsExtension::omnibox_event(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.omnibox_event)
  return omnibox_event_.Get(index);
}
inline ::metrics::OmniboxEventProto* ChromeUserMetricsExtension::mutable_omnibox_event(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.omnibox_event)
  return omnibox_event_.Mutable(index);
}
inline ::metrics::OmniboxEventProto* ChromeUserMetricsExtension::add_omnibox_event() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.omnibox_event)
  return omnibox_event_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::OmniboxEventProto >*
ChromeUserMetricsExtension::mutable_omnibox_event() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.omnibox_event)
  return &omnibox_event_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::OmniboxEventProto >&
ChromeUserMetricsExtension::omnibox_event() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.omnibox_event)
  return omnibox_event_;
}

// repeated .metrics.HistogramEventProto histogram_event = 6;
inline int ChromeUserMetricsExtension::histogram_event_size() const {
  return histogram_event_.size();
}
inline void ChromeUserMetricsExtension::clear_histogram_event() {
  histogram_event_.Clear();
}
inline const ::metrics::HistogramEventProto& ChromeUserMetricsExtension::histogram_event(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.histogram_event)
  return histogram_event_.Get(index);
}
inline ::metrics::HistogramEventProto* ChromeUserMetricsExtension::mutable_histogram_event(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.histogram_event)
  return histogram_event_.Mutable(index);
}
inline ::metrics::HistogramEventProto* ChromeUserMetricsExtension::add_histogram_event() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.histogram_event)
  return histogram_event_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto >*
ChromeUserMetricsExtension::mutable_histogram_event() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.histogram_event)
  return &histogram_event_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto >&
ChromeUserMetricsExtension::histogram_event() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.histogram_event)
  return histogram_event_;
}

// repeated .metrics.ProfilerEventProto profiler_event = 7;
inline int ChromeUserMetricsExtension::profiler_event_size() const {
  return profiler_event_.size();
}
inline void ChromeUserMetricsExtension::clear_profiler_event() {
  profiler_event_.Clear();
}
inline const ::metrics::ProfilerEventProto& ChromeUserMetricsExtension::profiler_event(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.profiler_event)
  return profiler_event_.Get(index);
}
inline ::metrics::ProfilerEventProto* ChromeUserMetricsExtension::mutable_profiler_event(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.profiler_event)
  return profiler_event_.Mutable(index);
}
inline ::metrics::ProfilerEventProto* ChromeUserMetricsExtension::add_profiler_event() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.profiler_event)
  return profiler_event_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::ProfilerEventProto >*
ChromeUserMetricsExtension::mutable_profiler_event() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.profiler_event)
  return &profiler_event_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::ProfilerEventProto >&
ChromeUserMetricsExtension::profiler_event() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.profiler_event)
  return profiler_event_;
}

// repeated .metrics.PerfDataProto perf_data = 8 [deprecated = true];
inline int ChromeUserMetricsExtension::perf_data_size() const {
  return perf_data_.size();
}
inline void ChromeUserMetricsExtension::clear_perf_data() {
  perf_data_.Clear();
}
inline const ::metrics::PerfDataProto& ChromeUserMetricsExtension::perf_data(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.perf_data)
  return perf_data_.Get(index);
}
inline ::metrics::PerfDataProto* ChromeUserMetricsExtension::mutable_perf_data(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.perf_data)
  return perf_data_.Mutable(index);
}
inline ::metrics::PerfDataProto* ChromeUserMetricsExtension::add_perf_data() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.perf_data)
  return perf_data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::PerfDataProto >*
ChromeUserMetricsExtension::mutable_perf_data() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.perf_data)
  return &perf_data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::PerfDataProto >&
ChromeUserMetricsExtension::perf_data() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.perf_data)
  return perf_data_;
}

// repeated .metrics.SampledProfile sampled_profile = 11;
inline int ChromeUserMetricsExtension::sampled_profile_size() const {
  return sampled_profile_.size();
}
inline void ChromeUserMetricsExtension::clear_sampled_profile() {
  sampled_profile_.Clear();
}
inline const ::metrics::SampledProfile& ChromeUserMetricsExtension::sampled_profile(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.sampled_profile)
  return sampled_profile_.Get(index);
}
inline ::metrics::SampledProfile* ChromeUserMetricsExtension::mutable_sampled_profile(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.sampled_profile)
  return sampled_profile_.Mutable(index);
}
inline ::metrics::SampledProfile* ChromeUserMetricsExtension::add_sampled_profile() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.sampled_profile)
  return sampled_profile_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::SampledProfile >*
ChromeUserMetricsExtension::mutable_sampled_profile() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.sampled_profile)
  return &sampled_profile_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::SampledProfile >&
ChromeUserMetricsExtension::sampled_profile() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.sampled_profile)
  return sampled_profile_;
}

// optional .metrics.CastLogsProto cast_logs = 12;
inline bool ChromeUserMetricsExtension::has_cast_logs() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ChromeUserMetricsExtension::set_has_cast_logs() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ChromeUserMetricsExtension::clear_has_cast_logs() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ChromeUserMetricsExtension::clear_cast_logs() {
  if (cast_logs_ != NULL) cast_logs_->::metrics::CastLogsProto::Clear();
  clear_has_cast_logs();
}
inline const ::metrics::CastLogsProto& ChromeUserMetricsExtension::cast_logs() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.cast_logs)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return cast_logs_ != NULL ? *cast_logs_ : *default_instance().cast_logs_;
#else
  return cast_logs_ != NULL ? *cast_logs_ : *default_instance_->cast_logs_;
#endif
}
inline ::metrics::CastLogsProto* ChromeUserMetricsExtension::mutable_cast_logs() {
  set_has_cast_logs();
  if (cast_logs_ == NULL) {
    cast_logs_ = new ::metrics::CastLogsProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.cast_logs)
  return cast_logs_;
}
inline ::metrics::CastLogsProto* ChromeUserMetricsExtension::release_cast_logs() {
  // @@protoc_insertion_point(field_release:metrics.ChromeUserMetricsExtension.cast_logs)
  clear_has_cast_logs();
  ::metrics::CastLogsProto* temp = cast_logs_;
  cast_logs_ = NULL;
  return temp;
}
inline void ChromeUserMetricsExtension::set_allocated_cast_logs(::metrics::CastLogsProto* cast_logs) {
  delete cast_logs_;
  cast_logs_ = cast_logs;
  if (cast_logs) {
    set_has_cast_logs();
  } else {
    clear_has_cast_logs();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.ChromeUserMetricsExtension.cast_logs)
}

// repeated .metrics.MemoryLeakReportProto memory_leak_report = 13;
inline int ChromeUserMetricsExtension::memory_leak_report_size() const {
  return memory_leak_report_.size();
}
inline void ChromeUserMetricsExtension::clear_memory_leak_report() {
  memory_leak_report_.Clear();
}
inline const ::metrics::MemoryLeakReportProto& ChromeUserMetricsExtension::memory_leak_report(int index) const {
  // @@protoc_insertion_point(field_get:metrics.ChromeUserMetricsExtension.memory_leak_report)
  return memory_leak_report_.Get(index);
}
inline ::metrics::MemoryLeakReportProto* ChromeUserMetricsExtension::mutable_memory_leak_report(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.ChromeUserMetricsExtension.memory_leak_report)
  return memory_leak_report_.Mutable(index);
}
inline ::metrics::MemoryLeakReportProto* ChromeUserMetricsExtension::add_memory_leak_report() {
  // @@protoc_insertion_point(field_add:metrics.ChromeUserMetricsExtension.memory_leak_report)
  return memory_leak_report_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto >*
ChromeUserMetricsExtension::mutable_memory_leak_report() {
  // @@protoc_insertion_point(field_mutable_list:metrics.ChromeUserMetricsExtension.memory_leak_report)
  return &memory_leak_report_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto >&
ChromeUserMetricsExtension::memory_leak_report() const {
  // @@protoc_insertion_point(field_list:metrics.ChromeUserMetricsExtension.memory_leak_report)
  return memory_leak_report_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metrics::ChromeUserMetricsExtension_Product> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chrome_5fuser_5fmetrics_5fextension_2eproto__INCLUDED