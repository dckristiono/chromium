// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/banners/AppBannerManager

#ifndef org_chromium_chrome_browser_banners_AppBannerManager_JNI
#define org_chromium_chrome_browser_banners_AppBannerManager_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAppBannerManagerClassPath[] =
    "org/chromium/chrome/browser/banners/AppBannerManager";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AppBannerManager_clazz __attribute__((unused)) = 0;
#define AppBannerManager_clazz(env) base::android::LazyGetClass(env, kAppBannerManagerClassPath, &g_AppBannerManager_clazz)

}  // namespace

namespace banners {

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jobject>
    GetJavaBannerManagerForWebContents(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeGetJavaBannerManagerForWebContents(JNIEnv*
    env, jclass jcaller,
    jobject webContents) {
  return GetJavaBannerManagerForWebContents(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents)).Release();
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeOnAppDetailsRetrieved(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAppBannerManagerAndroid,
    jobject data,
    jstring title,
    jstring packageName,
    jstring imageUrl) {
  AppBannerManagerAndroid* native =
      reinterpret_cast<AppBannerManagerAndroid*>(nativeAppBannerManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnAppDetailsRetrieved", false);
  return native->OnAppDetailsRetrieved(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, data),
      base::android::JavaParamRef<jstring>(env, title),
      base::android::JavaParamRef<jstring>(env, packageName),
      base::android::JavaParamRef<jstring>(env, imageUrl));
}

static void SetTimeDeltaForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jint days);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeSetTimeDeltaForTesting(JNIEnv*
    env, jclass jcaller,
    jint days) {
  return SetTimeDeltaForTesting(env, base::android::JavaParamRef<jclass>(env,
      jcaller), days);
}

static void DisableSecureSchemeCheckForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeDisableSecureSchemeCheckForTesting(JNIEnv*
    env, jclass jcaller) {
  return DisableSecureSchemeCheckForTesting(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

static void SetEngagementWeights(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jdouble directEngagement,
    jdouble indirectEngagement);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeSetEngagementWeights(JNIEnv*
    env, jclass jcaller,
    jdouble directEngagement,
    jdouble indirectEngagement) {
  return SetEngagementWeights(env, base::android::JavaParamRef<jclass>(env,
      jcaller), directEngagement, indirectEngagement);
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeIsActiveForTesting(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAppBannerManagerAndroid) {
  AppBannerManagerAndroid* native =
      reinterpret_cast<AppBannerManagerAndroid*>(nativeAppBannerManagerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsActiveForTesting", false);
  return native->IsActiveForTesting(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

static base::subtle::AtomicWord g_AppBannerManager_isEnabledForTab = 0;
static jboolean Java_AppBannerManager_isEnabledForTab(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AppBannerManager_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AppBannerManager_clazz(env),
      "isEnabledForTab",

"("
")"
"Z",
      &g_AppBannerManager_isEnabledForTab);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AppBannerManager_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AppBannerManager_create(JNIEnv* env, jlong nativePointer) {
  CHECK_CLAZZ(env, AppBannerManager_clazz(env),
      AppBannerManager_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AppBannerManager_clazz(env),
      "create",

"("
"J"
")"
"Lorg/chromium/chrome/browser/banners/AppBannerManager;",
      &g_AppBannerManager_create);

  jobject ret =
      env->CallStaticObjectMethod(AppBannerManager_clazz(env),
          method_id, nativePointer);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AppBannerManager_destroy = 0;
static void Java_AppBannerManager_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AppBannerManager_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AppBannerManager_clazz(env),
      "destroy",

"("
")"
"V",
      &g_AppBannerManager_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AppBannerManager_fetchAppDetails = 0;
static void Java_AppBannerManager_fetchAppDetails(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& packageName,
    const base::android::JavaRefOrBare<jstring>& referrer,
    JniIntWrapper iconSizeInDp) {
  CHECK_CLAZZ(env, obj.obj(),
      AppBannerManager_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AppBannerManager_clazz(env),
      "fetchAppDetails",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AppBannerManager_fetchAppDetails);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj(), packageName.obj(), referrer.obj(),
              as_jint(iconSizeInDp));
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAppBannerManager[] = {
    { "nativeGetJavaBannerManagerForWebContents",
"("
"Lorg/chromium/content_public/browser/WebContents;"
")"
"Lorg/chromium/chrome/browser/banners/AppBannerManager;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeGetJavaBannerManagerForWebContents)
    },
    { "nativeOnAppDetailsRetrieved",
"("
"J"
"Lorg/chromium/chrome/browser/banners/AppData;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeOnAppDetailsRetrieved)
    },
    { "nativeSetTimeDeltaForTesting",
"("
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeSetTimeDeltaForTesting)
    },
    { "nativeDisableSecureSchemeCheckForTesting",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeDisableSecureSchemeCheckForTesting)
    },
    { "nativeSetEngagementWeights",
"("
"D"
"D"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeSetEngagementWeights)
    },
    { "nativeIsActiveForTesting",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_banners_AppBannerManager_nativeIsActiveForTesting)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAppBannerManagerSize = arraysize(kMethodsAppBannerManager);

  if (env->RegisterNatives(AppBannerManager_clazz(env),
                           kMethodsAppBannerManager,
                           kMethodsAppBannerManagerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AppBannerManager_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace banners

#endif  // org_chromium_chrome_browser_banners_AppBannerManager_JNI
