// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/NetStringUtil

#ifndef org_chromium_net_NetStringUtil_JNI
#define org_chromium_net_NetStringUtil_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kNetStringUtilClassPath[] = "org/chromium/net/NetStringUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_NetStringUtil_clazz __attribute__((unused)) = 0;
#define NetStringUtil_clazz(env) base::android::LazyGetClass(env, kNetStringUtilClassPath, &g_NetStringUtil_clazz)

}  // namespace

namespace net {
namespace android {

// Step 2: method stubs.

static base::subtle::AtomicWord g_NetStringUtil_convertToUnicode = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_NetStringUtil_convertToUnicode(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& text,
    const base::android::JavaRefOrBare<jstring>& charsetName) {
  CHECK_CLAZZ(env, NetStringUtil_clazz(env),
      NetStringUtil_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, NetStringUtil_clazz(env),
      "convertToUnicode",

"("
"Ljava/nio/ByteBuffer;"
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_NetStringUtil_convertToUnicode);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(NetStringUtil_clazz(env),
          method_id, text.obj(), charsetName.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_NetStringUtil_convertToUnicodeAndNormalize =
    0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_NetStringUtil_convertToUnicodeAndNormalize(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& text,
    const base::android::JavaRefOrBare<jstring>& charsetName) {
  CHECK_CLAZZ(env, NetStringUtil_clazz(env),
      NetStringUtil_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, NetStringUtil_clazz(env),
      "convertToUnicodeAndNormalize",

"("
"Ljava/nio/ByteBuffer;"
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_NetStringUtil_convertToUnicodeAndNormalize);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(NetStringUtil_clazz(env),
          method_id, text.obj(), charsetName.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord
    g_NetStringUtil_convertToUnicodeWithSubstitutions = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_NetStringUtil_convertToUnicodeWithSubstitutions(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& text,
    const base::android::JavaRefOrBare<jstring>& charsetName) {
  CHECK_CLAZZ(env, NetStringUtil_clazz(env),
      NetStringUtil_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, NetStringUtil_clazz(env),
      "convertToUnicodeWithSubstitutions",

"("
"Ljava/nio/ByteBuffer;"
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_NetStringUtil_convertToUnicodeWithSubstitutions);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(NetStringUtil_clazz(env),
          method_id, text.obj(), charsetName.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

}  // namespace android
}  // namespace net

#endif  // org_chromium_net_NetStringUtil_JNI