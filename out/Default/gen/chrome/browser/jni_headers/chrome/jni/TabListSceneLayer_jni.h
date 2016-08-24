// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/scene_layer/TabListSceneLayer

#ifndef org_chromium_chrome_browser_compositor_scene_layer_TabListSceneLayer_JNI
#define org_chromium_chrome_browser_compositor_scene_layer_TabListSceneLayer_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kTabListSceneLayerClassPath[] =
    "org/chromium/chrome/browser/compositor/scene_layer/TabListSceneLayer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_TabListSceneLayer_clazz __attribute__((unused)) = 0;
#define TabListSceneLayer_clazz(env) base::android::LazyGetClass(env, kTabListSceneLayerClassPath, &g_TabListSceneLayer_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeInit(JNIEnv*
    env, jobject jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeBeginBuildingFrame(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabListSceneLayer) {
  TabListSceneLayer* native =
      reinterpret_cast<TabListSceneLayer*>(nativeTabListSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "BeginBuildingFrame");
  return native->BeginBuildingFrame(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeFinishBuildingFrame(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabListSceneLayer) {
  TabListSceneLayer* native =
      reinterpret_cast<TabListSceneLayer*>(nativeTabListSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "FinishBuildingFrame");
  return native->FinishBuildingFrame(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeUpdateLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabListSceneLayer,
    jint backgroundColor,
    jfloat viewportX,
    jfloat viewportY,
    jfloat viewportWidth,
    jfloat viewportHeight,
    jobject layerTitleCache,
    jobject tabContentManager,
    jobject resourceManager) {
  TabListSceneLayer* native =
      reinterpret_cast<TabListSceneLayer*>(nativeTabListSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateLayer");
  return native->UpdateLayer(env, base::android::JavaParamRef<jobject>(env,
      jcaller), backgroundColor, viewportX, viewportY, viewportWidth,
      viewportHeight, base::android::JavaParamRef<jobject>(env,
      layerTitleCache), base::android::JavaParamRef<jobject>(env,
      tabContentManager), base::android::JavaParamRef<jobject>(env,
      resourceManager));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativePutTabLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabListSceneLayer,
    jint id,
    jint toolbarResourceId,
    jint closeButtonResourceId,
    jint shadowResourceId,
    jint contourResourceId,
    jint backLogoResourceId,
    jint borderResourceId,
    jint borderInnerShadowResourceId,
    jboolean canUseLiveLayer,
    jint tabBackgroundColor,
    jint backLogoColor,
    jboolean incognito,
    jboolean isPortrait,
    jfloat x,
    jfloat y,
    jfloat width,
    jfloat height,
    jfloat contentWidth,
    jfloat contentHeight,
    jfloat visibleContentHeight,
    jfloat shadowX,
    jfloat shadowY,
    jfloat shadowWidth,
    jfloat shadowHeight,
    jfloat pivotX,
    jfloat pivotY,
    jfloat rotationX,
    jfloat rotationY,
    jfloat alpha,
    jfloat borderAlpha,
    jfloat borderInnerShadowAlpha,
    jfloat contourAlpha,
    jfloat shadowAlpha,
    jfloat closeAlpha,
    jfloat closeBtnWidth,
    jfloat staticToViewBlend,
    jfloat borderScale,
    jfloat saturation,
    jfloat brightness,
    jboolean showToolbar,
    jint defaultThemeColor,
    jint toolbarBackgroundColor,
    jint closeButtonColor,
    jboolean anonymizeToolbar,
    jint toolbarTextBoxResource,
    jint toolbarTextBoxBackgroundColor,
    jfloat toolbarTextBoxAlpha,
    jfloat toolbarAlpha,
    jfloat toolbarYOffset,
    jfloat sideBorderScale,
    jboolean attachContent,
    jboolean insetVerticalBorder) {
  TabListSceneLayer* native =
      reinterpret_cast<TabListSceneLayer*>(nativeTabListSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "PutTabLayer");
  return native->PutTabLayer(env, base::android::JavaParamRef<jobject>(env,
      jcaller), id, toolbarResourceId, closeButtonResourceId, shadowResourceId,
      contourResourceId, backLogoResourceId, borderResourceId,
      borderInnerShadowResourceId, canUseLiveLayer, tabBackgroundColor,
      backLogoColor, incognito, isPortrait, x, y, width, height, contentWidth,
      contentHeight, visibleContentHeight, shadowX, shadowY, shadowWidth,
      shadowHeight, pivotX, pivotY, rotationX, rotationY, alpha, borderAlpha,
      borderInnerShadowAlpha, contourAlpha, shadowAlpha, closeAlpha,
      closeBtnWidth, staticToViewBlend, borderScale, saturation, brightness,
      showToolbar, defaultThemeColor, toolbarBackgroundColor, closeButtonColor,
      anonymizeToolbar, toolbarTextBoxResource, toolbarTextBoxBackgroundColor,
      toolbarTextBoxAlpha, toolbarAlpha, toolbarYOffset, sideBorderScale,
      attachContent, insetVerticalBorder);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsTabListSceneLayer[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeInit)
    },
    { "nativeBeginBuildingFrame",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeBeginBuildingFrame)
    },
    { "nativeFinishBuildingFrame",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeFinishBuildingFrame)
    },
    { "nativeUpdateLayer",
"("
"J"
"I"
"F"
"F"
"F"
"F"
"Lorg/chromium/chrome/browser/compositor/LayerTitleCache;"
"Lorg/chromium/chrome/browser/compositor/layouts/content/TabContentManager;"
"Lorg/chromium/ui/resources/ResourceManager;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativeUpdateLayer)
    },
    { "nativePutTabLayer",
"("
"J"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"Z"
"I"
"I"
"Z"
"Z"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"Z"
"I"
"I"
"I"
"Z"
"I"
"I"
"F"
"F"
"F"
"F"
"Z"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_nativePutTabLayer)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsTabListSceneLayerSize =
      arraysize(kMethodsTabListSceneLayer);

  if (env->RegisterNatives(TabListSceneLayer_clazz(env),
                           kMethodsTabListSceneLayer,
                           kMethodsTabListSceneLayerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, TabListSceneLayer_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_compositor_scene_layer_TabListSceneLayer_JNI
