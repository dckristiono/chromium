// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/omnibox/OmniboxViewUtil

#ifndef org_chromium_chrome_browser_omnibox_OmniboxViewUtil_JNI
#define org_chromium_chrome_browser_omnibox_OmniboxViewUtil_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kOmniboxViewUtilClassPath[] =
    "org/chromium/chrome/browser/omnibox/OmniboxViewUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_OmniboxViewUtil_clazz __attribute__((unused)) = 0;
#define OmniboxViewUtil_clazz(env) base::android::LazyGetClass(env, kOmniboxViewUtilClassPath, &g_OmniboxViewUtil_clazz)

}  // namespace

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jstring> SanitizeTextForPaste(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& clipboardString);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_omnibox_OmniboxViewUtil_nativeSanitizeTextForPaste(JNIEnv*
    env, jclass jcaller,
    jstring clipboardString) {
  return SanitizeTextForPaste(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env,
      clipboardString)).Release();
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsOmniboxViewUtil[] = {
    { "nativeSanitizeTextForPaste",
"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_omnibox_OmniboxViewUtil_nativeSanitizeTextForPaste)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsOmniboxViewUtilSize = arraysize(kMethodsOmniboxViewUtil);

  if (env->RegisterNatives(OmniboxViewUtil_clazz(env),
                           kMethodsOmniboxViewUtil,
                           kMethodsOmniboxViewUtilSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, OmniboxViewUtil_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_omnibox_OmniboxViewUtil_JNI
