// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8DOMPointReadOnly.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8DOMPointReadOnly::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMPointReadOnly::domTemplate, V8DOMPointReadOnly::trace, V8DOMPointReadOnly::traceWrappers, 0, 0, V8DOMPointReadOnly::preparePrototypeAndInterfaceObject, nullptr, "DOMPointReadOnly", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMPointReadOnly.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMPointReadOnly::s_wrapperTypeInfo = V8DOMPointReadOnly::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, DOMPointReadOnly>::value,
    "DOMPointReadOnly inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMPointReadOnlyV8Internal {

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMPointReadOnly* impl = V8DOMPointReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->x());
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMPointReadOnlyV8Internal::xAttributeGetter(info);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMPointReadOnly* impl = V8DOMPointReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMPointReadOnlyV8Internal::yAttributeGetter(info);
}

static void zAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMPointReadOnly* impl = V8DOMPointReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->z());
}

static void zAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMPointReadOnlyV8Internal::zAttributeGetter(info);
}

static void wAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMPointReadOnly* impl = V8DOMPointReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->w());
}

static void wAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMPointReadOnlyV8Internal::wAttributeGetter(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "DOMPointReadOnly", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 4)) {
        setMinimumArityTypeError(exceptionState, 4, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    double x;
    double y;
    double z;
    double w;
    {
        x = toDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        y = toDouble(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        z = toDouble(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        w = toDouble(info.GetIsolate(), info[3], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    DOMPointReadOnly* impl = DOMPointReadOnly::create(x, y, z, w);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8DOMPointReadOnly::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace DOMPointReadOnlyV8Internal

const V8DOMConfiguration::AccessorConfiguration V8DOMPointReadOnlyAccessors[] = {
    {"x", DOMPointReadOnlyV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", DOMPointReadOnlyV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"z", DOMPointReadOnlyV8Internal::zAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"w", DOMPointReadOnlyV8Internal::wAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8DOMPointReadOnly::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("DOMPointReadOnly"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    DOMPointReadOnlyV8Internal::constructor(info);
}

static void installV8DOMPointReadOnlyTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMPointReadOnly::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DOMPointReadOnly::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8DOMPointReadOnly::constructorCallback);
    interfaceTemplate->SetLength(4);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::geometryInterfacesEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMPointReadOnlyAccessors, WTF_ARRAY_LENGTH(V8DOMPointReadOnlyAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8DOMPointReadOnly::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMPointReadOnlyTemplate);
}

bool V8DOMPointReadOnly::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMPointReadOnly::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMPointReadOnly* V8DOMPointReadOnly::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
