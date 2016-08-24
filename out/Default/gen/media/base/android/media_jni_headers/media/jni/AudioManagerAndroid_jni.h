// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/AudioManagerAndroid

#ifndef org_chromium_media_AudioManagerAndroid_JNI
#define org_chromium_media_AudioManagerAndroid_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAudioDeviceNameClassPath[] =
    "org/chromium/media/AudioManagerAndroid$AudioDeviceName";
const char kAudioManagerAndroidClassPath[] =
    "org/chromium/media/AudioManagerAndroid";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AudioDeviceName_clazz __attribute__((unused)) = 0;
#define AudioDeviceName_clazz(env) base::android::LazyGetClass(env, kAudioDeviceNameClassPath, &g_AudioDeviceName_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AudioManagerAndroid_clazz __attribute__((unused)) =
    0;
#define AudioManagerAndroid_clazz(env) base::android::LazyGetClass(env, kAudioManagerAndroidClassPath, &g_AudioManagerAndroid_clazz)

}  // namespace

namespace media {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_AudioManagerAndroid_nativeSetMute(JNIEnv* env,
    jobject jcaller,
    jlong nativeAudioManagerAndroid,
    jboolean muted) {
  AudioManagerAndroid* native =
      reinterpret_cast<AudioManagerAndroid*>(nativeAudioManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetMute");
  return native->SetMute(env, base::android::JavaParamRef<jobject>(env,
      jcaller), muted);
}

static base::subtle::AtomicWord g_AudioDeviceName_id = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_AudioDeviceName_id(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioDeviceName_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioDeviceName_clazz(env),
      "id",

"("
")"
"Ljava/lang/String;",
      &g_AudioDeviceName_id);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_AudioDeviceName_name = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_AudioDeviceName_name(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioDeviceName_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioDeviceName_clazz(env),
      "name",

"("
")"
"Ljava/lang/String;",
      &g_AudioDeviceName_name);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_AudioManagerAndroid_createAudioManagerAndroid
    = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AudioManagerAndroid_createAudioManagerAndroid(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context,
    jlong nativeAudioManagerAndroid) {
  CHECK_CLAZZ(env, AudioManagerAndroid_clazz(env),
      AudioManagerAndroid_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AudioManagerAndroid_clazz(env),
      "createAudioManagerAndroid",

"("
"Landroid/content/Context;"
"J"
")"
"Lorg/chromium/media/AudioManagerAndroid;",
      &g_AudioManagerAndroid_createAudioManagerAndroid);

  jobject ret =
      env->CallStaticObjectMethod(AudioManagerAndroid_clazz(env),
          method_id, context.obj(), nativeAudioManagerAndroid);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AudioManagerAndroid_init = 0;
static void Java_AudioManagerAndroid_init(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "init",

"("
")"
"V",
      &g_AudioManagerAndroid_init);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AudioManagerAndroid_close = 0;
static void Java_AudioManagerAndroid_close(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "close",

"("
")"
"V",
      &g_AudioManagerAndroid_close);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AudioManagerAndroid_setCommunicationAudioModeOn = 0;
static void Java_AudioManagerAndroid_setCommunicationAudioModeOn(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jboolean on) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "setCommunicationAudioModeOn",

"("
"Z"
")"
"V",
      &g_AudioManagerAndroid_setCommunicationAudioModeOn);

     env->CallVoidMethod(obj.obj(),
          method_id, on);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AudioManagerAndroid_setDevice = 0;
static jboolean Java_AudioManagerAndroid_setDevice(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& deviceId) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "setDevice",

"("
"Ljava/lang/String;"
")"
"Z",
      &g_AudioManagerAndroid_setDevice);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, deviceId.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AudioManagerAndroid_getAudioInputDeviceNames =
    0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_AudioManagerAndroid_getAudioInputDeviceNames(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "getAudioInputDeviceNames",

"("
")"
"[Lorg/chromium/media/AudioManagerAndroid$AudioDeviceName;",
      &g_AudioManagerAndroid_getAudioInputDeviceNames);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord g_AudioManagerAndroid_getNativeOutputSampleRate
    = 0;
static jint Java_AudioManagerAndroid_getNativeOutputSampleRate(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "getNativeOutputSampleRate",

"("
")"
"I",
      &g_AudioManagerAndroid_getNativeOutputSampleRate);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AudioManagerAndroid_getMinInputFrameSize = 0;
static jint Java_AudioManagerAndroid_getMinInputFrameSize(JNIEnv* env,
    JniIntWrapper sampleRate,
    JniIntWrapper channels) {
  CHECK_CLAZZ(env, AudioManagerAndroid_clazz(env),
      AudioManagerAndroid_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AudioManagerAndroid_clazz(env),
      "getMinInputFrameSize",

"("
"I"
"I"
")"
"I",
      &g_AudioManagerAndroid_getMinInputFrameSize);

  jint ret =
      env->CallStaticIntMethod(AudioManagerAndroid_clazz(env),
          method_id, as_jint(sampleRate), as_jint(channels));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AudioManagerAndroid_getMinOutputFrameSize = 0;
static jint Java_AudioManagerAndroid_getMinOutputFrameSize(JNIEnv* env,
    JniIntWrapper sampleRate,
    JniIntWrapper channels) {
  CHECK_CLAZZ(env, AudioManagerAndroid_clazz(env),
      AudioManagerAndroid_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AudioManagerAndroid_clazz(env),
      "getMinOutputFrameSize",

"("
"I"
"I"
")"
"I",
      &g_AudioManagerAndroid_getMinOutputFrameSize);

  jint ret =
      env->CallStaticIntMethod(AudioManagerAndroid_clazz(env),
          method_id, as_jint(sampleRate), as_jint(channels));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AudioManagerAndroid_isAudioLowLatencySupported
    = 0;
static jboolean Java_AudioManagerAndroid_isAudioLowLatencySupported(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "isAudioLowLatencySupported",

"("
")"
"Z",
      &g_AudioManagerAndroid_isAudioLowLatencySupported);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_AudioManagerAndroid_getAudioLowLatencyOutputFrameSize = 0;
static jint Java_AudioManagerAndroid_getAudioLowLatencyOutputFrameSize(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AudioManagerAndroid_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AudioManagerAndroid_clazz(env),
      "getAudioLowLatencyOutputFrameSize",

"("
")"
"I",
      &g_AudioManagerAndroid_getAudioLowLatencyOutputFrameSize);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_AudioManagerAndroid_shouldUseAcousticEchoCanceler = 0;
static jboolean Java_AudioManagerAndroid_shouldUseAcousticEchoCanceler(JNIEnv*
    env) {
  CHECK_CLAZZ(env, AudioManagerAndroid_clazz(env),
      AudioManagerAndroid_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AudioManagerAndroid_clazz(env),
      "shouldUseAcousticEchoCanceler",

"("
")"
"Z",
      &g_AudioManagerAndroid_shouldUseAcousticEchoCanceler);

  jboolean ret =
      env->CallStaticBooleanMethod(AudioManagerAndroid_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAudioManagerAndroid[] = {
    { "nativeSetMute",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_AudioManagerAndroid_nativeSetMute)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAudioManagerAndroidSize =
      arraysize(kMethodsAudioManagerAndroid);

  if (env->RegisterNatives(AudioManagerAndroid_clazz(env),
                           kMethodsAudioManagerAndroid,
                           kMethodsAudioManagerAndroidSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AudioManagerAndroid_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace media

#endif  // org_chromium_media_AudioManagerAndroid_JNI