// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/GeneratedPasswordSavedInfoBarDelegate

#ifndef org_chromium_chrome_browser_infobar_GeneratedPasswordSavedInfoBarDelegate_JNI
#define org_chromium_chrome_browser_infobar_GeneratedPasswordSavedInfoBarDelegate_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kGeneratedPasswordSavedInfoBarDelegateClassPath[] =
    "org/chromium/chrome/browser/infobar/GeneratedPasswordSavedInfoBarDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_GeneratedPasswordSavedInfoBarDelegate_clazz
    __attribute__((unused)) = 0;
#define GeneratedPasswordSavedInfoBarDelegate_clazz(env) base::android::LazyGetClass(env, kGeneratedPasswordSavedInfoBarDelegateClassPath, &g_GeneratedPasswordSavedInfoBarDelegate_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_GeneratedPasswordSavedInfoBarDelegate_show =
    0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_GeneratedPasswordSavedInfoBarDelegate_show(JNIEnv* env, JniIntWrapper
    enumeratedIconId,
    const base::android::JavaRefOrBare<jstring>& messageText,
    JniIntWrapper inlineLinkRangeStart,
    JniIntWrapper inlineLinkRangeEnd,
    const base::android::JavaRefOrBare<jstring>& buttonLabel) {
  CHECK_CLAZZ(env, GeneratedPasswordSavedInfoBarDelegate_clazz(env),
      GeneratedPasswordSavedInfoBarDelegate_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, GeneratedPasswordSavedInfoBarDelegate_clazz(env),
      "show",

"("
"I"
"Ljava/lang/String;"
"I"
"I"
"Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/infobar/InfoBar;",
      &g_GeneratedPasswordSavedInfoBarDelegate_show);

  jobject ret =
env->CallStaticObjectMethod(GeneratedPasswordSavedInfoBarDelegate_clazz(env),
          method_id, as_jint(enumeratedIconId), messageText.obj(),
              as_jint(inlineLinkRangeStart), as_jint(inlineLinkRangeEnd),
              buttonLabel.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_infobar_GeneratedPasswordSavedInfoBarDelegate_JNI
