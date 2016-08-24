// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8FederatedCredential.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8FederatedCredentialData.h"
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
const WrapperTypeInfo V8FederatedCredential::wrapperTypeInfo = { gin::kEmbedderBlink, V8FederatedCredential::domTemplate, V8FederatedCredential::trace, V8FederatedCredential::traceWrappers, 0, 0, V8FederatedCredential::preparePrototypeAndInterfaceObject, nullptr, "FederatedCredential", &V8SiteBoundCredential::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FederatedCredential.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FederatedCredential::s_wrapperTypeInfo = V8FederatedCredential::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, FederatedCredential>::value,
    "FederatedCredential inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace FederatedCredentialV8Internal {

static void providerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FederatedCredential* impl = V8FederatedCredential::toImpl(holder);
    v8SetReturnValueString(info, impl->provider(), info.GetIsolate());
}

static void providerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    FederatedCredentialV8Internal::providerAttributeGetter(info);
}

static void protocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FederatedCredential* impl = V8FederatedCredential::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->protocol(), info.GetIsolate());
}

static void protocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    FederatedCredentialV8Internal::protocolAttributeGetter(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "FederatedCredential", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    FederatedCredentialData data;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('data') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8FederatedCredentialData::toImpl(info.GetIsolate(), info[0], data, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    FederatedCredential* impl = FederatedCredential::create(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8FederatedCredential::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace FederatedCredentialV8Internal

const V8DOMConfiguration::AccessorConfiguration V8FederatedCredentialAccessors[] = {
    {"provider", FederatedCredentialV8Internal::providerAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"protocol", FederatedCredentialV8Internal::protocolAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8FederatedCredential::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("FederatedCredential"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    FederatedCredentialV8Internal::constructor(info);
}

static void installV8FederatedCredentialTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8FederatedCredential::wrapperTypeInfo.interfaceName, V8SiteBoundCredential::domTemplate(isolate, world), V8FederatedCredential::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8FederatedCredential::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::credentialManagerEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8FederatedCredentialAccessors, WTF_ARRAY_LENGTH(V8FederatedCredentialAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8FederatedCredential::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FederatedCredentialTemplate);
}

bool V8FederatedCredential::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FederatedCredential::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FederatedCredential* V8FederatedCredential::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
