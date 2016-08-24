// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/BackgroundSyncLauncher

#ifndef org_chromium_chrome_browser_BackgroundSyncLauncher_JNI
#define org_chromium_chrome_browser_BackgroundSyncLauncher_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kBackgroundSyncLauncherClassPath[] =
    "org/chromium/chrome/browser/BackgroundSyncLauncher";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_BackgroundSyncLauncher_clazz __attribute__((unused))
    = 0;
#define BackgroundSyncLauncher_clazz(env) base::android::LazyGetClass(env, kBackgroundSyncLauncherClassPath, &g_BackgroundSyncLauncher_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_BackgroundSyncLauncher_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_BackgroundSyncLauncher_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context) {
  CHECK_CLAZZ(env, BackgroundSyncLauncher_clazz(env),
      BackgroundSyncLauncher_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BackgroundSyncLauncher_clazz(env),
      "create",

"("
"Landroid/content/Context;"
")"
"Lorg/chromium/chrome/browser/BackgroundSyncLauncher;",
      &g_BackgroundSyncLauncher_create);

  jobject ret =
      env->CallStaticObjectMethod(BackgroundSyncLauncher_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_BackgroundSyncLauncher_destroy = 0;
static void Java_BackgroundSyncLauncher_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      BackgroundSyncLauncher_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, BackgroundSyncLauncher_clazz(env),
      "destroy",

"("
")"
"V",
      &g_BackgroundSyncLauncher_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_BackgroundSyncLauncher_launchBrowserIfStopped
    = 0;
static void Java_BackgroundSyncLauncher_launchBrowserIfStopped(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& context,
    jboolean shouldLaunch,
    jlong minDelayMs) {
  CHECK_CLAZZ(env, obj.obj(),
      BackgroundSyncLauncher_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, BackgroundSyncLauncher_clazz(env),
      "launchBrowserIfStopped",

"("
"Landroid/content/Context;"
"Z"
"J"
")"
"V",
      &g_BackgroundSyncLauncher_launchBrowserIfStopped);

     env->CallVoidMethod(obj.obj(),
          method_id, context.obj(), shouldLaunch, minDelayMs);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_BackgroundSyncLauncher_shouldDisableBackgroundSync = 0;
static jboolean Java_BackgroundSyncLauncher_shouldDisableBackgroundSync(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& context) {
  CHECK_CLAZZ(env, BackgroundSyncLauncher_clazz(env),
      BackgroundSyncLauncher_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, BackgroundSyncLauncher_clazz(env),
      "shouldDisableBackgroundSync",

"("
"Landroid/content/Context;"
")"
"Z",
      &g_BackgroundSyncLauncher_shouldDisableBackgroundSync);

  jboolean ret =
      env->CallStaticBooleanMethod(BackgroundSyncLauncher_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_BackgroundSyncLauncher_JNI