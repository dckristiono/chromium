// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/bluetooth/ChromeBluetoothRemoteGattCharacteristic

#ifndef org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_JNI
#define org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChromeBluetoothRemoteGattCharacteristicClassPath[] =
    "org/chromium/device/bluetooth/ChromeBluetoothRemoteGattCharacteristic";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChromeBluetoothRemoteGattCharacteristic_clazz
    __attribute__((unused)) = 0;
#define ChromeBluetoothRemoteGattCharacteristic_clazz(env) base::android::LazyGetClass(env, kChromeBluetoothRemoteGattCharacteristicClassPath, &g_ChromeBluetoothRemoteGattCharacteristic_clazz)

}  // namespace

namespace device {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnChanged(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeBluetoothRemoteGattCharacteristicAndroid,
    jbyteArray value) {
  BluetoothRemoteGattCharacteristicAndroid* native =
      reinterpret_cast<BluetoothRemoteGattCharacteristicAndroid*>(nativeBluetoothRemoteGattCharacteristicAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnChanged");
  return native->OnChanged(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jbyteArray>(env, value));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnRead(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeBluetoothRemoteGattCharacteristicAndroid,
    jint status,
    jbyteArray value) {
  BluetoothRemoteGattCharacteristicAndroid* native =
      reinterpret_cast<BluetoothRemoteGattCharacteristicAndroid*>(nativeBluetoothRemoteGattCharacteristicAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRead");
  return native->OnRead(env, base::android::JavaParamRef<jobject>(env, jcaller),
      status, base::android::JavaParamRef<jbyteArray>(env, value));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnWrite(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeBluetoothRemoteGattCharacteristicAndroid,
    jint status) {
  BluetoothRemoteGattCharacteristicAndroid* native =
      reinterpret_cast<BluetoothRemoteGattCharacteristicAndroid*>(nativeBluetoothRemoteGattCharacteristicAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnWrite");
  return native->OnWrite(env, base::android::JavaParamRef<jobject>(env,
      jcaller), status);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeCreateGattRemoteDescriptor(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeBluetoothRemoteGattCharacteristicAndroid,
    jstring instanceId,
    jobject bluetoothGattDescriptorWrapper,
    jobject chromeBluetoothDevice) {
  BluetoothRemoteGattCharacteristicAndroid* native =
      reinterpret_cast<BluetoothRemoteGattCharacteristicAndroid*>(nativeBluetoothRemoteGattCharacteristicAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CreateGattRemoteDescriptor");
  return native->CreateGattRemoteDescriptor(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, instanceId),
      base::android::JavaParamRef<jobject>(env, bluetoothGattDescriptorWrapper),
      base::android::JavaParamRef<jobject>(env, chromeBluetoothDevice));
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_onBluetoothRemoteGattCharacteristicAndroidDestruction
    = 0;
static void
    Java_ChromeBluetoothRemoteGattCharacteristic_onBluetoothRemoteGattCharacteristicAndroidDestruction(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "onBluetoothRemoteGattCharacteristicAndroidDestruction",

"("
")"
"V",
&g_ChromeBluetoothRemoteGattCharacteristic_onBluetoothRemoteGattCharacteristicAndroidDestruction);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeBluetoothRemoteGattCharacteristic_create
    = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ChromeBluetoothRemoteGattCharacteristic_create(JNIEnv* env, jlong
    nativeBluetoothRemoteGattCharacteristicAndroid,
    const base::android::JavaRefOrBare<jobject>&
        bluetoothGattCharacteristicWrapper,
    const base::android::JavaRefOrBare<jstring>& instanceId,
    const base::android::JavaRefOrBare<jobject>& chromeDevice) {
  CHECK_CLAZZ(env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "create",

"("
"J"
"Ljava/lang/Object;"
"Ljava/lang/String;"
"Lorg/chromium/device/bluetooth/ChromeBluetoothDevice;"
")"
"Lorg/chromium/device/bluetooth/ChromeBluetoothRemoteGattCharacteristic;",
      &g_ChromeBluetoothRemoteGattCharacteristic_create);

  jobject ret =
env->CallStaticObjectMethod(ChromeBluetoothRemoteGattCharacteristic_clazz(env),
          method_id, nativeBluetoothRemoteGattCharacteristicAndroid,
              bluetoothGattCharacteristicWrapper.obj(), instanceId.obj(),
              chromeDevice.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_getUUID = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeBluetoothRemoteGattCharacteristic_getUUID(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "getUUID",

"("
")"
"Ljava/lang/String;",
      &g_ChromeBluetoothRemoteGattCharacteristic_getUUID);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_getProperties = 0;
static jint Java_ChromeBluetoothRemoteGattCharacteristic_getProperties(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "getProperties",

"("
")"
"I",
      &g_ChromeBluetoothRemoteGattCharacteristic_getProperties);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_readRemoteCharacteristic = 0;
static jboolean
    Java_ChromeBluetoothRemoteGattCharacteristic_readRemoteCharacteristic(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "readRemoteCharacteristic",

"("
")"
"Z",
      &g_ChromeBluetoothRemoteGattCharacteristic_readRemoteCharacteristic);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_writeRemoteCharacteristic = 0;
static jboolean
    Java_ChromeBluetoothRemoteGattCharacteristic_writeRemoteCharacteristic(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& value) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "writeRemoteCharacteristic",

"("
"[B"
")"
"Z",
      &g_ChromeBluetoothRemoteGattCharacteristic_writeRemoteCharacteristic);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, value.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_setCharacteristicNotification = 0;
static jboolean
    Java_ChromeBluetoothRemoteGattCharacteristic_setCharacteristicNotification(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, jboolean enabled) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "setCharacteristicNotification",

"("
"Z"
")"
"Z",
      &g_ChromeBluetoothRemoteGattCharacteristic_setCharacteristicNotification);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, enabled);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_ChromeBluetoothRemoteGattCharacteristic_createDescriptors = 0;
static void
    Java_ChromeBluetoothRemoteGattCharacteristic_createDescriptors(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeBluetoothRemoteGattCharacteristic_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeBluetoothRemoteGattCharacteristic_clazz(env),
      "createDescriptors",

"("
")"
"V",
      &g_ChromeBluetoothRemoteGattCharacteristic_createDescriptors);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsChromeBluetoothRemoteGattCharacteristic[] =
    {
    { "nativeOnChanged",
"("
"J"
"[B"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnChanged)
    },
    { "nativeOnRead",
"("
"J"
"I"
"[B"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnRead)
    },
    { "nativeOnWrite",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeOnWrite)
    },
    { "nativeCreateGattRemoteDescriptor",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/Object;"
"Ljava/lang/Object;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_nativeCreateGattRemoteDescriptor)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsChromeBluetoothRemoteGattCharacteristicSize =
      arraysize(kMethodsChromeBluetoothRemoteGattCharacteristic);

  if (env->RegisterNatives(ChromeBluetoothRemoteGattCharacteristic_clazz(env),
                           kMethodsChromeBluetoothRemoteGattCharacteristic,
                           kMethodsChromeBluetoothRemoteGattCharacteristicSize)
                               < 0) {
    jni_generator::HandleRegistrationError(
        env, ChromeBluetoothRemoteGattCharacteristic_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace device

#endif  // org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_JNI
