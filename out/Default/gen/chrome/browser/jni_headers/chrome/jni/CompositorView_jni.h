// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/CompositorView

#ifndef org_chromium_chrome_browser_compositor_CompositorView_JNI
#define org_chromium_chrome_browser_compositor_CompositorView_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kCompositorViewClassPath[] =
    "org/chromium/chrome/browser/compositor/CompositorView";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_CompositorView_clazz __attribute__((unused)) = 0;
#define CompositorView_clazz(env) base::android::LazyGetClass(env, kCompositorViewClassPath, &g_CompositorView_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    jboolean lowMemDevice,
    jlong nativeWindowAndroid,
    const base::android::JavaParamRef<jobject>& layerTitleCache,
    const base::android::JavaParamRef<jobject>& tabContentManager);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeInit(JNIEnv*
    env, jobject jcaller,
    jboolean lowMemDevice,
    jlong nativeWindowAndroid,
    jobject layerTitleCache,
    jobject tabContentManager) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      lowMemDevice, nativeWindowAndroid,
      base::android::JavaParamRef<jobject>(env, layerTitleCache),
      base::android::JavaParamRef<jobject>(env, tabContentManager));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeGetResourceManager(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetResourceManager", NULL);
  return native->GetResourceManager(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceCreated(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceCreated");
  return native->SurfaceCreated(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceDestroyed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceDestroyed");
  return native->SurfaceDestroyed(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceChanged(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView,
    jint format,
    jint width,
    jint height,
    jobject surface) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceChanged");
  return native->SurfaceChanged(env, base::android::JavaParamRef<jobject>(env,
      jcaller), format, width, height, base::android::JavaParamRef<jobject>(env,
      surface));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeFinalizeLayers(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "FinalizeLayers");
  return native->FinalizeLayers(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetNeedsComposite(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetNeedsComposite");
  return native->SetNeedsComposite(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetLayoutViewport(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView,
    jfloat x,
    jfloat y,
    jfloat width,
    jfloat height,
    jfloat visibleXOffset,
    jfloat visibleYOffset,
    jfloat dpToPixel) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetLayoutViewport");
  return native->SetLayoutViewport(env,
      base::android::JavaParamRef<jobject>(env, jcaller), x, y, width, height,
      visibleXOffset, visibleYOffset, dpToPixel);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetOverlayVideoMode(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView,
    jboolean enabled) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetOverlayVideoMode");
  return native->SetOverlayVideoMode(env,
      base::android::JavaParamRef<jobject>(env, jcaller), enabled);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetSceneLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCompositorView,
    jobject sceneLayer) {
  CompositorView* native =
      reinterpret_cast<CompositorView*>(nativeCompositorView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetSceneLayer");
  return native->SetSceneLayer(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, sceneLayer));
}

static base::subtle::AtomicWord g_CompositorView_onCompositorLayout = 0;
static void Java_CompositorView_onCompositorLayout(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      CompositorView_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, CompositorView_clazz(env),
      "onCompositorLayout",

"("
")"
"V",
      &g_CompositorView_onCompositorLayout);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_CompositorView_onJellyBeanSurfaceDisconnectWorkaround = 0;
static void Java_CompositorView_onJellyBeanSurfaceDisconnectWorkaround(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, jboolean
    inOverlayMode) {
  CHECK_CLAZZ(env, obj.obj(),
      CompositorView_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, CompositorView_clazz(env),
      "onJellyBeanSurfaceDisconnectWorkaround",

"("
"Z"
")"
"V",
      &g_CompositorView_onJellyBeanSurfaceDisconnectWorkaround);

     env->CallVoidMethod(obj.obj(),
          method_id, inOverlayMode);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_CompositorView_onSwapBuffersCompleted = 0;
static void Java_CompositorView_onSwapBuffersCompleted(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper
    pendingSwapBuffersCount) {
  CHECK_CLAZZ(env, obj.obj(),
      CompositorView_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, CompositorView_clazz(env),
      "onSwapBuffersCompleted",

"("
"I"
")"
"V",
      &g_CompositorView_onSwapBuffersCompleted);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(pendingSwapBuffersCount));
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsCompositorView[] = {
    { "nativeInit",
"("
"Z"
"J"
"Lorg/chromium/chrome/browser/compositor/LayerTitleCache;"
"Lorg/chromium/chrome/browser/compositor/layouts/content/TabContentManager;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeDestroy)
    },
    { "nativeGetResourceManager",
"("
"J"
")"
"Lorg/chromium/ui/resources/ResourceManager;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeGetResourceManager)
    },
    { "nativeSurfaceCreated",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceCreated)
    },
    { "nativeSurfaceDestroyed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceDestroyed)
    },
    { "nativeSurfaceChanged",
"("
"J"
"I"
"I"
"I"
"Landroid/view/Surface;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSurfaceChanged)
    },
    { "nativeFinalizeLayers",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeFinalizeLayers)
    },
    { "nativeSetNeedsComposite",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetNeedsComposite)
    },
    { "nativeSetLayoutViewport",
"("
"J"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetLayoutViewport)
    },
    { "nativeSetOverlayVideoMode",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetOverlayVideoMode)
    },
    { "nativeSetSceneLayer",
"("
"J"
"Lorg/chromium/chrome/browser/compositor/scene_layer/SceneLayer;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_CompositorView_nativeSetSceneLayer)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsCompositorViewSize = arraysize(kMethodsCompositorView);

  if (env->RegisterNatives(CompositorView_clazz(env),
                           kMethodsCompositorView,
                           kMethodsCompositorViewSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, CompositorView_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_compositor_CompositorView_JNI