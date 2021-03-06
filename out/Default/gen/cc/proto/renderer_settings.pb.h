// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: renderer_settings.proto

#ifndef PROTOBUF_renderer_5fsettings_2eproto__INCLUDED
#define PROTOBUF_renderer_5fsettings_2eproto__INCLUDED

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
#include "cc/proto/cc_proto_export.h"

namespace cc {
namespace proto {

// Internal implementation detail -- do not call these.
void CC_PROTO_EXPORT protobuf_AddDesc_renderer_5fsettings_2eproto();
void protobuf_AssignDesc_renderer_5fsettings_2eproto();
void protobuf_ShutdownFile_renderer_5fsettings_2eproto();

class BufferToTextureTarget;
class RendererSettings;

// ===================================================================

class CC_PROTO_EXPORT BufferToTextureTarget : public ::google::protobuf::MessageLite {
public:
BufferToTextureTarget();
virtual ~BufferToTextureTarget();

BufferToTextureTarget(const BufferToTextureTarget& from);

inline BufferToTextureTarget& operator=(const BufferToTextureTarget& from) {
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

static const BufferToTextureTarget& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const BufferToTextureTarget* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(BufferToTextureTarget* other);

// implements Message ----------------------------------------------

inline BufferToTextureTarget* New() const { return New(NULL); }

BufferToTextureTarget* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const BufferToTextureTarget& from);
void MergeFrom(const BufferToTextureTarget& from);
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
void InternalSwap(BufferToTextureTarget* other);
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

// optional uint32 buffer_usage = 1;
bool has_buffer_usage() const;
void clear_buffer_usage();
static const int kBufferUsageFieldNumber = 1;
::google::protobuf::uint32 buffer_usage() const;
void set_buffer_usage(::google::protobuf::uint32 value);

// optional uint32 buffer_format = 2;
bool has_buffer_format() const;
void clear_buffer_format();
static const int kBufferFormatFieldNumber = 2;
::google::protobuf::uint32 buffer_format() const;
void set_buffer_format(::google::protobuf::uint32 value);

// optional uint32 texture_target = 3;
bool has_texture_target() const;
void clear_texture_target();
static const int kTextureTargetFieldNumber = 3;
::google::protobuf::uint32 texture_target() const;
void set_texture_target(::google::protobuf::uint32 value);

// @@protoc_insertion_point(class_scope:cc.proto.BufferToTextureTarget)
private:
inline void set_has_buffer_usage();
inline void clear_has_buffer_usage();
inline void set_has_buffer_format();
inline void clear_has_buffer_format();
inline void set_has_texture_target();
inline void clear_has_texture_target();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::google::protobuf::uint32 buffer_usage_;
::google::protobuf::uint32 buffer_format_;
::google::protobuf::uint32 texture_target_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_renderer_5fsettings_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_renderer_5fsettings_2eproto();
#endif
friend void protobuf_AssignDesc_renderer_5fsettings_2eproto();
friend void protobuf_ShutdownFile_renderer_5fsettings_2eproto();

void InitAsDefaultInstance();
static BufferToTextureTarget* default_instance_;
};
// -------------------------------------------------------------------

class CC_PROTO_EXPORT RendererSettings : public ::google::protobuf::MessageLite {
public:
RendererSettings();
virtual ~RendererSettings();

RendererSettings(const RendererSettings& from);

inline RendererSettings& operator=(const RendererSettings& from) {
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

static const RendererSettings& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const RendererSettings* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(RendererSettings* other);

// implements Message ----------------------------------------------

inline RendererSettings* New() const { return New(NULL); }

RendererSettings* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const RendererSettings& from);
void MergeFrom(const RendererSettings& from);
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
void InternalSwap(RendererSettings* other);
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

// optional bool allow_antialiasing = 1;
bool has_allow_antialiasing() const;
void clear_allow_antialiasing();
static const int kAllowAntialiasingFieldNumber = 1;
bool allow_antialiasing() const;
void set_allow_antialiasing(bool value);

// optional bool force_antialiasing = 2;
bool has_force_antialiasing() const;
void clear_force_antialiasing();
static const int kForceAntialiasingFieldNumber = 2;
bool force_antialiasing() const;
void set_force_antialiasing(bool value);

// optional bool force_blending_with_shaders = 3;
bool has_force_blending_with_shaders() const;
void clear_force_blending_with_shaders();
static const int kForceBlendingWithShadersFieldNumber = 3;
bool force_blending_with_shaders() const;
void set_force_blending_with_shaders(bool value);

// optional bool partial_swap_enabled = 4;
bool has_partial_swap_enabled() const;
void clear_partial_swap_enabled();
static const int kPartialSwapEnabledFieldNumber = 4;
bool partial_swap_enabled() const;
void set_partial_swap_enabled(bool value);

// optional bool finish_rendering_on_resize = 5;
bool has_finish_rendering_on_resize() const;
void clear_finish_rendering_on_resize();
static const int kFinishRenderingOnResizeFieldNumber = 5;
bool finish_rendering_on_resize() const;
void set_finish_rendering_on_resize(bool value);

// optional bool should_clear_root_render_pass = 6;
bool has_should_clear_root_render_pass() const;
void clear_should_clear_root_render_pass();
static const int kShouldClearRootRenderPassFieldNumber = 6;
bool should_clear_root_render_pass() const;
void set_should_clear_root_render_pass(bool value);

// optional bool disable_display_vsync = 7;
bool has_disable_display_vsync() const;
void clear_disable_display_vsync();
static const int kDisableDisplayVsyncFieldNumber = 7;
bool disable_display_vsync() const;
void set_disable_display_vsync(bool value);

// optional bool release_overlay_resources_after_gpu_query = 8;
bool has_release_overlay_resources_after_gpu_query() const;
void clear_release_overlay_resources_after_gpu_query();
static const int kReleaseOverlayResourcesAfterGpuQueryFieldNumber = 8;
bool release_overlay_resources_after_gpu_query() const;
void set_release_overlay_resources_after_gpu_query(bool value);

// optional double refresh_rate = 9;
bool has_refresh_rate() const;
void clear_refresh_rate();
static const int kRefreshRateFieldNumber = 9;
double refresh_rate() const;
void set_refresh_rate(double value);

// optional uint32 highp_threshold_min = 10;
bool has_highp_threshold_min() const;
void clear_highp_threshold_min();
static const int kHighpThresholdMinFieldNumber = 10;
::google::protobuf::uint32 highp_threshold_min() const;
void set_highp_threshold_min(::google::protobuf::uint32 value);

// optional uint32 texture_id_allocation_chunk_size = 11;
bool has_texture_id_allocation_chunk_size() const;
void clear_texture_id_allocation_chunk_size();
static const int kTextureIdAllocationChunkSizeFieldNumber = 11;
::google::protobuf::uint32 texture_id_allocation_chunk_size() const;
void set_texture_id_allocation_chunk_size(::google::protobuf::uint32 value);

// optional bool use_gpu_memory_buffer_resources = 12;
bool has_use_gpu_memory_buffer_resources() const;
void clear_use_gpu_memory_buffer_resources();
static const int kUseGpuMemoryBufferResourcesFieldNumber = 12;
bool use_gpu_memory_buffer_resources() const;
void set_use_gpu_memory_buffer_resources(bool value);

// optional uint32 preferred_tile_format = 13;
bool has_preferred_tile_format() const;
void clear_preferred_tile_format();
static const int kPreferredTileFormatFieldNumber = 13;
::google::protobuf::uint32 preferred_tile_format() const;
void set_preferred_tile_format(::google::protobuf::uint32 value);

// repeated .cc.proto.BufferToTextureTarget buffer_to_texture_target = 14;
int buffer_to_texture_target_size() const;
void clear_buffer_to_texture_target();
static const int kBufferToTextureTargetFieldNumber = 14;
const ::cc::proto::BufferToTextureTarget& buffer_to_texture_target(int index) const;
::cc::proto::BufferToTextureTarget* mutable_buffer_to_texture_target(int index);
::cc::proto::BufferToTextureTarget* add_buffer_to_texture_target();
::google::protobuf::RepeatedPtrField< ::cc::proto::BufferToTextureTarget >*
mutable_buffer_to_texture_target();
const ::google::protobuf::RepeatedPtrField< ::cc::proto::BufferToTextureTarget >&
buffer_to_texture_target() const;

// @@protoc_insertion_point(class_scope:cc.proto.RendererSettings)
private:
inline void set_has_allow_antialiasing();
inline void clear_has_allow_antialiasing();
inline void set_has_force_antialiasing();
inline void clear_has_force_antialiasing();
inline void set_has_force_blending_with_shaders();
inline void clear_has_force_blending_with_shaders();
inline void set_has_partial_swap_enabled();
inline void clear_has_partial_swap_enabled();
inline void set_has_finish_rendering_on_resize();
inline void clear_has_finish_rendering_on_resize();
inline void set_has_should_clear_root_render_pass();
inline void clear_has_should_clear_root_render_pass();
inline void set_has_disable_display_vsync();
inline void clear_has_disable_display_vsync();
inline void set_has_release_overlay_resources_after_gpu_query();
inline void clear_has_release_overlay_resources_after_gpu_query();
inline void set_has_refresh_rate();
inline void clear_has_refresh_rate();
inline void set_has_highp_threshold_min();
inline void clear_has_highp_threshold_min();
inline void set_has_texture_id_allocation_chunk_size();
inline void clear_has_texture_id_allocation_chunk_size();
inline void set_has_use_gpu_memory_buffer_resources();
inline void clear_has_use_gpu_memory_buffer_resources();
inline void set_has_preferred_tile_format();
inline void clear_has_preferred_tile_format();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
bool allow_antialiasing_;
bool force_antialiasing_;
bool force_blending_with_shaders_;
bool partial_swap_enabled_;
bool finish_rendering_on_resize_;
bool should_clear_root_render_pass_;
bool disable_display_vsync_;
bool release_overlay_resources_after_gpu_query_;
double refresh_rate_;
::google::protobuf::uint32 highp_threshold_min_;
::google::protobuf::uint32 texture_id_allocation_chunk_size_;
bool use_gpu_memory_buffer_resources_;
::google::protobuf::uint32 preferred_tile_format_;
::google::protobuf::RepeatedPtrField< ::cc::proto::BufferToTextureTarget > buffer_to_texture_target_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_renderer_5fsettings_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_renderer_5fsettings_2eproto();
#endif
friend void protobuf_AssignDesc_renderer_5fsettings_2eproto();
friend void protobuf_ShutdownFile_renderer_5fsettings_2eproto();

void InitAsDefaultInstance();
static RendererSettings* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BufferToTextureTarget

// optional uint32 buffer_usage = 1;
inline bool BufferToTextureTarget::has_buffer_usage() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BufferToTextureTarget::set_has_buffer_usage() {
_has_bits_[0] |= 0x00000001u;
}
inline void BufferToTextureTarget::clear_has_buffer_usage() {
_has_bits_[0] &= ~0x00000001u;
}
inline void BufferToTextureTarget::clear_buffer_usage() {
buffer_usage_ = 0u;
clear_has_buffer_usage();
}
inline ::google::protobuf::uint32 BufferToTextureTarget::buffer_usage() const {
// @@protoc_insertion_point(field_get:cc.proto.BufferToTextureTarget.buffer_usage)
return buffer_usage_;
}
inline void BufferToTextureTarget::set_buffer_usage(::google::protobuf::uint32 value) {
set_has_buffer_usage();
buffer_usage_ = value;
// @@protoc_insertion_point(field_set:cc.proto.BufferToTextureTarget.buffer_usage)
}

// optional uint32 buffer_format = 2;
inline bool BufferToTextureTarget::has_buffer_format() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BufferToTextureTarget::set_has_buffer_format() {
_has_bits_[0] |= 0x00000002u;
}
inline void BufferToTextureTarget::clear_has_buffer_format() {
_has_bits_[0] &= ~0x00000002u;
}
inline void BufferToTextureTarget::clear_buffer_format() {
buffer_format_ = 0u;
clear_has_buffer_format();
}
inline ::google::protobuf::uint32 BufferToTextureTarget::buffer_format() const {
// @@protoc_insertion_point(field_get:cc.proto.BufferToTextureTarget.buffer_format)
return buffer_format_;
}
inline void BufferToTextureTarget::set_buffer_format(::google::protobuf::uint32 value) {
set_has_buffer_format();
buffer_format_ = value;
// @@protoc_insertion_point(field_set:cc.proto.BufferToTextureTarget.buffer_format)
}

// optional uint32 texture_target = 3;
inline bool BufferToTextureTarget::has_texture_target() const {
return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BufferToTextureTarget::set_has_texture_target() {
_has_bits_[0] |= 0x00000004u;
}
inline void BufferToTextureTarget::clear_has_texture_target() {
_has_bits_[0] &= ~0x00000004u;
}
inline void BufferToTextureTarget::clear_texture_target() {
texture_target_ = 0u;
clear_has_texture_target();
}
inline ::google::protobuf::uint32 BufferToTextureTarget::texture_target() const {
// @@protoc_insertion_point(field_get:cc.proto.BufferToTextureTarget.texture_target)
return texture_target_;
}
inline void BufferToTextureTarget::set_texture_target(::google::protobuf::uint32 value) {
set_has_texture_target();
texture_target_ = value;
// @@protoc_insertion_point(field_set:cc.proto.BufferToTextureTarget.texture_target)
}

// -------------------------------------------------------------------

// RendererSettings

// optional bool allow_antialiasing = 1;
inline bool RendererSettings::has_allow_antialiasing() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RendererSettings::set_has_allow_antialiasing() {
_has_bits_[0] |= 0x00000001u;
}
inline void RendererSettings::clear_has_allow_antialiasing() {
_has_bits_[0] &= ~0x00000001u;
}
inline void RendererSettings::clear_allow_antialiasing() {
allow_antialiasing_ = false;
clear_has_allow_antialiasing();
}
inline bool RendererSettings::allow_antialiasing() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.allow_antialiasing)
return allow_antialiasing_;
}
inline void RendererSettings::set_allow_antialiasing(bool value) {
set_has_allow_antialiasing();
allow_antialiasing_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.allow_antialiasing)
}

// optional bool force_antialiasing = 2;
inline bool RendererSettings::has_force_antialiasing() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RendererSettings::set_has_force_antialiasing() {
_has_bits_[0] |= 0x00000002u;
}
inline void RendererSettings::clear_has_force_antialiasing() {
_has_bits_[0] &= ~0x00000002u;
}
inline void RendererSettings::clear_force_antialiasing() {
force_antialiasing_ = false;
clear_has_force_antialiasing();
}
inline bool RendererSettings::force_antialiasing() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.force_antialiasing)
return force_antialiasing_;
}
inline void RendererSettings::set_force_antialiasing(bool value) {
set_has_force_antialiasing();
force_antialiasing_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.force_antialiasing)
}

// optional bool force_blending_with_shaders = 3;
inline bool RendererSettings::has_force_blending_with_shaders() const {
return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RendererSettings::set_has_force_blending_with_shaders() {
_has_bits_[0] |= 0x00000004u;
}
inline void RendererSettings::clear_has_force_blending_with_shaders() {
_has_bits_[0] &= ~0x00000004u;
}
inline void RendererSettings::clear_force_blending_with_shaders() {
force_blending_with_shaders_ = false;
clear_has_force_blending_with_shaders();
}
inline bool RendererSettings::force_blending_with_shaders() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.force_blending_with_shaders)
return force_blending_with_shaders_;
}
inline void RendererSettings::set_force_blending_with_shaders(bool value) {
set_has_force_blending_with_shaders();
force_blending_with_shaders_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.force_blending_with_shaders)
}

// optional bool partial_swap_enabled = 4;
inline bool RendererSettings::has_partial_swap_enabled() const {
return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RendererSettings::set_has_partial_swap_enabled() {
_has_bits_[0] |= 0x00000008u;
}
inline void RendererSettings::clear_has_partial_swap_enabled() {
_has_bits_[0] &= ~0x00000008u;
}
inline void RendererSettings::clear_partial_swap_enabled() {
partial_swap_enabled_ = false;
clear_has_partial_swap_enabled();
}
inline bool RendererSettings::partial_swap_enabled() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.partial_swap_enabled)
return partial_swap_enabled_;
}
inline void RendererSettings::set_partial_swap_enabled(bool value) {
set_has_partial_swap_enabled();
partial_swap_enabled_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.partial_swap_enabled)
}

// optional bool finish_rendering_on_resize = 5;
inline bool RendererSettings::has_finish_rendering_on_resize() const {
return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RendererSettings::set_has_finish_rendering_on_resize() {
_has_bits_[0] |= 0x00000010u;
}
inline void RendererSettings::clear_has_finish_rendering_on_resize() {
_has_bits_[0] &= ~0x00000010u;
}
inline void RendererSettings::clear_finish_rendering_on_resize() {
finish_rendering_on_resize_ = false;
clear_has_finish_rendering_on_resize();
}
inline bool RendererSettings::finish_rendering_on_resize() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.finish_rendering_on_resize)
return finish_rendering_on_resize_;
}
inline void RendererSettings::set_finish_rendering_on_resize(bool value) {
set_has_finish_rendering_on_resize();
finish_rendering_on_resize_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.finish_rendering_on_resize)
}

// optional bool should_clear_root_render_pass = 6;
inline bool RendererSettings::has_should_clear_root_render_pass() const {
return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RendererSettings::set_has_should_clear_root_render_pass() {
_has_bits_[0] |= 0x00000020u;
}
inline void RendererSettings::clear_has_should_clear_root_render_pass() {
_has_bits_[0] &= ~0x00000020u;
}
inline void RendererSettings::clear_should_clear_root_render_pass() {
should_clear_root_render_pass_ = false;
clear_has_should_clear_root_render_pass();
}
inline bool RendererSettings::should_clear_root_render_pass() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.should_clear_root_render_pass)
return should_clear_root_render_pass_;
}
inline void RendererSettings::set_should_clear_root_render_pass(bool value) {
set_has_should_clear_root_render_pass();
should_clear_root_render_pass_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.should_clear_root_render_pass)
}

// optional bool disable_display_vsync = 7;
inline bool RendererSettings::has_disable_display_vsync() const {
return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RendererSettings::set_has_disable_display_vsync() {
_has_bits_[0] |= 0x00000040u;
}
inline void RendererSettings::clear_has_disable_display_vsync() {
_has_bits_[0] &= ~0x00000040u;
}
inline void RendererSettings::clear_disable_display_vsync() {
disable_display_vsync_ = false;
clear_has_disable_display_vsync();
}
inline bool RendererSettings::disable_display_vsync() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.disable_display_vsync)
return disable_display_vsync_;
}
inline void RendererSettings::set_disable_display_vsync(bool value) {
set_has_disable_display_vsync();
disable_display_vsync_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.disable_display_vsync)
}

// optional bool release_overlay_resources_after_gpu_query = 8;
inline bool RendererSettings::has_release_overlay_resources_after_gpu_query() const {
return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RendererSettings::set_has_release_overlay_resources_after_gpu_query() {
_has_bits_[0] |= 0x00000080u;
}
inline void RendererSettings::clear_has_release_overlay_resources_after_gpu_query() {
_has_bits_[0] &= ~0x00000080u;
}
inline void RendererSettings::clear_release_overlay_resources_after_gpu_query() {
release_overlay_resources_after_gpu_query_ = false;
clear_has_release_overlay_resources_after_gpu_query();
}
inline bool RendererSettings::release_overlay_resources_after_gpu_query() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.release_overlay_resources_after_gpu_query)
return release_overlay_resources_after_gpu_query_;
}
inline void RendererSettings::set_release_overlay_resources_after_gpu_query(bool value) {
set_has_release_overlay_resources_after_gpu_query();
release_overlay_resources_after_gpu_query_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.release_overlay_resources_after_gpu_query)
}

