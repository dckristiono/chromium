// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8URLSearchParams.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/USVStringOrURLSearchParams.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Iterator.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8URLSearchParams.h"
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
const WrapperTypeInfo V8URLSearchParams::wrapperTypeInfo = { gin::kEmbedderBlink, V8URLSearchParams::domTemplate, V8URLSearchParams::trace, V8URLSearchParams::traceWrappers, 0, 0, V8URLSearchParams::preparePrototypeAndInterfaceObject, nullptr, "URLSearchParams", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in URLSearchParams.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& URLSearchParams::s_wrapperTypeInfo = V8URLSearchParams::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, URLSearchParams>::value,
    "URLSearchParams inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace URLSearchParamsV8Internal {

static void appendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "append", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    V8StringResource<> value;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        value = toUSVString(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->append(name, value);
}

static void appendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::appendMethod(info);
}

static void deleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "delete", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteAllWithName(name);
}

static void deleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::deleteMethod(info);
}

static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "get", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueStringOrNull(info, impl->get(name), info.GetIsolate());
}

static void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::getMethod(info);
}

static void getAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getAll", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValue(info, toV8(impl->getAll(name), info.Holder(), info.GetIsolate()));
}

static void getAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::getAllMethod(info);
}

static void hasMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "has", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueBool(info, impl->has(name));
}

static void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::hasMethod(info);
}

static void setMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "set", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    V8StringResource<> name;
    V8StringResource<> value;
    {
        name = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        value = toUSVString(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->set(name, value);
}

static void setMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::setMethod(info);
}

static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "keys", "URLSearchParams", info.Holder(), info.GetIsolate());
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    Iterator* result = impl->keysForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::keysMethod(info);
}

static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "values", "URLSearchParams", info.Holder(), info.GetIsolate());
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    Iterator* result = impl->valuesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::valuesMethod(info);
}

static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "entries", "URLSearchParams", info.Holder(), info.GetIsolate());
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    Iterator* result = impl->entriesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::entriesMethod(info);
}

static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "forEach", "URLSearchParams", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    ScriptValue callback;
    ScriptValue thisArg;
    {
        if (!info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        callback = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        thisArg = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    impl->forEachForBinding(scriptState, ScriptValue(scriptState, info.Holder()), callback, thisArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::forEachMethod(info);
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::toStringMethod(info);
}

static void iteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "iterator", "URLSearchParams", info.Holder(), info.GetIsolate());
    URLSearchParams* impl = V8URLSearchParams::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    Iterator* result = impl->iterator(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    URLSearchParamsV8Internal::iteratorMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "URLSearchParams", info.Holder(), info.GetIsolate());
    USVStringOrURLSearchParams init;
    {
        if (!info[0]->IsUndefined()) {
            V8USVStringOrURLSearchParams::toImpl(info.GetIsolate(), info[0], init, UnionTypeConversionMode::NotNullable, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            init.setUSVString(String(""));
        }
    }
    URLSearchParams* impl = URLSearchParams::create(init);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8URLSearchParams::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace URLSearchParamsV8Internal

const V8DOMConfiguration::MethodConfiguration V8URLSearchParamsMethods[] = {
    {"append", URLSearchParamsV8Internal::appendMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"delete", URLSearchParamsV8Internal::deleteMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"get", URLSearchParamsV8Internal::getMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getAll", URLSearchParamsV8Internal::getAllMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"has", URLSearchParamsV8Internal::hasMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"set", URLSearchParamsV8Internal::setMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"keys", URLSearchParamsV8Internal::keysMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"values", URLSearchParamsV8Internal::valuesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"entries", URLSearchParamsV8Internal::entriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"forEach", URLSearchParamsV8Internal::forEachMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"toString", URLSearchParamsV8Internal::toStringMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8URLSearchParams::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("URLSearchParams"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    URLSearchParamsV8Internal::constructor(info);
}

static void installV8URLSearchParamsTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8URLSearchParams::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8URLSearchParams::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8URLSearchParams::constructorCallback);
    interfaceTemplate->SetLength(0);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8URLSearchParamsMethods, WTF_ARRAY_LENGTH(V8URLSearchParamsMethods));

    // Iterator (@@iterator)
    const V8DOMConfiguration::SymbolKeyedMethodConfiguration symbolKeyedIteratorConfiguration = { v8::Symbol::GetIterator, URLSearchParamsV8Internal::iteratorMethodCallback, 0, v8::DontDelete, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype };
    V8DOMConfiguration::installMethod(isolate, world, prototypeTemplate, signature, symbolKeyedIteratorConfiguration);
}

v8::Local<v8::FunctionTemplate> V8URLSearchParams::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8URLSearchParamsTemplate);
}

bool V8URLSearchParams::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8URLSearchParams::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

URLSearchParams* V8URLSearchParams::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink