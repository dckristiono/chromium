// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8IDBRequest.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DOMException.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8IDBTransaction.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8IDBRequest::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBRequest::domTemplate, V8IDBRequest::trace, V8IDBRequest::traceWrappers, V8IDBRequest::toActiveScriptWrappable, 0, V8IDBRequest::preparePrototypeAndInterfaceObject, nullptr, "IDBRequest", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBRequest::s_wrapperTypeInfo = V8IDBRequest::wrapperTypeInfo;

namespace IDBRequestV8Internal {

static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "result");
    if (!impl->isResultDirty()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName);
        if (!v8Value.IsEmpty() && !v8Value->IsUndefined()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    ExceptionState exceptionState(ExceptionState::GetterContext, "result", "IDBRequest", holder, info.GetIsolate());
    ScriptValue cppValue(impl->result(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8::Local<v8::Value> v8Value(cppValue.v8Value());
    V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::resultAttributeGetter(info);
}

static void errorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "error", "IDBRequest", holder, info.GetIsolate());
    DOMException* cppValue(impl->error(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "error"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void errorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::errorAttributeGetter(info);
}

static void sourceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    v8SetReturnValue(info, impl->source().v8Value());
}

static void sourceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::sourceAttributeGetter(info);
}

static void transactionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    IDBTransaction* cppValue(WTF::getPtr(impl->transaction()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "transaction"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void transactionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::transactionAttributeGetter(info);
}

static void readyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    v8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void readyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::readyStateAttributeGetter(info);
}

static void onsuccessAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onsuccess()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsuccessAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::onsuccessAttributeGetter(info);
}

static void onsuccessAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onsuccess(), v8Value, V8IDBRequest::eventListenerCacheIndex);
    impl->setOnsuccess(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onsuccessAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    IDBRequestV8Internal::onsuccessAttributeSetter(v8Value, info);
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onerror()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBRequestV8Internal::onerrorAttributeGetter(info);
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBRequest* impl = V8IDBRequest::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8IDBRequest::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    IDBRequestV8Internal::onerrorAttributeSetter(v8Value, info);
}

} // namespace IDBRequestV8Internal

const V8DOMConfiguration::AccessorConfiguration V8IDBRequestAccessors[] = {
    {"result", IDBRequestV8Internal::resultAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"error", IDBRequestV8Internal::errorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"source", IDBRequestV8Internal::sourceAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"transaction", IDBRequestV8Internal::transactionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"readyState", IDBRequestV8Internal::readyStateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onsuccess", IDBRequestV8Internal::onsuccessAttributeGetterCallback, IDBRequestV8Internal::onsuccessAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", IDBRequestV8Internal::onerrorAttributeGetterCallback, IDBRequestV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8IDBRequestTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8IDBRequest::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8IDBRequest::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBRequestAccessors, WTF_ARRAY_LENGTH(V8IDBRequestAccessors));
}

v8::Local<v8::FunctionTemplate> V8IDBRequest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBRequestTemplate);
}

bool V8IDBRequest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBRequest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBRequest* V8IDBRequest::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8IDBRequest::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink
