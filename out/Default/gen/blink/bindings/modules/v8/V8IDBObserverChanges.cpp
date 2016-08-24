// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8IDBObserverChanges.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8IDBDatabase.h"
#include "bindings/modules/v8/V8IDBTransaction.h"
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
const WrapperTypeInfo V8IDBObserverChanges::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBObserverChanges::domTemplate, V8IDBObserverChanges::trace, V8IDBObserverChanges::traceWrappers, 0, 0, V8IDBObserverChanges::preparePrototypeAndInterfaceObject, nullptr, "IDBObserverChanges", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBObserverChanges.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBObserverChanges::s_wrapperTypeInfo = V8IDBObserverChanges::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, IDBObserverChanges>::value,
    "IDBObserverChanges inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace IDBObserverChangesV8Internal {

static void databaseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBObserverChanges* impl = V8IDBObserverChanges::toImpl(holder);
    IDBDatabase* cppValue(WTF::getPtr(impl->database()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "database"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void databaseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBObserverChangesV8Internal::databaseAttributeGetter(info);
}

static void transactionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBObserverChanges* impl = V8IDBObserverChanges::toImpl(holder);
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
    IDBObserverChangesV8Internal::transactionAttributeGetter(info);
}

static void recordsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBObserverChanges* impl = V8IDBObserverChanges::toImpl(holder);
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    v8SetReturnValue(info, impl->records(scriptState).v8Value());
}

static void recordsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBObserverChangesV8Internal::recordsAttributeGetter(info);
}

} // namespace IDBObserverChangesV8Internal

const V8DOMConfiguration::AccessorConfiguration V8IDBObserverChangesAccessors[] = {
    {"database", IDBObserverChangesV8Internal::databaseAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"transaction", IDBObserverChangesV8Internal::transactionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"records", IDBObserverChangesV8Internal::recordsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8IDBObserverChangesTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8IDBObserverChanges::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8IDBObserverChanges::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::iDBObserverEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBObserverChangesAccessors, WTF_ARRAY_LENGTH(V8IDBObserverChangesAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8IDBObserverChanges::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBObserverChangesTemplate);
}

bool V8IDBObserverChanges::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBObserverChanges::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBObserverChanges* V8IDBObserverChanges::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink