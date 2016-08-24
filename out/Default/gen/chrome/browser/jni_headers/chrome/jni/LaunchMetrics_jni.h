// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/metrics/LaunchMetrics

#ifndef org_chromium_chrome_browser_metrics_LaunchMetrics_JNI
#define org_chromium_chrome_browser_metrics_LaunchMetrics_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kLaunchMetricsClassPath[] =
    "org/chromium/chrome/browser/metrics/LaunchMetrics";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_LaunchMetrics_clazz __attribute__((unused)) = 0;
#define LaunchMetrics_clazz(env) base::android::LazyGetClass(env, kLaunchMetricsClassPath, &g_LaunchMetrics_clazz)

}  // namespace

namespace metrics {

// Step 2: method stubs.

static void RecordLaunch(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller,
    jboolean standalone,
    const base::android::JavaParamRef<jstring>& url,
    jint source,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_metrics_LaunchMetrics_nativeRecordLaunch(JNIEnv*
    env, jclass jcaller,
    jboolean standalone,
    jstring url,
    jint source,
    jobject webContents) {
  return RecordLaunch(env, base::android::JavaParamRef<jclass>(env, jcaller),
      standalone, base::android::JavaParamRef<jstring>(env, url), source,
      base::android::JavaParamRef<jobject>(env, webContents));
}

static void RecordHomePageLaunchMetrics(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jboolean showHomeButton,
    jboolean homepageIsNtp,
    const base::android::JavaParamRef<jstring>& homepageUrl);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_metrics_LaunchMetrics_nativeRecordHomePageLaunchMetrics(JNIEnv*
    env, jclass jcaller,
    jboolean showHomeButton,
    jboolean homepageIsNtp,
    jstring homepageUrl) {
  return RecordHomePageLaunchMetrics(env,
      base::android::JavaParamRef<jclass>(env, jcaller), showHomeButton,
      homepageIsNtp, base::android::JavaParamRef<jstring>(env, homepageUrl));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsLaunchMetrics[] = {
    { "nativeRecordLaunch",
"("
"Z"
"Ljava/lang/String;"
"I"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_metrics_LaunchMetrics_nativeRecordLaunch)
    },
    { "nativeRecordHomePageLaunchMetrics",
"("
"Z"
"Z"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_metrics_LaunchMetrics_nativeRecordHomePageLaunchMetrics)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsLaunchMetricsSize = arraysize(kMethodsLaunchMetrics);

  if (env->RegisterNatives(LaunchMetrics_clazz(env),
                           kMethodsLaunchMetrics,
                           kMethodsLaunchMetricsSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, LaunchMetrics_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace metrics

#endif  // org_chromium_chrome_browser_metrics_LaunchMetrics_JNI
