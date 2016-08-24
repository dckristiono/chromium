// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/partnerbookmarks/PartnerBookmarksReader

#ifndef org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_JNI
#define org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kPartnerBookmarksReaderClassPath[] =
    "org/chromium/chrome/browser/partnerbookmarks/PartnerBookmarksReader";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_PartnerBookmarksReader_clazz __attribute__((unused))
    = 0;
#define PartnerBookmarksReader_clazz(env) base::android::LazyGetClass(env, kPartnerBookmarksReaderClassPath, &g_PartnerBookmarksReader_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeInit(JNIEnv*
    env, jobject jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeReset(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePartnerBookmarksReader) {
  PartnerBookmarksReader* native =
      reinterpret_cast<PartnerBookmarksReader*>(nativePartnerBookmarksReader);
  CHECK_NATIVE_PTR(env, jcaller, native, "Reset");
  return native->Reset(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePartnerBookmarksReader) {
  PartnerBookmarksReader* native =
      reinterpret_cast<PartnerBookmarksReader*>(nativePartnerBookmarksReader);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeAddPartnerBookmark(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePartnerBookmarksReader,
    jstring url,
    jstring title,
    jboolean isFolder,
    jlong parentId,
    jbyteArray favicon,
    jbyteArray touchicon) {
  PartnerBookmarksReader* native =
      reinterpret_cast<PartnerBookmarksReader*>(nativePartnerBookmarksReader);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddPartnerBookmark", 0);
  return native->AddPartnerBookmark(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, title), isFolder, parentId,
      base::android::JavaParamRef<jbyteArray>(env, favicon),
      base::android::JavaParamRef<jbyteArray>(env, touchicon));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativePartnerBookmarksCreationComplete(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePartnerBookmarksReader) {
  PartnerBookmarksReader* native =
      reinterpret_cast<PartnerBookmarksReader*>(nativePartnerBookmarksReader);
  CHECK_NATIVE_PTR(env, jcaller, native, "PartnerBookmarksCreationComplete");
  return native->PartnerBookmarksCreationComplete(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

static void DisablePartnerBookmarksEditing(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeDisablePartnerBookmarksEditing(JNIEnv*
    env, jclass jcaller) {
  return DisablePartnerBookmarksEditing(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsPartnerBookmarksReader[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeInit)
    },
    { "nativeReset",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeReset)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeDestroy)
    },
    { "nativeAddPartnerBookmark",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"J"
"[B"
"[B"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeAddPartnerBookmark)
    },
    { "nativePartnerBookmarksCreationComplete",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativePartnerBookmarksCreationComplete)
    },
    { "nativeDisablePartnerBookmarksEditing",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_nativeDisablePartnerBookmarksEditing)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsPartnerBookmarksReaderSize =
      arraysize(kMethodsPartnerBookmarksReader);

  if (env->RegisterNatives(PartnerBookmarksReader_clazz(env),
                           kMethodsPartnerBookmarksReader,
                           kMethodsPartnerBookmarksReaderSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, PartnerBookmarksReader_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_JNI
