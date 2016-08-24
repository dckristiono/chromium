// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/AndroidKeyStore

#ifndef org_chromium_net_AndroidKeyStore_JNI
#define org_chromium_net_AndroidKeyStore_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAndroidKeyStoreClassPath[] = "org/chromium/net/AndroidKeyStore";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AndroidKeyStore_clazz __attribute__((unused)) = 0;
#define AndroidKeyStore_clazz(env) base::android::LazyGetClass(env, kAndroidKeyStoreClassPath, &g_AndroidKeyStore_clazz)

}  // namespace

namespace net {
namespace android {

// Step 2: method stubs.

static base::subtle::AtomicWord g_AndroidKeyStore_getRSAKeyModulus = 0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_AndroidKeyStore_getRSAKeyModulus(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& privateKey) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "getRSAKeyModulus",

"("
"Ljava/security/PrivateKey;"
")"
"[B",
      &g_AndroidKeyStore_getRSAKeyModulus);

  jbyteArray ret =
static_cast<jbyteArray>(env->CallStaticObjectMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord g_AndroidKeyStore_getECKeyOrder = 0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_AndroidKeyStore_getECKeyOrder(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& privateKey) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "getECKeyOrder",

"("
"Ljava/security/PrivateKey;"
")"
"[B",
      &g_AndroidKeyStore_getECKeyOrder);

  jbyteArray ret =
static_cast<jbyteArray>(env->CallStaticObjectMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord g_AndroidKeyStore_rawSignDigestWithPrivateKey =
    0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_AndroidKeyStore_rawSignDigestWithPrivateKey(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& privateKey,
    const base::android::JavaRefOrBare<jbyteArray>& message) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "rawSignDigestWithPrivateKey",

"("
"Ljava/security/PrivateKey;"
"[B"
")"
"[B",
      &g_AndroidKeyStore_rawSignDigestWithPrivateKey);

  jbyteArray ret =
static_cast<jbyteArray>(env->CallStaticObjectMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj(), message.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord g_AndroidKeyStore_getPrivateKeyType = 0;
static jint Java_AndroidKeyStore_getPrivateKeyType(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& privateKey) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "getPrivateKeyType",

"("
"Ljava/security/PrivateKey;"
")"
"I",
      &g_AndroidKeyStore_getPrivateKeyType);

  jint ret =
      env->CallStaticIntMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AndroidKeyStore_getOpenSSLHandleForPrivateKey
    = 0;
static jlong Java_AndroidKeyStore_getOpenSSLHandleForPrivateKey(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& privateKey) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "getOpenSSLHandleForPrivateKey",

"("
"Ljava/security/PrivateKey;"
")"
"J",
      &g_AndroidKeyStore_getOpenSSLHandleForPrivateKey);

  jlong ret =
      env->CallStaticLongMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AndroidKeyStore_getOpenSSLEngineForPrivateKey
    = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AndroidKeyStore_getOpenSSLEngineForPrivateKey(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& privateKey) {
  CHECK_CLAZZ(env, AndroidKeyStore_clazz(env),
      AndroidKeyStore_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AndroidKeyStore_clazz(env),
      "getOpenSSLEngineForPrivateKey",

"("
"Ljava/security/PrivateKey;"
")"
"Ljava/lang/Object;",
      &g_AndroidKeyStore_getOpenSSLEngineForPrivateKey);

  jobject ret =
      env->CallStaticObjectMethod(AndroidKeyStore_clazz(env),
          method_id, privateKey.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

}  // namespace android
}  // namespace net

#endif  // org_chromium_net_AndroidKeyStore_JNI
