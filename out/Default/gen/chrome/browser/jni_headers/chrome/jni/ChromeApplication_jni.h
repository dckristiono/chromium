// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/ChromeApplication

#ifndef org_chromium_chrome_browser_ChromeApplication_JNI
#define org_chromium_chrome_browser_ChromeApplication_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChromeApplicationClassPath[] =
    "org/chromium/chrome/browser/ChromeApplication";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChromeApplication_clazz __attribute__((unused)) = 0;
#define ChromeApplication_clazz(env) base::android::LazyGetClass(env, kChromeApplicationClassPath, &g_ChromeApplication_clazz)

}  // namespace

// Step 2: method stubs.

static void RemoveSessionCookies(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ChromeApplication_nativeRemoveSessionCookies(JNIEnv*
    env, jclass jcaller) {
  return RemoveSessionCookies(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static base::android::ScopedJavaLocalRef<jstring> GetBrowserUserAgent(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_ChromeApplication_nativeGetBrowserUserAgent(JNIEnv*
    env, jclass jcaller) {
  return GetBrowserUserAgent(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static void FlushPersistentData(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_ChromeApplication_nativeFlushPersistentData(JNIEnv*
    env, jclass jcaller) {
  return FlushPersistentData(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static base::subtle::AtomicWord g_ChromeApplication_showAutofillSettings = 0;
static void Java_ChromeApplication_showAutofillSettings(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeApplication_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeApplication_clazz(env),
      "showAutofillSettings",

"("
")"
"V",
      &g_ChromeApplication_showAutofillSettings);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeApplication_showPasswordSettings = 0;
static void Java_ChromeApplication_showPasswordSettings(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeApplication_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeApplication_clazz(env),
      "showPasswordSettings",

"("
")"
"V",
      &g_ChromeApplication_showPasswordSettings);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeApplication_openClearBrowsingData = 0;
static void Java_ChromeApplication_openClearBrowsingData(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& tab) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeApplication_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeApplication_clazz(env),
      "openClearBrowsingData",

"("
"Lorg/chromium/chrome/browser/tab/Tab;"
")"
"V",
      &g_ChromeApplication_openClearBrowsingData);

     env->CallVoidMethod(obj.obj(),
          method_id, tab.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeApplication_areParentalControlsEnabled =
    0;
static jboolean Java_ChromeApplication_areParentalControlsEnabled(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeApplication_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeApplication_clazz(env),
      "areParentalControlsEnabled",

"("
")"
"Z",
      &g_ChromeApplication_areParentalControlsEnabled);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsChromeApplication[] = {
    { "nativeRemoveSessionCookies",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ChromeApplication_nativeRemoveSessionCookies)
    },
    { "nativeGetBrowserUserAgent",
"("
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ChromeApplication_nativeGetBrowserUserAgent)
    },
    { "nativeFlushPersistentData",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ChromeApplication_nativeFlushPersistentData)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsChromeApplicationSize =
      arraysize(kMethodsChromeApplication);

  if (env->RegisterNatives(ChromeApplication_clazz(env),
                           kMethodsChromeApplication,
                           kMethodsChromeApplicationSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ChromeApplication_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_ChromeApplication_JNI
