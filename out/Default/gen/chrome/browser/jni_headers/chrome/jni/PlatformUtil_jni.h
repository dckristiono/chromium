// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/util/PlatformUtil

#ifndef org_chromium_chrome_browser_util_PlatformUtil_JNI
#define org_chromium_chrome_browser_util_PlatformUtil_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kPlatformUtilClassPath[] =
    "org/chromium/chrome/browser/util/PlatformUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_PlatformUtil_clazz __attribute__((unused)) = 0;
#define PlatformUtil_clazz(env) base::android::LazyGetClass(env, kPlatformUtilClassPath, &g_PlatformUtil_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_PlatformUtil_launchExternalProtocol = 0;
static void Java_PlatformUtil_launchExternalProtocol(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, PlatformUtil_clazz(env),
      PlatformUtil_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PlatformUtil_clazz(env),
      "launchExternalProtocol",

"("
"Ljava/lang/String;"
")"
"V",
      &g_PlatformUtil_launchExternalProtocol);

     env->CallStaticVoidMethod(PlatformUtil_clazz(env),
          method_id, url.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_util_PlatformUtil_JNI
