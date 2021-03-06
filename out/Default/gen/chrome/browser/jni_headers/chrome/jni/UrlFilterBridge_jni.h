// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/browsing_data/UrlFilterBridge

#ifndef org_chromium_chrome_browser_browsing_data_UrlFilterBridge_JNI
#define org_chromium_chrome_browser_browsing_data_UrlFilterBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kUrlFilterBridgeClassPath[] =
    "org/chromium/chrome/browser/browsing_data/UrlFilterBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_UrlFilterBridge_clazz __attribute__((unused)) = 0;
#define UrlFilterBridge_clazz(env) base::android::LazyGetClass(env, kUrlFilterBridgeClassPath, &g_UrlFilterBridge_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_nativeMatchesUrl(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeUrlFilterBridge,
    jstring url) {
  UrlFilterBridge* native =
      reinterpret_cast<UrlFilterBridge*>(nativeUrlFilterBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "MatchesUrl", false);
  return native->MatchesUrl(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, url));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeUrlFilterBridge) {
  UrlFilterBridge* native =
      reinterpret_cast<UrlFilterBridge*>(nativeUrlFilterBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_UrlFilterBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_UrlFilterBridge_create(JNIEnv* env, jlong nativeUrlFilterBridge) {
  CHECK_CLAZZ(env, UrlFilterBridge_clazz(env),
      UrlFilterBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, UrlFilterBridge_clazz(env),
      "create",

"("
"J"
")"
"Lorg/chromium/chrome/browser/browsing_data/UrlFilterBridge;",
      &g_UrlFilterBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(UrlFilterBridge_clazz(env),
          method_id, nativeUrlFilterBridge);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsUrlFilterBridge[] = {
    { "nativeMatchesUrl",
"("
"J"
"Ljava/lang/String;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_nativeMatchesUrl)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_nativeDestroy)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsUrlFilterBridgeSize = arraysize(kMethodsUrlFilterBridge);

  if (env->RegisterNatives(UrlFilterBridge_clazz(env),
                           kMethodsUrlFilterBridge,
                           kMethodsUrlFilterBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, UrlFilterBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_browsing_data_UrlFilterBridge_JNI
