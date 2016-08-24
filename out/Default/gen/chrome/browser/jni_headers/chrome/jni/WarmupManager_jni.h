// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/WarmupManager

#ifndef org_chromium_chrome_browser_WarmupManager_JNI
#define org_chromium_chrome_browser_WarmupManager_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kWarmupManagerClassPath[] =
    "org/chromium/chrome/browser/WarmupManager";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_WarmupManager_clazz __attribute__((unused)) = 0;
#define WarmupManager_clazz(env) base::android::LazyGetClass(env, kWarmupManagerClassPath, &g_WarmupManager_clazz)

}  // namespace

// Step 2: method stubs.

static void PreconnectUrlAndSubresources(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& url);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_WarmupManager_nativePreconnectUrlAndSubresources(JNIEnv*
    env, jclass jcaller,
    jobject profile,
    jstring url) {
  return PreconnectUrlAndSubresources(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, profile),
      base::android::JavaParamRef<jstring>(env, url));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsWarmupManager[] = {
    { "nativePreconnectUrlAndSubresources",
"("
"Lorg/chromium/chrome/browser/profiles/Profile;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_WarmupManager_nativePreconnectUrlAndSubresources)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsWarmupManagerSize = arraysize(kMethodsWarmupManager);

  if (env->RegisterNatives(WarmupManager_clazz(env),
                           kMethodsWarmupManager,
                           kMethodsWarmupManagerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, WarmupManager_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_WarmupManager_JNI
