// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/geolocation/LocationProviderAdapter

#ifndef org_chromium_device_geolocation_LocationProviderAdapter_JNI
#define org_chromium_device_geolocation_LocationProviderAdapter_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kLocationProviderAdapterClassPath[] =
    "org/chromium/device/geolocation/LocationProviderAdapter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_LocationProviderAdapter_clazz __attribute__((unused))
    = 0;
#define LocationProviderAdapter_clazz(env) base::android::LazyGetClass(env, kLocationProviderAdapterClassPath, &g_LocationProviderAdapter_clazz)

}  // namespace

// Step 2: method stubs.

static void NewLocationAvailable(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jdouble latitude,
    jdouble longitude,
    jdouble timeStamp,
    jboolean hasAltitude,
    jdouble altitude,
    jboolean hasAccuracy,
    jdouble accuracy,
    jboolean hasHeading,
    jdouble heading,
    jboolean hasSpeed,
    jdouble speed);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_geolocation_LocationProviderAdapter_nativeNewLocationAvailable(JNIEnv*
    env, jclass jcaller,
    jdouble latitude,
    jdouble longitude,
    jdouble timeStamp,
    jboolean hasAltitude,
    jdouble altitude,
    jboolean hasAccuracy,
    jdouble accuracy,
    jboolean hasHeading,
    jdouble heading,
    jboolean hasSpeed,
    jdouble speed) {
  return NewLocationAvailable(env, base::android::JavaParamRef<jclass>(env,
      jcaller), latitude, longitude, timeStamp, hasAltitude, altitude,
      hasAccuracy, accuracy, hasHeading, heading, hasSpeed, speed);
}

static void NewErrorAvailable(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& message);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_geolocation_LocationProviderAdapter_nativeNewErrorAvailable(JNIEnv*
    env, jclass jcaller,
    jstring message) {
  return NewErrorAvailable(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, message));
}

static base::subtle::AtomicWord g_LocationProviderAdapter_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_LocationProviderAdapter_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context) {
  CHECK_CLAZZ(env, LocationProviderAdapter_clazz(env),
      LocationProviderAdapter_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, LocationProviderAdapter_clazz(env),
      "create",

"("
"Landroid/content/Context;"
")"
"Lorg/chromium/device/geolocation/LocationProviderAdapter;",
      &g_LocationProviderAdapter_create);

  jobject ret =
      env->CallStaticObjectMethod(LocationProviderAdapter_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_LocationProviderAdapter_start = 0;
static jboolean Java_LocationProviderAdapter_start(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean enableHighAccuracy) {
  CHECK_CLAZZ(env, obj.obj(),
      LocationProviderAdapter_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, LocationProviderAdapter_clazz(env),
      "start",

"("
"Z"
")"
"Z",
      &g_LocationProviderAdapter_start);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, enableHighAccuracy);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_LocationProviderAdapter_stop = 0;
static void Java_LocationProviderAdapter_stop(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      LocationProviderAdapter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, LocationProviderAdapter_clazz(env),
      "stop",

"("
")"
"V",
      &g_LocationProviderAdapter_stop);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsLocationProviderAdapter[] = {
    { "nativeNewLocationAvailable",
"("
"D"
"D"
"D"
"Z"
"D"
"Z"
"D"
"Z"
"D"
"Z"
"D"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_geolocation_LocationProviderAdapter_nativeNewLocationAvailable)
    },
    { "nativeNewErrorAvailable",
"("
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_geolocation_LocationProviderAdapter_nativeNewErrorAvailable)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsLocationProviderAdapterSize =
      arraysize(kMethodsLocationProviderAdapter);

  if (env->RegisterNatives(LocationProviderAdapter_clazz(env),
                           kMethodsLocationProviderAdapter,
                           kMethodsLocationProviderAdapterSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, LocationProviderAdapter_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_device_geolocation_LocationProviderAdapter_JNI
