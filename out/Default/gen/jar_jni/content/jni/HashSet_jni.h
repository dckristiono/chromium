// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     java/util/HashSet

#ifndef java_util_HashSet_JNI
#define java_util_HashSet_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kHashSetClassPath[] = "java/util/HashSet";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_HashSet_clazz __attribute__((unused)) = 0;
#define HashSet_clazz(env) base::android::LazyGetClass(env, kHashSetClassPath, &g_HashSet_clazz)

}  // namespace

namespace JNI_HashSet {

// Step 2: method stubs.

static base::subtle::AtomicWord g_HashSet_add = 0;
static jboolean Java_HashSet_add(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) __attribute__ ((unused));
static jboolean Java_HashSet_add(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "add",
      "(Ljava/lang/Object;)Z",
      &g_HashSet_add);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_HashSet_clear = 0;
static void Java_HashSet_clear(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) __attribute__ ((unused));
static void Java_HashSet_clear(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "clear",
      "()V",
      &g_HashSet_clear);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_HashSet_clone = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_HashSet_clone(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_HashSet_clone(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "clone",
      "()Ljava/lang/Object;",
      &g_HashSet_clone);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_HashSet_contains = 0;
static jboolean Java_HashSet_contains(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) __attribute__ ((unused));
static jboolean Java_HashSet_contains(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "contains",
      "(Ljava/lang/Object;)Z",
      &g_HashSet_contains);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_HashSet_isEmpty = 0;
static jboolean Java_HashSet_isEmpty(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) __attribute__ ((unused));
static jboolean Java_HashSet_isEmpty(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "isEmpty",
      "()Z",
      &g_HashSet_isEmpty);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_HashSet_iterator = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_HashSet_iterator(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_HashSet_iterator(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "iterator",
      "()Ljava/util/Iterator;",
      &g_HashSet_iterator);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_HashSet_remove = 0;
static jboolean Java_HashSet_remove(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) __attribute__ ((unused));
static jboolean Java_HashSet_remove(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "remove",
      "(Ljava/lang/Object;)Z",
      &g_HashSet_remove);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_HashSet_size = 0;
static jint Java_HashSet_size(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) __attribute__ ((unused));
static jint Java_HashSet_size(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      HashSet_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "size",
      "()I",
      &g_HashSet_size);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_HashSet_ConstructorJUHS = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS(JNIEnv* env) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS(JNIEnv* env) {
  CHECK_CLAZZ(env, HashSet_clazz(env),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "<init>",
      "()V",
      &g_HashSet_ConstructorJUHS);

  jobject ret =
      env->NewObject(HashSet_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_HashSet_ConstructorJUHS_I = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_I(JNIEnv* env, JniIntWrapper p0) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_I(JNIEnv* env, JniIntWrapper p0) {
  CHECK_CLAZZ(env, HashSet_clazz(env),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "<init>",
      "(I)V",
      &g_HashSet_ConstructorJUHS_I);

  jobject ret =
      env->NewObject(HashSet_clazz(env),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_HashSet_ConstructorJUHS_I_F = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_I_F(JNIEnv* env, JniIntWrapper p0,
    jfloat p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_I_F(JNIEnv* env, JniIntWrapper p0,
    jfloat p1) {
  CHECK_CLAZZ(env, HashSet_clazz(env),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "<init>",
      "(IF)V",
      &g_HashSet_ConstructorJUHS_I_F);

  jobject ret =
      env->NewObject(HashSet_clazz(env),
          method_id, as_jint(p0), p1);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_HashSet_ConstructorJUHS_JUC = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_JUC(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& extends) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_HashSet_ConstructorJUHS_JUC(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& extends) {
  CHECK_CLAZZ(env, HashSet_clazz(env),
      HashSet_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, HashSet_clazz(env),
      "<init>",
      "(Ljava/util/Collection;)V",
      &g_HashSet_ConstructorJUHS_JUC);

  jobject ret =
      env->NewObject(HashSet_clazz(env),
          method_id, extends.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

}  // namespace JNI_HashSet

#endif  // java_util_HashSet_JNI
