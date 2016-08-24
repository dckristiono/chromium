// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/childaccounts/ChildAccountFeedbackReporter

#ifndef org_chromium_chrome_browser_childaccounts_ChildAccountFeedbackReporter_JNI
#define org_chromium_chrome_browser_childaccounts_ChildAccountFeedbackReporter_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChildAccountFeedbackReporterClassPath[] =
    "org/chromium/chrome/browser/childaccounts/ChildAccountFeedbackReporter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChildAccountFeedbackReporter_clazz
    __attribute__((unused)) = 0;
#define ChildAccountFeedbackReporter_clazz(env) base::android::LazyGetClass(env, kChildAccountFeedbackReporterClassPath, &g_ChildAccountFeedbackReporter_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord
    g_ChildAccountFeedbackReporter_reportFeedbackWithWindow = 0;
static void Java_ChildAccountFeedbackReporter_reportFeedbackWithWindow(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& window,
    const base::android::JavaRefOrBare<jstring>& description,
    const base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, ChildAccountFeedbackReporter_clazz(env),
      ChildAccountFeedbackReporter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ChildAccountFeedbackReporter_clazz(env),
      "reportFeedbackWithWindow",

"("
"Lorg/chromium/ui/base/WindowAndroid;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_ChildAccountFeedbackReporter_reportFeedbackWithWindow);

     env->CallStaticVoidMethod(ChildAccountFeedbackReporter_clazz(env),
          method_id, window.obj(), description.obj(), url.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_childaccounts_ChildAccountFeedbackReporter_JNI
