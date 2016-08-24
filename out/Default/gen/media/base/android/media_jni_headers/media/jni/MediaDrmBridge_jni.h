// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaDrmBridge

#ifndef org_chromium_media_MediaDrmBridge_JNI
#define org_chromium_media_MediaDrmBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kMediaDrmBridgeClassPath[] = "org/chromium/media/MediaDrmBridge";
const char kKeyStatusClassPath[] =
    "org/chromium/media/MediaDrmBridge$KeyStatus";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_MediaDrmBridge_clazz __attribute__((unused)) = 0;
#define MediaDrmBridge_clazz(env) base::android::LazyGetClass(env, kMediaDrmBridgeClassPath, &g_MediaDrmBridge_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_KeyStatus_clazz __attribute__((unused)) = 0;
#define KeyStatus_clazz(env) base::android::LazyGetClass(env, kKeyStatusClassPath, &g_KeyStatus_clazz)

}  // namespace

namespace media {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnMediaCryptoReady(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jobject mediaCrypto) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnMediaCryptoReady");
  return native->OnMediaCryptoReady(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, mediaCrypto));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnStartProvisioning(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jstring defaultUrl,
    jbyteArray requestData) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnStartProvisioning");
  return native->OnStartProvisioning(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, defaultUrl),
      base::android::JavaParamRef<jbyteArray>(env, requestData));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseResolved(JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jlong promiseId) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPromiseResolved");
  return native->OnPromiseResolved(env,
      base::android::JavaParamRef<jobject>(env, jcaller), promiseId);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseResolvedWithSession(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jlong promiseId,
    jbyteArray sessionId) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPromiseResolvedWithSession");
  return native->OnPromiseResolvedWithSession(env,
      base::android::JavaParamRef<jobject>(env, jcaller), promiseId,
      base::android::JavaParamRef<jbyteArray>(env, sessionId));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseRejected(JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jlong promiseId,
    jstring errorMessage) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPromiseRejected");
  return native->OnPromiseRejected(env,
      base::android::JavaParamRef<jobject>(env, jcaller), promiseId,
      base::android::JavaParamRef<jstring>(env, errorMessage));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnSessionMessage(JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jbyteArray sessionId,
    jint requestType,
    jbyteArray message,
    jstring destinationUrl) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSessionMessage");
  return native->OnSessionMessage(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jbyteArray>(env, sessionId),
      requestType, base::android::JavaParamRef<jbyteArray>(env, message),
      base::android::JavaParamRef<jstring>(env, destinationUrl));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnSessionClosed(JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jbyteArray sessionId) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSessionClosed");
  return native->OnSessionClosed(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jbyteArray>(env, sessionId));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnSessionKeysChange(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jbyteArray sessionId,
    jobjectArray keysInfo,
    jboolean hasAdditionalUsableKey) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSessionKeysChange");
  return native->OnSessionKeysChange(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, sessionId),
      base::android::JavaParamRef<jobjectArray>(env, keysInfo),
      hasAdditionalUsableKey);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_media_MediaDrmBridge_nativeOnSessionExpirationUpdate(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jbyteArray sessionId,
    jlong expirationTime) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSessionExpirationUpdate");
  return native->OnSessionExpirationUpdate(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, sessionId), expirationTime);
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_media_MediaDrmBridge_nativeOnLegacySessionError(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jbyteArray sessionId,
    jstring errorMessage) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLegacySessionError");
  return native->OnLegacySessionError(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, sessionId),
      base::android::JavaParamRef<jstring>(env, errorMessage));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_media_MediaDrmBridge_nativeOnResetDeviceCredentialsCompleted(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaDrmBridge,
    jboolean success) {
  MediaDrmBridge* native =
      reinterpret_cast<MediaDrmBridge*>(nativeMediaDrmBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnResetDeviceCredentialsCompleted");
  return native->OnResetDeviceCredentialsCompleted(env,
      base::android::JavaParamRef<jobject>(env, jcaller), success);
}

static base::subtle::AtomicWord g_KeyStatus_getKeyId = 0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_KeyStatus_getKeyId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      KeyStatus_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, KeyStatus_clazz(env),
      "getKeyId",

"("
")"
"[B",
      &g_KeyStatus_getKeyId);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord g_KeyStatus_getStatusCode = 0;
