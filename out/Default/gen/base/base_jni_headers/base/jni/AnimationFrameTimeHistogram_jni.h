// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/AnimationFrameTimeHistogram

#ifndef org_chromium_base_AnimationFrameTimeHistogram_JNI
#define org_chromium_base_AnimationFrameTimeHistogram_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAnimationFrameTimeHistogramClassPath[] =
    "org/chromium/base/AnimationFrameTimeHistogram";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AnimationFrameTimeHistogram_clazz
    __attribute__((unused)) = 0;
#define AnimationFrameTimeHistogram_clazz(env) base::android::LazyGetClass(env, kAnimationFrameTimeHistogramClassPath, &g_AnimationFrameTimeHistogram_clazz)

}  // namespace

// Step 2: method stubs.

static void SaveHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    const base::android::JavaParamRef<jstring>& histogramName,
    const base::android::JavaParamRef<jlongArray>& frameTimesMs,
    jint count);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_base_AnimationFrameTimeHistogram_nativeSaveHistogram(JNIEnv*
    env, jobject jcaller,
    jstring histogramName,
    jlongArray frameTimesMs,
    jint count) {
  return SaveHistogram(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, histogramName),
      base::android::JavaParamRef<jlongArray>(env, frameTimesMs), count);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAnimationFrameTimeHistogram[] = {
    { "nativeSaveHistogram",
"("
"Ljava/lang/String;"
"[J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_base_AnimationFrameTimeHistogram_nativeSaveHistogram)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAnimationFrameTimeHistogramSize =
      arraysize(kMethodsAnimationFrameTimeHistogram);

  if (env->RegisterNatives(AnimationFrameTimeHistogram_clazz(env),
                           kMethodsAnimationFrameTimeHistogram,
                           kMethodsAnimationFrameTimeHistogramSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AnimationFrameTimeHistogram_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_base_AnimationFrameTimeHistogram_JNI