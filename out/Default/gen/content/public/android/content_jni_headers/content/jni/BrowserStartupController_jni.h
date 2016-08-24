// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/BrowserStartupController

#ifndef org_chromium_content_browser_BrowserStartupController_JNI
#define org_chromium_content_browser_BrowserStartupController_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kBrowserStartupControllerClassPath[] =
    "org/chromium/content/browser/BrowserStartupController";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_BrowserStartupController_clazz
    __attribute__((unused)) = 0;
#define BrowserStartupController_clazz(env) base::android::LazyGetClass(env, kBrowserStartupControllerClassPath, &g_BrowserStartupController_clazz)

}  // namespace

namespace content {

// Step 2: method stubs.

static void SetCommandLineFlags(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jboolean singleProcess,
    const base::android::JavaParamRef<jstring>& pluginDescriptor);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_BrowserStartupController_nativeSetCommandLineFlags(JNIEnv*
    env, jclass jcaller,
    jboolean singleProcess,
    jstring pluginDescriptor) {
  return SetCommandLineFlags(env, base::android::JavaParamRef<jclass>(env,
      jcaller), singleProcess, base::android::JavaParamRef<jstring>(env,
      pluginDescriptor));
}

static jboolean IsOfficialBuild(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_content_browser_BrowserStartupController_nativeIsOfficialBuild(JNIEnv*
    env, jclass jcaller) {
  return IsOfficialBuild(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static jboolean IsPluginEnabled(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_content_browser_BrowserStartupController_nativeIsPluginEnabled(JNIEnv*
    env, jclass jcaller) {
  return IsPluginEnabled(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static base::subtle::AtomicWord
    g_BrowserStartupController_browserMayStartAsynchonously = 0;
static jboolean
    Java_BrowserStartupController_browserMayStartAsynchonously(JNIEnv* env) {
  CHECK_CLAZZ(env, BrowserStartupController_clazz(env),
      BrowserStartupController_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BrowserStartupController_clazz(env),
      "browserMayStartAsynchonously",

"("
")"
"Z",
      &g_BrowserStartupController_browserMayStartAsynchonously);

  jboolean ret =
      env->CallStaticBooleanMethod(BrowserStartupController_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_BrowserStartupController_browserStartupComplete = 0;
static void Java_BrowserStartupController_browserStartupComplete(JNIEnv* env,
    JniIntWrapper result) {
  CHECK_CLAZZ(env, BrowserStartupController_clazz(env),
      BrowserStartupController_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BrowserStartupController_clazz(env),
      "browserStartupComplete",

"("
"I"
")"
"V",
      &g_BrowserStartupController_browserStartupComplete);

     env->CallStaticVoidMethod(BrowserStartupController_clazz(env),
          method_id, as_jint(result));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_BrowserStartupController_shouldStartGpuProcessOnBrowserStartup = 0;
static jboolean
    Java_BrowserStartupController_shouldStartGpuProcessOnBrowserStartup(JNIEnv*
    env) {
  CHECK_CLAZZ(env, BrowserStartupController_clazz(env),
      BrowserStartupController_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BrowserStartupController_clazz(env),
      "shouldStartGpuProcessOnBrowserStartup",

"("
")"
"Z",
      &g_BrowserStartupController_shouldStartGpuProcessOnBrowserStartup);

  jboolean ret =
      env->CallStaticBooleanMethod(BrowserStartupController_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsBrowserStartupController[] = {
    { "nativeSetCommandLineFlags",
"("
"Z"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_BrowserStartupController_nativeSetCommandLineFlags)
    },
    { "nativeIsOfficialBuild",
"("
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_BrowserStartupController_nativeIsOfficialBuild)
    },
    { "nativeIsPluginEnabled",
"("
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_BrowserStartupController_nativeIsPluginEnabled)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsBrowserStartupControllerSize =
      arraysize(kMethodsBrowserStartupController);

  if (env->RegisterNatives(BrowserStartupController_clazz(env),
                           kMethodsBrowserStartupController,
                           kMethodsBrowserStartupControllerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, BrowserStartupController_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace content

#endif  // org_chromium_content_browser_BrowserStartupController_JNI