static jint Java_KeyStatus_getStatusCode(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      KeyStatus_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, KeyStatus_clazz(env),
      "getStatusCode",

"("
")"
"I",
      &g_KeyStatus_getStatusCode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaDrmBridge_isCryptoSchemeSupported = 0;
static jboolean Java_MediaDrmBridge_isCryptoSchemeSupported(JNIEnv* env, const
    base::android::JavaRefOrBare<jbyteArray>& schemeUUID,
    const base::android::JavaRefOrBare<jstring>& containerMimeType) {
  CHECK_CLAZZ(env, MediaDrmBridge_clazz(env),
      MediaDrmBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaDrmBridge_clazz(env),
      "isCryptoSchemeSupported",

"("
"[B"
"Ljava/lang/String;"
")"
"Z",
      &g_MediaDrmBridge_isCryptoSchemeSupported);

  jboolean ret =
      env->CallStaticBooleanMethod(MediaDrmBridge_clazz(env),
          method_id, schemeUUID.obj(), containerMimeType.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaDrmBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaDrmBridge_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jbyteArray>& schemeUUID,
    const base::android::JavaRefOrBare<jstring>& securityLevel,
    jlong nativeMediaDrmBridge) {
  CHECK_CLAZZ(env, MediaDrmBridge_clazz(env),
      MediaDrmBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaDrmBridge_clazz(env),
      "create",

"("
"[B"
"Ljava/lang/String;"
"J"
")"
"Lorg/chromium/media/MediaDrmBridge;",
      &g_MediaDrmBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(MediaDrmBridge_clazz(env),
          method_id, schemeUUID.obj(), securityLevel.obj(),
              nativeMediaDrmBridge);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaDrmBridge_setServerCertificate = 0;
static jboolean Java_MediaDrmBridge_setServerCertificate(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& certificate) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "setServerCertificate",

"("
"[B"
")"
"Z",
      &g_MediaDrmBridge_setServerCertificate);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, certificate.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaDrmBridge_resetDeviceCredentials = 0;
static void Java_MediaDrmBridge_resetDeviceCredentials(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "resetDeviceCredentials",

"("
")"
"V",
      &g_MediaDrmBridge_resetDeviceCredentials);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaDrmBridge_destroy = 0;
static void Java_MediaDrmBridge_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "destroy",

"("
")"
"V",
      &g_MediaDrmBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaDrmBridge_createSessionFromNative = 0;
static void Java_MediaDrmBridge_createSessionFromNative(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& initData,
    const base::android::JavaRefOrBare<jstring>& mime,
    const base::android::JavaRefOrBare<jobjectArray>& optionalParamsArray,
    jlong promiseId) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "createSessionFromNative",

"("
"[B"
"Ljava/lang/String;"
"[Ljava/lang/String;"
"J"
")"
"V",
      &g_MediaDrmBridge_createSessionFromNative);

     env->CallVoidMethod(obj.obj(),
          method_id, initData.obj(), mime.obj(), optionalParamsArray.obj(),
              promiseId);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaDrmBridge_closeSession = 0;
static void Java_MediaDrmBridge_closeSession(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& sessionId,
    jlong promiseId) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "closeSession",

"("
"[B"
"J"
")"
"V",
      &g_MediaDrmBridge_closeSession);

     env->CallVoidMethod(obj.obj(),
          method_id, sessionId.obj(), promiseId);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaDrmBridge_updateSession = 0;
static void Java_MediaDrmBridge_updateSession(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& sessionId,
    const base::android::JavaRefOrBare<jbyteArray>& response,
    jlong promiseId) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "updateSession",

"("
"[B"
"[B"
"J"
")"
"V",
      &g_MediaDrmBridge_updateSession);

     env->CallVoidMethod(obj.obj(),
          method_id, sessionId.obj(), response.obj(), promiseId);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaDrmBridge_getSecurityLevel = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_MediaDrmBridge_getSecurityLevel(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "getSecurityLevel",

"("
")"
"Ljava/lang/String;",
      &g_MediaDrmBridge_getSecurityLevel);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_MediaDrmBridge_processProvisionResponse = 0;
static void Java_MediaDrmBridge_processProvisionResponse(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean isResponseReceived,
    const base::android::JavaRefOrBare<jbyteArray>& response) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaDrmBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaDrmBridge_clazz(env),
      "processProvisionResponse",

"("
"Z"
"[B"
")"
"V",
      &g_MediaDrmBridge_processProvisionResponse);

     env->CallVoidMethod(obj.obj(),
          method_id, isResponseReceived, response.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsMediaDrmBridge[] = {
    { "nativeOnMediaCryptoReady",
"("
"J"
"Landroid/media/MediaCrypto;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnMediaCryptoReady)
    },
    { "nativeOnStartProvisioning",
"("
"J"
"Ljava/lang/String;"
"[B"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnStartProvisioning)
    },
    { "nativeOnPromiseResolved",
"("
"J"
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseResolved)
    },
    { "nativeOnPromiseResolvedWithSession",
"("
"J"
"J"
"[B"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseResolvedWithSession)
    },
    { "nativeOnPromiseRejected",
"("
"J"
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnPromiseRejected)
    },
    { "nativeOnSessionMessage",
"("
"J"
"[B"
"I"
"[B"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnSessionMessage)
    },
    { "nativeOnSessionClosed",
"("
"J"
"[B"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnSessionClosed)
    },
    { "nativeOnSessionKeysChange",
"("
"J"
"[B"
"[Ljava/lang/Object;"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnSessionKeysChange)
    },
    { "nativeOnSessionExpirationUpdate",
"("
"J"
"[B"
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnSessionExpirationUpdate)
    },
    { "nativeOnLegacySessionError",
"("
"J"
"[B"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnLegacySessionError)
    },
    { "nativeOnResetDeviceCredentialsCompleted",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_media_MediaDrmBridge_nativeOnResetDeviceCredentialsCompleted)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsMediaDrmBridgeSize = arraysize(kMethodsMediaDrmBridge);

  if (env->RegisterNatives(MediaDrmBridge_clazz(env),
                           kMethodsMediaDrmBridge,
                           kMethodsMediaDrmBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, MediaDrmBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace media

#endif  // org_chromium_media_MediaDrmBridge_JNI
