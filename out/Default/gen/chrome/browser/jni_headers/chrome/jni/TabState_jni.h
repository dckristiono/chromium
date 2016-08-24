// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/TabState

#ifndef org_chromium_chrome_browser_TabState_JNI
#define org_chromium_chrome_browser_TabState_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kTabStateClassPath[] = "org/chromium/chrome/browser/TabState";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_TabState_clazz __attribute__((unused)) = 0;
#define TabState_clazz(env) base::android::LazyGetClass(env, kTabStateClassPath, &g_TabState_clazz)

}  // namespace

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jobject>
    RestoreContentsFromByteBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& buffer,
    jint savedStateVersion,
    jboolean initiallyHidden);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_TabState_nativeRestoreContentsFromByteBuffer(JNIEnv*
    env, jclass jcaller,
    jobject buffer,
    jint savedStateVersion,
    jboolean initiallyHidden) {
  return RestoreContentsFromByteBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, buffer), savedStateVersion,
      initiallyHidden).Release();
}

static base::android::ScopedJavaLocalRef<jobject>
    GetContentsStateAsByteBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& tab);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_TabState_nativeGetContentsStateAsByteBuffer(JNIEnv*
    env, jclass jcaller,
    jobject tab) {
  return GetContentsStateAsByteBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, tab)).Release();
}

static base::android::ScopedJavaLocalRef<jobject>
    CreateSingleNavigationStateAsByteBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jstring>& referrerUrl,
    jint referrerPolicy,
    jboolean isIncognito);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_TabState_nativeCreateSingleNavigationStateAsByteBuffer(JNIEnv*
    env, jclass jcaller,
    jstring url,
    jstring referrerUrl,
    jint referrerPolicy,
    jboolean isIncognito) {
  return CreateSingleNavigationStateAsByteBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, referrerUrl), referrerPolicy,
      isIncognito).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetDisplayTitleFromByteBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& state,
    jint savedStateVersion);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_TabState_nativeGetDisplayTitleFromByteBuffer(JNIEnv*
    env, jclass jcaller,
    jobject state,
    jint savedStateVersion) {
  return GetDisplayTitleFromByteBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, state),
      savedStateVersion).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    GetVirtualUrlFromByteBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& state,
    jint savedStateVersion);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_TabState_nativeGetVirtualUrlFromByteBuffer(JNIEnv*
    env, jclass jcaller,
    jobject state,
    jint savedStateVersion) {
  return GetVirtualUrlFromByteBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, state),
      savedStateVersion).Release();
}

static void FreeWebContentsStateBuffer(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& buffer);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_TabState_nativeFreeWebContentsStateBuffer(JNIEnv*
    env, jclass jcaller,
    jobject buffer) {
  return FreeWebContentsStateBuffer(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, buffer));
}

static void CreateHistoricalTab(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& state,
    jint savedStateVersion);

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_TabState_nativeCreateHistoricalTab(JNIEnv*
    env, jclass jcaller,
    jobject state,
    jint savedStateVersion) {
  return CreateHistoricalTab(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, state),
      savedStateVersion);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsTabState[] = {
    { "nativeRestoreContentsFromByteBuffer",
"("
"Ljava/nio/ByteBuffer;"
"I"
"Z"
")"
"Lorg/chromium/content_public/browser/WebContents;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeRestoreContentsFromByteBuffer)
    },
    { "nativeGetContentsStateAsByteBuffer",
"("
"Lorg/chromium/chrome/browser/tab/Tab;"
")"
"Ljava/nio/ByteBuffer;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeGetContentsStateAsByteBuffer)
    },
    { "nativeCreateSingleNavigationStateAsByteBuffer",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"Z"
")"
"Ljava/nio/ByteBuffer;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeCreateSingleNavigationStateAsByteBuffer)
    },
    { "nativeGetDisplayTitleFromByteBuffer",
"("
"Ljava/nio/ByteBuffer;"
"I"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeGetDisplayTitleFromByteBuffer)
    },
    { "nativeGetVirtualUrlFromByteBuffer",
"("
"Ljava/nio/ByteBuffer;"
"I"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeGetVirtualUrlFromByteBuffer)
    },
    { "nativeFreeWebContentsStateBuffer",
"("
"Ljava/nio/ByteBuffer;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeFreeWebContentsStateBuffer)
    },
    { "nativeCreateHistoricalTab",
"("
"Ljava/nio/ByteBuffer;"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_TabState_nativeCreateHistoricalTab)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsTabStateSize = arraysize(kMethodsTabState);

  if (env->RegisterNatives(TabState_clazz(env),
                           kMethodsTabState,
                           kMethodsTabStateSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, TabState_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_TabState_JNI