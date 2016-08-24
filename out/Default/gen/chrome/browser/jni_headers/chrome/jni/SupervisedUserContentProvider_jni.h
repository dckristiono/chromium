// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider

#ifndef org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_JNI
#define org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kSupervisedUserContentProviderClassPath[] =
    "org/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider";
const char kSupervisedUserInsertReplyClassPath[] =
    "org/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider$SupervisedUserInsertReply";
const char kSupervisedUserQueryReplyClassPath[] =
    "org/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider$SupervisedUserQueryReply";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_SupervisedUserContentProvider_clazz
    __attribute__((unused)) = 0;
#define SupervisedUserContentProvider_clazz(env) base::android::LazyGetClass(env, kSupervisedUserContentProviderClassPath, &g_SupervisedUserContentProvider_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_SupervisedUserInsertReply_clazz
    __attribute__((unused)) = 0;
#define SupervisedUserInsertReply_clazz(env) base::android::LazyGetClass(env, kSupervisedUserInsertReplyClassPath, &g_SupervisedUserInsertReply_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_SupervisedUserQueryReply_clazz
    __attribute__((unused)) = 0;
#define SupervisedUserQueryReply_clazz(env) base::android::LazyGetClass(env, kSupervisedUserQueryReplyClassPath, &g_SupervisedUserQueryReply_clazz)

}  // namespace

// Step 2: method stubs.

static jlong CreateSupervisedUserContentProvider(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeCreateSupervisedUserContentProvider(JNIEnv*
    env, jobject jcaller) {
  return CreateSupervisedUserContentProvider(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeShouldProceed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeSupervisedUserContentProvider,
    jobject queryReply,
    jstring url) {
  SupervisedUserContentProvider* native =
      reinterpret_cast<SupervisedUserContentProvider*>(nativeSupervisedUserContentProvider);
  CHECK_NATIVE_PTR(env, jcaller, native, "ShouldProceed");
  return native->ShouldProceed(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, queryReply),
      base::android::JavaParamRef<jstring>(env, url));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeRequestInsert(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeSupervisedUserContentProvider,
    jobject insertReply,
    jstring url) {
  SupervisedUserContentProvider* native =
      reinterpret_cast<SupervisedUserContentProvider*>(nativeSupervisedUserContentProvider);
  CHECK_NATIVE_PTR(env, jcaller, native, "RequestInsert");
  return native->RequestInsert(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, insertReply),
      base::android::JavaParamRef<jstring>(env, url));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeSetFilterForTesting(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeSupervisedUserContentProvider) {
  SupervisedUserContentProvider* native =
      reinterpret_cast<SupervisedUserContentProvider*>(nativeSupervisedUserContentProvider);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetFilterForTesting");
  return native->SetFilterForTesting(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

static base::subtle::AtomicWord g_SupervisedUserQueryReply_onQueryComplete = 0;
static void Java_SupervisedUserQueryReply_onQueryComplete(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      SupervisedUserQueryReply_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SupervisedUserQueryReply_clazz(env),
      "onQueryComplete",

"("
")"
"V",
      &g_SupervisedUserQueryReply_onQueryComplete);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_SupervisedUserQueryReply_onQueryFailed = 0;
static void Java_SupervisedUserQueryReply_onQueryFailed(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper reason,
    JniIntWrapper allowAccessRequests,
    JniIntWrapper isChildAccount,
    const base::android::JavaRefOrBare<jstring>& profileImageUrl,
    const base::android::JavaRefOrBare<jstring>& profileImageUrl2,
    const base::android::JavaRefOrBare<jstring>& custodian,
    const base::android::JavaRefOrBare<jstring>& custodianEmail,
    const base::android::JavaRefOrBare<jstring>& secondCustodian,
    const base::android::JavaRefOrBare<jstring>& secondCustodianEmail) {
  CHECK_CLAZZ(env, obj.obj(),
      SupervisedUserQueryReply_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SupervisedUserQueryReply_clazz(env),
      "onQueryFailed",

"("
"I"
"I"
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_SupervisedUserQueryReply_onQueryFailed);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(reason), as_jint(allowAccessRequests),
              as_jint(isChildAccount), profileImageUrl.obj(),
              profileImageUrl2.obj(), custodian.obj(), custodianEmail.obj(),
              secondCustodian.obj(), secondCustodianEmail.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_SupervisedUserInsertReply_onInsertRequestSendComplete = 0;
static void Java_SupervisedUserInsertReply_onInsertRequestSendComplete(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, jboolean result) {
  CHECK_CLAZZ(env, obj.obj(),
      SupervisedUserInsertReply_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SupervisedUserInsertReply_clazz(env),
      "onInsertRequestSendComplete",

"("
"Z"
")"
"V",
      &g_SupervisedUserInsertReply_onInsertRequestSendComplete);

     env->CallVoidMethod(obj.obj(),
          method_id, result);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_SupervisedUserContentProvider_onSupervisedUserFilterUpdated = 0;
static void
    Java_SupervisedUserContentProvider_onSupervisedUserFilterUpdated(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      SupervisedUserContentProvider_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SupervisedUserContentProvider_clazz(env),
      "onSupervisedUserFilterUpdated",

"("
")"
"V",
      &g_SupervisedUserContentProvider_onSupervisedUserFilterUpdated);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsSupervisedUserContentProvider[] = {
    { "nativeCreateSupervisedUserContentProvider",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeCreateSupervisedUserContentProvider)
    },
    { "nativeShouldProceed",
"("
"J"
"Lorg/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider$SupervisedUserQueryReply;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeShouldProceed)
    },
    { "nativeRequestInsert",
"("
"J"
"Lorg/chromium/chrome/browser/superviseduser/SupervisedUserContentProvider$SupervisedUserInsertReply;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeRequestInsert)
    },
    { "nativeSetFilterForTesting",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_nativeSetFilterForTesting)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsSupervisedUserContentProviderSize =
      arraysize(kMethodsSupervisedUserContentProvider);

  if (env->RegisterNatives(SupervisedUserContentProvider_clazz(env),
                           kMethodsSupervisedUserContentProvider,
                           kMethodsSupervisedUserContentProviderSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, SupervisedUserContentProvider_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_superviseduser_SupervisedUserContentProvider_JNI
