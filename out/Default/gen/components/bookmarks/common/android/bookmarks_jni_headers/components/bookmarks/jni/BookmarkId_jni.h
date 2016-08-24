// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/bookmarks/BookmarkId

#ifndef org_chromium_components_bookmarks_BookmarkId_JNI
#define org_chromium_components_bookmarks_BookmarkId_JNI

#include <jni.h>

#include "../../../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kBookmarkIdClassPath[] =
    "org/chromium/components/bookmarks/BookmarkId";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_BookmarkId_clazz __attribute__((unused)) = 0;
#define BookmarkId_clazz(env) base::android::LazyGetClass(env, kBookmarkIdClassPath, &g_BookmarkId_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_BookmarkId_getId = 0;
static jlong Java_BookmarkId_getId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      BookmarkId_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, BookmarkId_clazz(env),
      "getId",

"("
")"
"J",
      &g_BookmarkId_getId);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_BookmarkId_getType = 0;
static jint Java_BookmarkId_getType(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      BookmarkId_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, BookmarkId_clazz(env),
      "getType",

"("
")"
"I",
      &g_BookmarkId_getType);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_BookmarkId_createBookmarkId = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_BookmarkId_createBookmarkId(JNIEnv* env, jlong id,
    JniIntWrapper type) {
  CHECK_CLAZZ(env, BookmarkId_clazz(env),
      BookmarkId_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BookmarkId_clazz(env),
      "createBookmarkId",

"("
"J"
"I"
")"
"Lorg/chromium/components/bookmarks/BookmarkId;",
      &g_BookmarkId_createBookmarkId);

  jobject ret =
      env->CallStaticObjectMethod(BookmarkId_clazz(env),
          method_id, id, as_jint(type));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

#endif  // org_chromium_components_bookmarks_BookmarkId_JNI
