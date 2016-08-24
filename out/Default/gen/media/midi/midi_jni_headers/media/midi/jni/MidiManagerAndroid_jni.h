// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/midi/MidiManagerAndroid

#ifndef org_chromium_media_midi_MidiManagerAndroid_JNI
#define org_chromium_media_midi_MidiManagerAndroid_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kMidiManagerAndroidClassPath[] =
    "org/chromium/media/midi/MidiManagerAndroid";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_MidiManagerAndroid_clazz __attribute__((unused)) = 0;
#define MidiManagerAndroid_clazz(env) base::android::LazyGetClass(env, kMidiManagerAndroidClassPath, &g_MidiManagerAndroid_clazz)

}  // namespace

namespace media {
namespace midi {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnInitialized(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMidiManagerAndroid,
    jobjectArray devices) {
  MidiManagerAndroid* native =
      reinterpret_cast<MidiManagerAndroid*>(nativeMidiManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnInitialized");
  return native->OnInitialized(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobjectArray>(env, devices));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnAttached(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMidiManagerAndroid,
    jobject device) {
  MidiManagerAndroid* native =
      reinterpret_cast<MidiManagerAndroid*>(nativeMidiManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnAttached");
  return native->OnAttached(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, device));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnDetached(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMidiManagerAndroid,
    jobject device) {
  MidiManagerAndroid* native =
      reinterpret_cast<MidiManagerAndroid*>(nativeMidiManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDetached");
  return native->OnDetached(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, device));
}

static base::subtle::AtomicWord g_MidiManagerAndroid_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MidiManagerAndroid_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context,
    jlong nativeManagerPointer) {
  CHECK_CLAZZ(env, MidiManagerAndroid_clazz(env),
      MidiManagerAndroid_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MidiManagerAndroid_clazz(env),
      "create",

"("
"Landroid/content/Context;"
"J"
")"
"Lorg/chromium/media/midi/MidiManagerAndroid;",
      &g_MidiManagerAndroid_create);

  jobject ret =
      env->CallStaticObjectMethod(MidiManagerAndroid_clazz(env),
          method_id, context.obj(), nativeManagerPointer);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MidiManagerAndroid_initialize = 0;
static void Java_MidiManagerAndroid_initialize(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MidiManagerAndroid_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MidiManagerAndroid_clazz(env),
      "initialize",

"("
")"
"V",
      &g_MidiManagerAndroid_initialize);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsMidiManagerAndroid[] = {
    { "nativeOnInitialized",
"("
"J"
"[Lorg/chromium/media/midi/MidiDeviceAndroid;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnInitialized)
    },
    { "nativeOnAttached",
"("
"J"
"Lorg/chromium/media/midi/MidiDeviceAndroid;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnAttached)
    },
    { "nativeOnDetached",
"("
"J"
"Lorg/chromium/media/midi/MidiDeviceAndroid;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_midi_MidiManagerAndroid_nativeOnDetached)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsMidiManagerAndroidSize =
      arraysize(kMethodsMidiManagerAndroid);

  if (env->RegisterNatives(MidiManagerAndroid_clazz(env),
                           kMethodsMidiManagerAndroid,
                           kMethodsMidiManagerAndroidSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, MidiManagerAndroid_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace midi
}  // namespace media

#endif  // org_chromium_media_midi_MidiManagerAndroid_JNI