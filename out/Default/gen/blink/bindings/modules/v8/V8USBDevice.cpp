// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USBDevice.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8USBConfiguration.h"
#include "bindings/modules/v8/V8USBControlTransferParameters.h"
#include "core/dom/Document.h"
#include "core/dom/FlexibleArrayBufferView.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8USBDevice::wrapperTypeInfo = { gin::kEmbedderBlink, V8USBDevice::domTemplate, V8USBDevice::trace, V8USBDevice::traceWrappers, 0, 0, V8USBDevice::preparePrototypeAndInterfaceObject, nullptr, "USBDevice", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USBDevice.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USBDevice::s_wrapperTypeInfo = V8USBDevice::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, USBDevice>::value,
    "USBDevice inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace USBDeviceV8Internal {

static void usbVersionMajorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->usbVersionMajor());
}

static void usbVersionMajorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::usbVersionMajorAttributeGetter(info);
}

static void usbVersionMinorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->usbVersionMinor());
}

static void usbVersionMinorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::usbVersionMinorAttributeGetter(info);
}

static void usbVersionSubminorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->usbVersionSubminor());
}

static void usbVersionSubminorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::usbVersionSubminorAttributeGetter(info);
}

static void deviceClassAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceClass());
}

static void deviceClassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceClassAttributeGetter(info);
}

static void deviceSubclassAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceSubclass());
}

static void deviceSubclassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceSubclassAttributeGetter(info);
}

static void deviceProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceProtocol());
}

static void deviceProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceProtocolAttributeGetter(info);
}

static void vendorIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->vendorId());
}

static void vendorIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::vendorIdAttributeGetter(info);
}

static void productIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->productId());
}

static void productIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::productIdAttributeGetter(info);
}

static void deviceVersionMajorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceVersionMajor());
}

static void deviceVersionMajorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceVersionMajorAttributeGetter(info);
}

static void deviceVersionMinorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceVersionMinor());
}

static void deviceVersionMinorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceVersionMinorAttributeGetter(info);
}

static void deviceVersionSubminorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->deviceVersionSubminor());
}

static void deviceVersionSubminorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::deviceVersionSubminorAttributeGetter(info);
}

static void manufacturerNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->manufacturerName(), info.GetIsolate());
}

static void manufacturerNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::manufacturerNameAttributeGetter(info);
}

static void productNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->productName(), info.GetIsolate());
}

static void productNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::productNameAttributeGetter(info);
}

static void serialNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->serialNumber(), info.GetIsolate());
}

static void serialNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::serialNumberAttributeGetter(info);
}

static void configurationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    USBConfiguration* cppValue(WTF::getPtr(impl->configuration()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "configuration"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void configurationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::configurationAttributeGetter(info);
}

static void configurationsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValue(info, toV8(impl->configurations(), info.Holder(), info.GetIsolate()));
}

static void configurationsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::configurationsAttributeGetter(info);
}

static void openedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBDevice* impl = V8USBDevice::toImpl(holder);
    v8SetReturnValueBool(info, impl->opened());
}

static void openedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::openedAttributeGetter(info);
}

static void openMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->open(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void openMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::openMethod(info);
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->close(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::closeMethod(info);
}

static void selectConfigurationMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned configurationValue;
    {
        configurationValue = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->selectConfiguration(scriptState, configurationValue);
    v8SetReturnValue(info, result.v8Value());
}

static void selectConfigurationMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "selectConfiguration", "USBDevice", info.Holder(), info.GetIsolate());
    selectConfigurationMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void selectConfigurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::selectConfigurationMethod(info);
}

static void claimInterfaceMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned interfaceNumber;
    {
        interfaceNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->claimInterface(scriptState, interfaceNumber);
    v8SetReturnValue(info, result.v8Value());
}

static void claimInterfaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "claimInterface", "USBDevice", info.Holder(), info.GetIsolate());
    claimInterfaceMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void claimInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::claimInterfaceMethod(info);
}

static void releaseInterfaceMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned interfaceNumber;
    {
        interfaceNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->releaseInterface(scriptState, interfaceNumber);
    v8SetReturnValue(info, result.v8Value());
}

static void releaseInterfaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "releaseInterface", "USBDevice", info.Holder(), info.GetIsolate());
    releaseInterfaceMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void releaseInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::releaseInterfaceMethod(info);
}

static void selectAlternateInterfaceMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned interfaceNumber;
    unsigned alternateSetting;
    {
        interfaceNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        alternateSetting = toUInt8(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->selectAlternateInterface(scriptState, interfaceNumber, alternateSetting);
    v8SetReturnValue(info, result.v8Value());
}

static void selectAlternateInterfaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "selectAlternateInterface", "USBDevice", info.Holder(), info.GetIsolate());
    selectAlternateInterfaceMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void selectAlternateInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::selectAlternateInterfaceMethod(info);
}

static void controlTransferInMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    USBControlTransferParameters setup;
    unsigned length;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('setup') is not an object.");
            return;
        }
        V8USBControlTransferParameters::toImpl(info.GetIsolate(), info[0], setup, exceptionState);
        if (exceptionState.hadException())
            return;
        length = toUInt16(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->controlTransferIn(scriptState, setup, length);
    v8SetReturnValue(info, result.v8Value());
}

static void controlTransferInMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "controlTransferIn", "USBDevice", info.Holder(), info.GetIsolate());
    controlTransferInMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void controlTransferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::controlTransferInMethod(info);
}

static void controlTransferOutMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    USBControlTransferParameters setup;
    ArrayBufferOrArrayBufferView data;
    {
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('setup') is not an object.");
            return;
        }
        V8USBControlTransferParameters::toImpl(info.GetIsolate(), info[0], setup, exceptionState);
        if (exceptionState.hadException())
            return;
        if (UNLIKELY(numArgsPassed <= 1)) {
            ScriptState* scriptState = ScriptState::forReceiverObject(info);
            ScriptPromise result = impl->controlTransferOut(scriptState, setup);
            v8SetReturnValue(info, result.v8Value());
            return;
        }
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->controlTransferOut(scriptState, setup, data);
    v8SetReturnValue(info, result.v8Value());
}

static void controlTransferOutMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "controlTransferOut", "USBDevice", info.Holder(), info.GetIsolate());
    controlTransferOutMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void controlTransferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::controlTransferOutMethod(info);
}

static void clearHaltMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    V8StringResource<> direction;
    unsigned endpointNumber;
    {
        direction = info[0];
        if (!direction.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "in",
            "out",
        };
        if (!isValidEnum(direction, validValues, WTF_ARRAY_LENGTH(validValues), "USBDirection", exceptionState)) {
            return;
        }
        endpointNumber = toUInt8(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->clearHalt(scriptState, direction, endpointNumber);
    v8SetReturnValue(info, result.v8Value());
}

static void clearHaltMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearHalt", "USBDevice", info.Holder(), info.GetIsolate());
    clearHaltMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void clearHaltMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::clearHaltMethod(info);
}

static void transferInMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned endpointNumber;
    unsigned length;
    {
        endpointNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        length = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->transferIn(scriptState, endpointNumber, length);
    v8SetReturnValue(info, result.v8Value());
}

static void transferInMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transferIn", "USBDevice", info.Holder(), info.GetIsolate());
    transferInMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void transferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::transferInMethod(info);
}

static void transferOutMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned endpointNumber;
    ArrayBufferOrArrayBufferView data;
    {
        endpointNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->transferOut(scriptState, endpointNumber, data);
    v8SetReturnValue(info, result.v8Value());
}

static void transferOutMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transferOut", "USBDevice", info.Holder(), info.GetIsolate());
    transferOutMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void transferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::transferOutMethod(info);
}

static void isochronousTransferInMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned endpointNumber;
    Vector<unsigned> packetLengths;
    {
        endpointNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        packetLengths = toImplArray<Vector<unsigned>>(info[1], 2, info.GetIsolate(), exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->isochronousTransferIn(scriptState, endpointNumber, packetLengths);
    v8SetReturnValue(info, result.v8Value());
}

static void isochronousTransferInMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "isochronousTransferIn", "USBDevice", info.Holder(), info.GetIsolate());
    isochronousTransferInMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void isochronousTransferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::isochronousTransferInMethod(info);
}

static void isochronousTransferOutMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        return;
    }
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    unsigned endpointNumber;
    ArrayBufferOrArrayBufferView data;
    Vector<unsigned> packetLengths;
    {
        endpointNumber = toUInt8(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
        packetLengths = toImplArray<Vector<unsigned>>(info[2], 3, info.GetIsolate(), exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->isochronousTransferOut(scriptState, endpointNumber, data, packetLengths);
    v8SetReturnValue(info, result.v8Value());
}

static void isochronousTransferOutMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "isochronousTransferOut", "USBDevice", info.Holder(), info.GetIsolate());
    isochronousTransferOutMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void isochronousTransferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::isochronousTransferOutMethod(info);
}

static void resetMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDevice* impl = V8USBDevice::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->reset(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void resetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBDeviceV8Internal::resetMethod(info);
}

} // namespace USBDeviceV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBDeviceAccessors[] = {
    {"usbVersionMajor", USBDeviceV8Internal::usbVersionMajorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"usbVersionMinor", USBDeviceV8Internal::usbVersionMinorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"usbVersionSubminor", USBDeviceV8Internal::usbVersionSubminorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceClass", USBDeviceV8Internal::deviceClassAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceSubclass", USBDeviceV8Internal::deviceSubclassAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceProtocol", USBDeviceV8Internal::deviceProtocolAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vendorId", USBDeviceV8Internal::vendorIdAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"productId", USBDeviceV8Internal::productIdAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceVersionMajor", USBDeviceV8Internal::deviceVersionMajorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceVersionMinor", USBDeviceV8Internal::deviceVersionMinorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"deviceVersionSubminor", USBDeviceV8Internal::deviceVersionSubminorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"manufacturerName", USBDeviceV8Internal::manufacturerNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"productName", USBDeviceV8Internal::productNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"serialNumber", USBDeviceV8Internal::serialNumberAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"configuration", USBDeviceV8Internal::configurationAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"configurations", USBDeviceV8Internal::configurationsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"opened", USBDeviceV8Internal::openedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8USBDeviceMethods[] = {
    {"open", USBDeviceV8Internal::openMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"close", USBDeviceV8Internal::closeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"selectConfiguration", USBDeviceV8Internal::selectConfigurationMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"claimInterface", USBDeviceV8Internal::claimInterfaceMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"releaseInterface", USBDeviceV8Internal::releaseInterfaceMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"selectAlternateInterface", USBDeviceV8Internal::selectAlternateInterfaceMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"controlTransferIn", USBDeviceV8Internal::controlTransferInMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"controlTransferOut", USBDeviceV8Internal::controlTransferOutMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearHalt", USBDeviceV8Internal::clearHaltMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"transferIn", USBDeviceV8Internal::transferInMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"transferOut", USBDeviceV8Internal::transferOutMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"isochronousTransferIn", USBDeviceV8Internal::isochronousTransferInMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"isochronousTransferOut", USBDeviceV8Internal::isochronousTransferOutMethodCallback, 0, 3, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"reset", USBDeviceV8Internal::resetMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8USBDeviceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8USBDevice::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8USBDevice::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webUSBEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBDeviceAccessors, WTF_ARRAY_LENGTH(V8USBDeviceAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBDeviceMethods, WTF_ARRAY_LENGTH(V8USBDeviceMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8USBDevice::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBDeviceTemplate);
}

bool V8USBDevice::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USBDevice::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USBDevice* V8USBDevice::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