// optional double refresh_rate = 9;
inline bool RendererSettings::has_refresh_rate() const {
return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RendererSettings::set_has_refresh_rate() {
_has_bits_[0] |= 0x00000100u;
}
inline void RendererSettings::clear_has_refresh_rate() {
_has_bits_[0] &= ~0x00000100u;
}
inline void RendererSettings::clear_refresh_rate() {
refresh_rate_ = 0;
clear_has_refresh_rate();
}
inline double RendererSettings::refresh_rate() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.refresh_rate)
return refresh_rate_;
}
inline void RendererSettings::set_refresh_rate(double value) {
set_has_refresh_rate();
refresh_rate_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.refresh_rate)
}

// optional uint32 highp_threshold_min = 10;
inline bool RendererSettings::has_highp_threshold_min() const {
return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RendererSettings::set_has_highp_threshold_min() {
_has_bits_[0] |= 0x00000200u;
}
inline void RendererSettings::clear_has_highp_threshold_min() {
_has_bits_[0] &= ~0x00000200u;
}
inline void RendererSettings::clear_highp_threshold_min() {
highp_threshold_min_ = 0u;
clear_has_highp_threshold_min();
}
inline ::google::protobuf::uint32 RendererSettings::highp_threshold_min() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.highp_threshold_min)
return highp_threshold_min_;
}
inline void RendererSettings::set_highp_threshold_min(::google::protobuf::uint32 value) {
set_has_highp_threshold_min();
highp_threshold_min_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.highp_threshold_min)
}

