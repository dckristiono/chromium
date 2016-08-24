// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/base/ResourceBundle

#ifndef org_chromium_ui_base_ResourceBundle_JNI
#define org_chromium_ui_base_ResourceBundle_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kResourceBundleClassPath[] = "org/chromium/ui/base/ResourceBundle";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ResourceBundle_clazz __attribute__((unused)) = 0;
#define ResourceBundle_clazz(env) base::android::LazyGetClass(env, kResourceBundleClassPath, &g_ResourceBundle_clazz)

}  // namespace

namespace ui {

// Step 2: method stubs.

static base::subtle::AtomicWord g_ResourceBundle_getLocalePakResourcePath = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ResourceBundle_getLocalePakResourcePath(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& locale) {
  CHECK_CLAZZ(env, ResourceBundle_clazz(env),
      ResourceBundle_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ResourceBundle_clazz(env),
      "getLocalePakResourcePath",

"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_ResourceBundle_getLocalePakResourcePath);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(ResourceBundle_clazz(env),
          method_id, locale.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

}  // namespace ui

#endif  // org_chromium_ui_base_ResourceBundle_JNI