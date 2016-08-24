// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8XPathResult.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8XPathResult::wrapperTypeInfo = { gin::kEmbedderBlink, V8XPathResult::domTemplate, V8XPathResult::trace, V8XPathResult::traceWrappers, 0, 0, V8XPathResult::preparePrototypeAndInterfaceObject, nullptr, "XPathResult", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathResult.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& XPathResult::s_wrapperTypeInfo = V8XPathResult::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, XPathResult>::value,
    "XPathResult inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XPathResultV8Internal {

static void resultTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->resultType());
}

static void resultTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::resultTypeAttributeGetter(info);
}

static void numberValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "numberValue", "XPathResult", holder, info.GetIsolate());
    double cppValue(impl->numberValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValue(info, cppValue);
}

static void numberValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::numberValueAttributeGetter(info);
}

static void stringValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "stringValue", "XPathResult", holder, info.GetIsolate());
    String cppValue(impl->stringValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueString(info, cppValue, info.GetIsolate());
}

static void stringValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::stringValueAttributeGetter(info);
}

static void booleanValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "booleanValue", "XPathResult", holder, info.GetIsolate());
    bool cppValue(impl->booleanValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueBool(info, cppValue);
}

static void booleanValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::booleanValueAttributeGetter(info);
}

static void singleNodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "singleNodeValue", "XPathResult", holder, info.GetIsolate());
    Node* cppValue(impl->singleNodeValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueFast(info, cppValue, impl);
}

static void singleNodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::singleNodeValueAttributeGetter(info);
}

static void invalidIteratorStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    v8SetReturnValueBool(info, impl->invalidIteratorState());
}

static void invalidIteratorStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::invalidIteratorStateAttributeGetter(info);
}

static void snapshotLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "snapshotLength", "XPathResult", holder, info.GetIsolate());
    unsigned cppValue(impl->snapshotLength(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueUnsigned(info, cppValue);
}

static void snapshotLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::snapshotLengthAttributeGetter(info);
}

static void iterateNextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "iterateNext", "XPathResult", info.Holder(), info.GetIsolate());
    XPathResult* impl = V8XPathResult::toImpl(info.Holder());
    Node* result = impl->iterateNext(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void iterateNextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::iterateNextMethod(info);
}

static void snapshotItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "snapshotItem", "XPathResult", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    XPathResult* impl = V8XPathResult::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    Node* result = impl->snapshotItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void snapshotItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XPathResultV8Internal::snapshotItemMethod(info);
}

} // namespace XPathResultV8Internal

const V8DOMConfiguration::AccessorConfiguration V8XPathResultAccessors[] = {
    {"resultType", XPathResultV8Internal::resultTypeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberValue", XPathResultV8Internal::numberValueAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"stringValue", XPathResultV8Internal::stringValueAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"booleanValue", XPathResultV8Internal::booleanValueAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"singleNodeValue", XPathResultV8Internal::singleNodeValueAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"invalidIteratorState", XPathResultV8Internal::invalidIteratorStateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"snapshotLength", XPathResultV8Internal::snapshotLengthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8XPathResultMethods[] = {
    {"iterateNext", XPathResultV8Internal::iterateNextMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"snapshotItem", XPathResultV8Internal::snapshotItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8XPathResultTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XPathResult::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8XPathResult::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8XPathResultConstants[] = {
        {"ANY_TYPE", 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NUMBER_TYPE", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"STRING_TYPE", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"BOOLEAN_TYPE", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"UNORDERED_NODE_ITERATOR_TYPE", 4, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ORDERED_NODE_ITERATOR_TYPE", 5, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"UNORDERED_NODE_SNAPSHOT_TYPE", 6, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ORDERED_NODE_SNAPSHOT_TYPE", 7, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ANY_UNORDERED_NODE_TYPE", 8, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"FIRST_ORDERED_NODE_TYPE", 9, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8XPathResultConstants, WTF_ARRAY_LENGTH(V8XPathResultConstants));
    static_assert(0 == XPathResult::kAnyType, "the value of XPathResult_kAnyType does not match with implementation");
    static_assert(1 == XPathResult::kNumberType, "the value of XPathResult_kNumberType does not match with implementation");
    static_assert(2 == XPathResult::kStringType, "the value of XPathResult_kStringType does not match with implementation");
    static_assert(3 == XPathResult::kBooleanType, "the value of XPathResult_kBooleanType does not match with implementation");
    static_assert(4 == XPathResult::kUnorderedNodeIteratorType, "the value of XPathResult_kUnorderedNodeIteratorType does not match with implementation");
    static_assert(5 == XPathResult::kOrderedNodeIteratorType, "the value of XPathResult_kOrderedNodeIteratorType does not match with implementation");
    static_assert(6 == XPathResult::kUnorderedNodeSnapshotType, "the value of XPathResult_kUnorderedNodeSnapshotType does not match with implementation");
    static_assert(7 == XPathResult::kOrderedNodeSnapshotType, "the value of XPathResult_kOrderedNodeSnapshotType does not match with implementation");
    static_assert(8 == XPathResult::kAnyUnorderedNodeType, "the value of XPathResult_kAnyUnorderedNodeType does not match with implementation");
    static_assert(9 == XPathResult::kFirstOrderedNodeType, "the value of XPathResult_kFirstOrderedNodeType does not match with implementation");
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8XPathResultAccessors, WTF_ARRAY_LENGTH(V8XPathResultAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8XPathResultMethods, WTF_ARRAY_LENGTH(V8XPathResultMethods));
}

v8::Local<v8::FunctionTemplate> V8XPathResult::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XPathResultTemplate);
}

bool V8XPathResult::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XPathResult::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XPathResult* V8XPathResult::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
