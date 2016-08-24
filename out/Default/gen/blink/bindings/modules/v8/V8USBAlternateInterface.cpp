// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USBAlternateInterface.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8USBEndpoint.h"
#include "bindings/modules/v8/V8USBInterface.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8USBAlternateInterface::wrapperTypeInfo = { gin::kEmbedderBlink, V8USBAlternateInterface::domTemplate, V8USBAlternateInterface::trace, V8USBAlternateInterface::traceWrappers, 0, 0, V8USBAlternateInterface::preparePrototypeAndInterfaceObject, nullptr, "USBAlternateInterface", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USBAlternateInterface.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USBAlternateInterface::s_wrapperTypeInfo = V8USBAlternateInterface::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, USBAlternateInterface>::value,
    "USBAlternateInterface inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace USBAlternateInterfaceV8Internal {

static void alternateSettingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->alternateSetting());
}

static void alternateSettingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::alternateSettingAttributeGetter(info);
}

static void interfaceClassAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->interfaceClass());
}

static void interfaceClassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::interfaceClassAttributeGetter(info);
}

static void interfaceSubclassAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->interfaceSubclass());
}

static void interfaceSubclassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::interfaceSubclassAttributeGetter(info);
}

static void interfaceProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->interfaceProtocol());
}

static void interfaceProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::interfaceProtocolAttributeGetter(info);
}

static void interfaceNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->interfaceName(), info.GetIsolate());
}

static void interfaceNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::interfaceNameAttributeGetter(info);
}

static void endpointsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBAlternateInterface* impl = V8USBAlternateInterface::toImpl(holder);
    v8SetReturnValue(info, toV8(impl->endpoints(), info.Holder(), info.GetIsolate()));
}

static void endpointsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBAlternateInterfaceV8Internal::endpointsAttributeGetter(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "USBAlternateInterface", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    USBInterface* deviceInterface;
    unsigned alternateSetting;
    {
        deviceInterface = V8USBInterface::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!deviceInterface) {
            exceptionState.throwTypeError("parameter 1 is not of type 'USBInterface'.");
            exceptionState.throwIfNeeded();
            return;
        }
        alternateSetting = toUInt8(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    USBAlternateInterface* impl = USBAlternateInterface::create(deviceInterface, alternateSetting, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8USBAlternateInterface::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace USBAlternateInterfaceV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBAlternateInterfaceAccessors[] = {
    {"alternateSetting", USBAlternateInterfaceV8Internal::alternateSettingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"interfaceClass", USBAlternateInterfaceV8Internal::interfaceClassAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"interfaceSubclass", USBAlternateInterfaceV8Internal::interfaceSubclassAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"interfaceProtocol", USBAlternateInterfaceV8Internal::interfaceProtocolAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"interfaceName", USBAlternateInterfaceV8Internal::interfaceNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"endpoints", USBAlternateInterfaceV8Internal::endpointsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8USBAlternateInterface::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("USBAlternateInterface"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    USBAlternateInterfaceV8Internal::constructor(info);
}

static void installV8USBAlternateInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8USBAlternateInterface::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8USBAlternateInterface::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8USBAlternateInterface::constructorCallback);
    interfaceTemplate->SetLength(2);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webUSBEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBAlternateInterfaceAccessors, WTF_ARRAY_LENGTH(V8USBAlternateInterfaceAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8USBAlternateInterface::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBAlternateInterfaceTemplate);
}

bool V8USBAlternateInterface::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USBAlternateInterface::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USBAlternateInterface* V8USBAlternateInterface::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
