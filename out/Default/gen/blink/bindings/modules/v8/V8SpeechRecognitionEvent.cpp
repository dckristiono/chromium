// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SpeechRecognitionEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8SpeechRecognitionEventInit.h"
#include "bindings/modules/v8/V8SpeechRecognitionResultList.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SpeechRecognitionEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8SpeechRecognitionEvent::domTemplate, V8SpeechRecognitionEvent::trace, V8SpeechRecognitionEvent::traceWrappers, 0, 0, V8SpeechRecognitionEvent::preparePrototypeAndInterfaceObject, nullptr, "SpeechRecognitionEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechRecognitionEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SpeechRecognitionEvent::s_wrapperTypeInfo = V8SpeechRecognitionEvent::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SpeechRecognitionEvent>::value,
    "SpeechRecognitionEvent inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SpeechRecognitionEventV8Internal {

static void resultIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechRecognitionEvent* impl = V8SpeechRecognitionEvent::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->resultIndex());
}

static void resultIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechRecognitionEventV8Internal::resultIndexAttributeGetter(info);
}

static void resultsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechRecognitionEvent* impl = V8SpeechRecognitionEvent::toImpl(holder);
    SpeechRecognitionResultList* cppValue(WTF::getPtr(impl->results()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "results"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void resultsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechRecognitionEventV8Internal::resultsAttributeGetter(info);
}

static void interpretationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechRecognitionEvent* impl = V8SpeechRecognitionEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->interpretation()), impl);
}

static void interpretationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechRecognitionEventV8Internal::interpretationAttributeGetter(info);
}

static void emmaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechRecognitionEvent* impl = V8SpeechRecognitionEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->emma()), impl);
}

static void emmaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechRecognitionEventV8Internal::emmaAttributeGetter(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "SpeechRecognitionEvent", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> type;
    SpeechRecognitionEventInit initDict;
    {
        type = info[0];
        if (!type.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('initDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8SpeechRecognitionEventInit::toImpl(info.GetIsolate(), info[1], initDict, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    SpeechRecognitionEvent* impl = SpeechRecognitionEvent::create(type, initDict);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8SpeechRecognitionEvent::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace SpeechRecognitionEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SpeechRecognitionEventAccessors[] = {
    {"resultIndex", SpeechRecognitionEventV8Internal::resultIndexAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"results", SpeechRecognitionEventV8Internal::resultsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"interpretation", SpeechRecognitionEventV8Internal::interpretationAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"emma", SpeechRecognitionEventV8Internal::emmaAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8SpeechRecognitionEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("SpeechRecognitionEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    SpeechRecognitionEventV8Internal::constructor(info);
}

static void installV8SpeechRecognitionEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SpeechRecognitionEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8SpeechRecognitionEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8SpeechRecognitionEvent::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SpeechRecognitionEventAccessors, WTF_ARRAY_LENGTH(V8SpeechRecognitionEventAccessors));
}

v8::Local<v8::FunctionTemplate> V8SpeechRecognitionEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechRecognitionEventTemplate);
}

bool V8SpeechRecognitionEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechRecognitionEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechRecognitionEvent* V8SpeechRecognitionEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink