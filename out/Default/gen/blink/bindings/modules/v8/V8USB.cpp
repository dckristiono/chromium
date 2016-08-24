// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USB.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8USBDeviceRequestOptions.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8USB::wrapperTypeInfo = { gin::kEmbedderBlink, V8USB::domTemplate, V8USB::trace, V8USB::traceWrappers, 0, 0, V8USB::preparePrototypeAndInterfaceObject, nullptr, "USB", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USB.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USB::s_wrapperTypeInfo = V8USB::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, USB>::value,
    "USB inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace USBV8Internal {

static void onconnectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USB* impl = V8USB::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onconnect()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onconnectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBV8Internal::onconnectAttributeGetter(info);
}

static void onconnectAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USB* impl = V8USB::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onconnect(), v8Value, V8USB::eventListenerCacheIndex);
    impl->setOnconnect(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onconnectAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    USBV8Internal::onconnectAttributeSetter(v8Value, info);
}

static void ondisconnectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USB* impl = V8USB::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->ondisconnect()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondisconnectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBV8Internal::ondisconnectAttributeGetter(info);
}

static void ondisconnectAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USB* impl = V8USB::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->ondisconnect(), v8Value, V8USB::eventListenerCacheIndex);
    impl->setOndisconnect(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void ondisconnectAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    USBV8Internal::ondisconnectAttributeSetter(v8Value, info);
}

static void getDevicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USB* impl = V8USB::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->getDevices(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void getDevicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBV8Internal::getDevicesMethod(info);
}

static void requestDeviceMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    USB* impl = V8USB::toImpl(info.Holder());
    USBDeviceRequestOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8USBDeviceRequestOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->requestDevice(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void requestDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "requestDevice", "USB", info.Holder(), info.GetIsolate());
    requestDeviceMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void requestDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBV8Internal::requestDeviceMethod(info);
}

} // namespace USBV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBAccessors[] = {
    {"onconnect", USBV8Internal::onconnectAttributeGetterCallback, USBV8Internal::onconnectAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ondisconnect", USBV8Internal::ondisconnectAttributeGetterCallback, USBV8Internal::ondisconnectAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8USBMethods[] = {
    {"getDevices", USBV8Internal::getDevicesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"requestDevice", USBV8Internal::requestDeviceMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8USBTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8USB::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8USB::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webUSBEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBAccessors, WTF_ARRAY_LENGTH(V8USBAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBMethods, WTF_ARRAY_LENGTH(V8USBMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8USB::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBTemplate);
}

bool V8USB::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USB::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USB* V8USB::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink