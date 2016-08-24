// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/metrics/RecordHistogram

#ifndef org_chromium_base_metrics_RecordHistogram_JNI
#define org_chromium_base_metrics_RecordHistogram_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kRecordHistogramClassPath[] =
    "org/chromium/base/metrics/RecordHistogram";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_RecordHistogram_clazz __attribute__((unused)) = 0;
#define RecordHistogram_clazz(env) base::android::LazyGetClass(env, kRecordHistogramClassPath, &g_RecordHistogram_clazz)

}  // namespace

namespace base {
namespace android {

// Step 2: method stubs.

static jlong RecordCustomTimesHistogramMilliseconds(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jint duration,
    jint min,
    jint max,
    jint numBuckets);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordCustomTimesHistogramMilliseconds(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jint duration,
    jint min,
    jint max,
    jint numBuckets) {
  return RecordCustomTimesHistogramMilliseconds(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, name), key, duration, min, max,
      numBuckets);
}

static jlong RecordBooleanHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jboolean sample);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordBooleanHistogram(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jboolean sample) {
  return RecordBooleanHistogram(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, name), key, sample);
}

static jlong RecordEnumeratedHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jint sample,
    jint boundary);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordEnumeratedHistogram(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jint sample,
    jint boundary) {
  return RecordEnumeratedHistogram(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, name), key, sample,
      boundary);
}

static jlong RecordCustomCountHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jint sample,
    jint min,
    jint max,
    jint numBuckets);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordCustomCountHistogram(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jint sample,
    jint min,
    jint max,
    jint numBuckets) {
  return RecordCustomCountHistogram(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, name), key, sample, min, max,
      numBuckets);
}

static jlong RecordLinearCountHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jint sample,
    jint min,
    jint max,
    jint numBuckets);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordLinearCountHistogram(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jint sample,
    jint min,
    jint max,
    jint numBuckets) {
  return RecordLinearCountHistogram(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, name), key, sample, min, max,
      numBuckets);
}

static jlong RecordSparseHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jlong key,
    jint sample);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_base_metrics_RecordHistogram_nativeRecordSparseHistogram(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jlong key,
    jint sample) {
  return RecordSparseHistogram(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, name), key, sample);
}

static jint GetHistogramValueCountForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& name,
    jint sample);

extern "C" __attribute__((visibility("default")))
jint
    Java_org_chromium_base_metrics_RecordHistogram_nativeGetHistogramValueCountForTesting(JNIEnv*
    env, jclass jcaller,
    jstring name,
    jint sample) {
  return GetHistogramValueCountForTesting(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, name), sample);
}

static void Initialize(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller);

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_base_metrics_RecordHistogram_nativeInitialize(JNIEnv*
    env, jclass jcaller) {
  return Initialize(env, base::android::JavaParamRef<jclass>(env, jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsRecordHistogram[] = {
    { "nativeRecordCustomTimesHistogramMilliseconds",
"("
"Ljava/lang/String;"
"J"
"I"
"I"
"I"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordCustomTimesHistogramMilliseconds)
    },
    { "nativeRecordBooleanHistogram",
"("
"Ljava/lang/String;"
"J"
"Z"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordBooleanHistogram)
    },
    { "nativeRecordEnumeratedHistogram",
"("
"Ljava/lang/String;"
"J"
"I"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordEnumeratedHistogram)
    },
    { "nativeRecordCustomCountHistogram",
"("
"Ljava/lang/String;"
"J"
"I"
"I"
"I"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordCustomCountHistogram)
    },
    { "nativeRecordLinearCountHistogram",
"("
"Ljava/lang/String;"
"J"
"I"
"I"
"I"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordLinearCountHistogram)
    },
    { "nativeRecordSparseHistogram",
"("
"Ljava/lang/String;"
"J"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeRecordSparseHistogram)
    },
    { "nativeGetHistogramValueCountForTesting",
"("
"Ljava/lang/String;"
"I"
")"
"I",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeGetHistogramValueCountForTesting)
    },
    { "nativeInitialize",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_base_metrics_RecordHistogram_nativeInitialize)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsRecordHistogramSize = arraysize(kMethodsRecordHistogram);

  if (env->RegisterNatives(RecordHistogram_clazz(env),
                           kMethodsRecordHistogram,
                           kMethodsRecordHistogramSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, RecordHistogram_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_metrics_RecordHistogram_JNI