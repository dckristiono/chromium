// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/InterfaceRegistrar

#ifndef org_chromium_content_browser_InterfaceRegistrar_JNI
#define org_chromium_content_browser_InterfaceRegistrar_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kInterfaceRegistrarClassPath[] =
    "org/chromium/content/browser/InterfaceRegistrar";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InterfaceRegistrar_clazz __attribute__((unused)) = 0;
#define InterfaceRegistrar_clazz(env) base::android::LazyGetClass(env, kInterfaceRegistrarClassPath, &g_InterfaceRegistrar_clazz)

}  // namespace

namespace content {

// Step 2: method stubs.

static base::subtle::AtomicWord g_InterfaceRegistrar_exposeInterfacesToRenderer
    = 0;
static void Java_InterfaceRegistrar_exposeInterfacesToRenderer(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& registry,
    const base::android::JavaRefOrBare<jobject>& applicationContext) {
  CHECK_CLAZZ(env, InterfaceRegistrar_clazz(env),
      InterfaceRegistrar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, InterfaceRegistrar_clazz(env),
      "exposeInterfacesToRenderer",

"("
"Lorg/chromium/content/browser/InterfaceRegistry;"
"Landroid/content/Context;"
")"
"V",
      &g_InterfaceRegistrar_exposeInterfacesToRenderer);

     env->CallStaticVoidMethod(InterfaceRegistrar_clazz(env),
          method_id, registry.obj(), applicationContext.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_InterfaceRegistrar_exposeInterfacesToFrame =
    0;
static void Java_InterfaceRegistrar_exposeInterfacesToFrame(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& registry,
    const base::android::JavaRefOrBare<jobject>& applicationContext,
    const base::android::JavaRefOrBare<jobject>& contents) {
  CHECK_CLAZZ(env, InterfaceRegistrar_clazz(env),
      InterfaceRegistrar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, InterfaceRegistrar_clazz(env),
      "exposeInterfacesToFrame",

"("
"Lorg/chromium/content/browser/InterfaceRegistry;"
"Landroid/content/Context;"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
      &g_InterfaceRegistrar_exposeInterfacesToFrame);

     env->CallStaticVoidMethod(InterfaceRegistrar_clazz(env),
          method_id, registry.obj(), applicationContext.obj(), contents.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

}  // namespace content

#endif  // org_chromium_content_browser_InterfaceRegistrar_JNI