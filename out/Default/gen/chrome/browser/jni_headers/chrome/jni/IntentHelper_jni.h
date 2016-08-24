// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/IntentHelper

#ifndef org_chromium_chrome_browser_IntentHelper_JNI
#define org_chromium_chrome_browser_IntentHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kIntentHelperClassPath[] =
    "org/chromium/chrome/browser/IntentHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_IntentHelper_clazz __attribute__((unused)) = 0;
#define IntentHelper_clazz(env) base::android::LazyGetClass(env, kIntentHelperClassPath, &g_IntentHelper_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_IntentHelper_sendEmail = 0;
static void Java_IntentHelper_sendEmail(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context,
    const base::android::JavaRefOrBare<jstring>& email,
    const base::android::JavaRefOrBare<jstring>& subject,
    const base::android::JavaRefOrBare<jstring>& body,
    const base::android::JavaRefOrBare<jstring>& chooserTitle,
    const base::android::JavaRefOrBare<jstring>& fileToAttach) {
  CHECK_CLAZZ(env, IntentHelper_clazz(env),
      IntentHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, IntentHelper_clazz(env),
      "sendEmail",

"("
"Landroid/content/Context;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_IntentHelper_sendEmail);

     env->CallStaticVoidMethod(IntentHelper_clazz(env),
          method_id, context.obj(), email.obj(), subject.obj(), body.obj(),
              chooserTitle.obj(), fileToAttach.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_IntentHelper_openDateAndTimeSettings = 0;
static void Java_IntentHelper_openDateAndTimeSettings(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context) {
  CHECK_CLAZZ(env, IntentHelper_clazz(env),
      IntentHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, IntentHelper_clazz(env),
      "openDateAndTimeSettings",

"("
"Landroid/content/Context;"
")"
"V",
      &g_IntentHelper_openDateAndTimeSettings);

     env->CallStaticVoidMethod(IntentHelper_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_IntentHelper_JNI