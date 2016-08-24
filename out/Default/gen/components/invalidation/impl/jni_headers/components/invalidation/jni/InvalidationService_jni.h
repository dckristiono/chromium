// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/invalidation/InvalidationService

#ifndef org_chromium_components_invalidation_InvalidationService_JNI
#define org_chromium_components_invalidation_InvalidationService_JNI

#include <jni.h>

#include "../../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kInvalidationServiceClassPath[] =
    "org/chromium/components/invalidation/InvalidationService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InvalidationService_clazz __attribute__((unused)) =
    0;
#define InvalidationService_clazz(env) base::android::LazyGetClass(env, kInvalidationServiceClassPath, &g_InvalidationService_clazz)

}  // namespace

namespace invalidation {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_components_invalidation_InvalidationService_nativeInvalidate(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeInvalidationServiceAndroid,
    jint objectSource,
    jstring objectId,
    jlong version,
    jstring payload) {
  InvalidationServiceAndroid* native =
      reinterpret_cast<InvalidationServiceAndroid*>(nativeInvalidationServiceAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Invalidate");
  return native->Invalidate(env, base::android::JavaParamRef<jobject>(env,
      jcaller), objectSource, base::android::JavaParamRef<jstring>(env,
      objectId), version, base::android::JavaParamRef<jstring>(env, payload));
}

static base::subtle::AtomicWord g_InvalidationService_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_InvalidationService_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context,
    jlong nativeInvalidationServiceAndroid) {
  CHECK_CLAZZ(env, InvalidationService_clazz(env),
      InvalidationService_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, InvalidationService_clazz(env),
      "create",

"("
"Landroid/content/Context;"
"J"
")"
"Lorg/chromium/components/invalidation/InvalidationService;",
      &g_InvalidationService_create);

  jobject ret =
      env->CallStaticObjectMethod(InvalidationService_clazz(env),
          method_id, context.obj(), nativeInvalidationServiceAndroid);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_InvalidationService_setRegisteredObjectIds =
    0;
static void Java_InvalidationService_setRegisteredObjectIds(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jintArray>& objectSources,
    const base::android::JavaRefOrBare<jobjectArray>& objectNames) {
  CHECK_CLAZZ(env, obj.obj(),
      InvalidationService_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InvalidationService_clazz(env),
      "setRegisteredObjectIds",

"("
"[I"
"[Ljava/lang/String;"
")"
"V",
      &g_InvalidationService_setRegisteredObjectIds);

     env->CallVoidMethod(obj.obj(),
          method_id, objectSources.obj(), objectNames.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_InvalidationService_getInvalidatorClientId =
    0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_InvalidationService_getInvalidatorClientId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      InvalidationService_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InvalidationService_clazz(env),
      "getInvalidatorClientId",

"("
")"
"[B",
      &g_InvalidationService_getInvalidatorClientId);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsInvalidationService[] = {
    { "nativeInvalidate",
"("
"J"
"I"
"Ljava/lang/String;"
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_components_invalidation_InvalidationService_nativeInvalidate)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsInvalidationServiceSize =
      arraysize(kMethodsInvalidationService);

  if (env->RegisterNatives(InvalidationService_clazz(env),
                           kMethodsInvalidationService,
                           kMethodsInvalidationServiceSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, InvalidationService_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace invalidation

#endif  // org_chromium_components_invalidation_InvalidationService_JNI