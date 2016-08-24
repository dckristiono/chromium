// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/AutofillSaveCardInfoBar

#ifndef org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_JNI
#define org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAutofillSaveCardInfoBarClassPath[] =
    "org/chromium/chrome/browser/infobar/AutofillSaveCardInfoBar";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AutofillSaveCardInfoBar_clazz __attribute__((unused))
    = 0;
#define AutofillSaveCardInfoBar_clazz(env) base::android::LazyGetClass(env, kAutofillSaveCardInfoBarClassPath, &g_AutofillSaveCardInfoBar_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_nativeOnLegalMessageLinkClicked(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillSaveCardInfoBar,
    jstring url) {
  AutofillSaveCardInfoBar* native =
      reinterpret_cast<AutofillSaveCardInfoBar*>(nativeAutofillSaveCardInfoBar);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLegalMessageLinkClicked");
  return native->OnLegalMessageLinkClicked(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url));
}

static base::subtle::AtomicWord g_AutofillSaveCardInfoBar_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AutofillSaveCardInfoBar_create(JNIEnv* env, jlong
    nativeAutofillSaveCardInfoBar,
    JniIntWrapper enumeratedIconId,
    const base::android::JavaRefOrBare<jobject>& iconBitmap,
    const base::android::JavaRefOrBare<jstring>& message,
    const base::android::JavaRefOrBare<jstring>& linkText,
    const base::android::JavaRefOrBare<jstring>& buttonOk,
    const base::android::JavaRefOrBare<jstring>& buttonCancel) {
  CHECK_CLAZZ(env, AutofillSaveCardInfoBar_clazz(env),
      AutofillSaveCardInfoBar_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillSaveCardInfoBar_clazz(env),
      "create",

"("
"J"
"I"
"Landroid/graphics/Bitmap;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/infobar/AutofillSaveCardInfoBar;",
      &g_AutofillSaveCardInfoBar_create);

  jobject ret =
      env->CallStaticObjectMethod(AutofillSaveCardInfoBar_clazz(env),
          method_id, nativeAutofillSaveCardInfoBar, as_jint(enumeratedIconId),
              iconBitmap.obj(), message.obj(), linkText.obj(), buttonOk.obj(),
              buttonCancel.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AutofillSaveCardInfoBar_addDetail = 0;
static void Java_AutofillSaveCardInfoBar_addDetail(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper enumeratedIconId,
    const base::android::JavaRefOrBare<jstring>& label,
    const base::android::JavaRefOrBare<jstring>& subLabel) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillSaveCardInfoBar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillSaveCardInfoBar_clazz(env),
      "addDetail",

"("
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AutofillSaveCardInfoBar_addDetail);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(enumeratedIconId), label.obj(), subLabel.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AutofillSaveCardInfoBar_addLegalMessageLine =
    0;
static void Java_AutofillSaveCardInfoBar_addLegalMessageLine(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& text) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillSaveCardInfoBar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillSaveCardInfoBar_clazz(env),
      "addLegalMessageLine",

"("
"Ljava/lang/String;"
")"
"V",
      &g_AutofillSaveCardInfoBar_addLegalMessageLine);

     env->CallVoidMethod(obj.obj(),
          method_id, text.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AutofillSaveCardInfoBar_addLinkToLastLegalMessageLine = 0;
static void Java_AutofillSaveCardInfoBar_addLinkToLastLegalMessageLine(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper start,
    JniIntWrapper end,
    const base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillSaveCardInfoBar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillSaveCardInfoBar_clazz(env),
      "addLinkToLastLegalMessageLine",

"("
"I"
"I"
"Ljava/lang/String;"
")"
"V",
      &g_AutofillSaveCardInfoBar_addLinkToLastLegalMessageLine);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(start), as_jint(end), url.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAutofillSaveCardInfoBar[] = {
    { "nativeOnLegalMessageLinkClicked",
"("
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_nativeOnLegalMessageLinkClicked)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAutofillSaveCardInfoBarSize =
      arraysize(kMethodsAutofillSaveCardInfoBar);

  if (env->RegisterNatives(AutofillSaveCardInfoBar_clazz(env),
                           kMethodsAutofillSaveCardInfoBar,
                           kMethodsAutofillSaveCardInfoBarSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AutofillSaveCardInfoBar_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_JNI