// optional uint32 texture_id_allocation_chunk_size = 11;
inline bool RendererSettings::has_texture_id_allocation_chunk_size() const {
return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RendererSettings::set_has_texture_id_allocation_chunk_size() {
_has_bits_[0] |= 0x00000400u;
}
inline void RendererSettings::clear_has_texture_id_allocation_chunk_size() {
_has_bits_[0] &= ~0x00000400u;
}
inline void RendererSettings::clear_texture_id_allocation_chunk_size() {
texture_id_allocation_chunk_size_ = 0u;
clear_has_texture_id_allocation_chunk_size();
}
inline ::google::protobuf::uint32 RendererSettings::texture_id_allocation_chunk_size() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.texture_id_allocation_chunk_size)
return texture_id_allocation_chunk_size_;
}
inline void RendererSettings::set_texture_id_allocation_chunk_size(::google::protobuf::uint32 value) {
set_has_texture_id_allocation_chunk_size();
texture_id_allocation_chunk_size_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.texture_id_allocation_chunk_size)
}

// optional bool use_gpu_memory_buffer_resources = 12;
inline bool RendererSettings::has_use_gpu_memory_buffer_resources() const {
return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RendererSettings::set_has_use_gpu_memory_buffer_resources() {
_has_bits_[0] |= 0x00000800u;
}
inline void RendererSettings::clear_has_use_gpu_memory_buffer_resources() {
_has_bits_[0] &= ~0x00000800u;
}
inline void RendererSettings::clear_use_gpu_memory_buffer_resources() {
use_gpu_memory_buffer_resources_ = false;
clear_has_use_gpu_memory_buffer_resources();
}
inline bool RendererSettings::use_gpu_memory_buffer_resources() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.use_gpu_memory_buffer_resources)
return use_gpu_memory_buffer_resources_;
}
inline void RendererSettings::set_use_gpu_memory_buffer_resources(bool value) {
set_has_use_gpu_memory_buffer_resources();
use_gpu_memory_buffer_resources_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.use_gpu_memory_buffer_resources)
}

// optional uint32 preferred_tile_format = 13;
inline bool RendererSettings::has_preferred_tile_format() const {
return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void RendererSettings::set_has_preferred_tile_format() {
_has_bits_[0] |= 0x00001000u;
}
inline void RendererSettings::clear_has_preferred_tile_format() {
_has_bits_[0] &= ~0x00001000u;
}
inline void RendererSettings::clear_preferred_tile_format() {
preferred_tile_format_ = 0u;
clear_has_preferred_tile_format();
}
inline ::google::protobuf::uint32 RendererSettings::preferred_tile_format() const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.preferred_tile_format)
return preferred_tile_format_;
}
inline void RendererSettings::set_preferred_tile_format(::google::protobuf::uint32 value) {
set_has_preferred_tile_format();
preferred_tile_format_ = value;
// @@protoc_insertion_point(field_set:cc.proto.RendererSettings.preferred_tile_format)
}

// repeated .cc.proto.BufferToTextureTarget buffer_to_texture_target = 14;
inline int RendererSettings::buffer_to_texture_target_size() const {
return buffer_to_texture_target_.size();
}
inline void RendererSettings::clear_buffer_to_texture_target() {
buffer_to_texture_target_.Clear();
}
inline const ::cc::proto::BufferToTextureTarget& RendererSettings::buffer_to_texture_target(int index) const {
// @@protoc_insertion_point(field_get:cc.proto.RendererSettings.buffer_to_texture_target)
return buffer_to_texture_target_.Get(index);
}
inline ::cc::proto::BufferToTextureTarget* RendererSettings::mutable_buffer_to_texture_target(int index) {
// @@protoc_insertion_point(field_mutable:cc.proto.RendererSettings.buffer_to_texture_target)
return buffer_to_texture_target_.Mutable(index);
}
inline ::cc::proto::BufferToTextureTarget* RendererSettings::add_buffer_to_texture_target() {
// @@protoc_insertion_point(field_add:cc.proto.RendererSettings.buffer_to_texture_target)
return buffer_to_texture_target_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cc::proto::BufferToTextureTarget >*
RendererSettings::mutable_buffer_to_texture_target() {
// @@protoc_insertion_point(field_mutable_list:cc.proto.RendererSettings.buffer_to_texture_target)
return &buffer_to_texture_target_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cc::proto::BufferToTextureTarget >&
RendererSettings::buffer_to_texture_target() const {
// @@protoc_insertion_point(field_list:cc.proto.RendererSettings.buffer_to_texture_target)
return buffer_to_texture_target_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_renderer_5fsettings_2eproto__INCLUDED
