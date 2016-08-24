// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8NamedNodeMap.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Attr.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/frame/UseCounter.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8NamedNodeMap::wrapperTypeInfo = { gin::kEmbedderBlink, V8NamedNodeMap::domTemplate, V8NamedNodeMap::trace, V8NamedNodeMap::traceWrappers, 0, V8NamedNodeMap::visitDOMWrapper, V8NamedNodeMap::preparePrototypeAndInterfaceObject, nullptr, "NamedNodeMap", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in NamedNodeMap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& NamedNodeMap::s_wrapperTypeInfo = V8NamedNodeMap::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, NamedNodeMap>::value,
    "NamedNodeMap inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace NamedNodeMapV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NamedNodeMapV8Internal::lengthAttributeGetter(info);
}

static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "item", "NamedNodeMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValue(info, impl->item(index));
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapItem);
    NamedNodeMapV8Internal::itemMethod(info);
}

static void getNamedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getNamedItem", "NamedNodeMap", 1, info.Length()));
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    v8SetReturnValue(info, impl->getNamedItem(name));
}

static void getNamedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapGetNamedItem);
    NamedNodeMapV8Internal::getNamedItemMethod(info);
}

static void getNamedItemNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getNamedItemNS", "NamedNodeMap", 2, info.Length()));
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V8StringResource<TreatNullAndUndefinedAsNullString> namespaceURI;
    V8StringResource<> localName;
    {
        namespaceURI = info[0];
        if (!namespaceURI.prepare())
            return;
        localName = info[1];
        if (!localName.prepare())
            return;
    }
    v8SetReturnValue(info, impl->getNamedItemNS(namespaceURI, localName));
}

static void getNamedItemNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapGetNamedItemNS);
    NamedNodeMapV8Internal::getNamedItemNSMethod(info);
}

static void setNamedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setNamedItem", "NamedNodeMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Attr* attr;
    {
        attr = V8Attr::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!attr) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Attr'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    Attr* result = impl->setNamedItem(attr, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void setNamedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapSetNamedItem);
    CEReactionsScope ceReactionsScope;
    NamedNodeMapV8Internal::setNamedItemMethod(info);
}

static void setNamedItemNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setNamedItemNS", "NamedNodeMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Attr* attr;
    {
        attr = V8Attr::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!attr) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Attr'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    Attr* result = impl->setNamedItemNS(attr, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void setNamedItemNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapSetNamedItemNS);
    CEReactionsScope ceReactionsScope;
    NamedNodeMapV8Internal::setNamedItemNSMethod(info);
}

static void removeNamedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeNamedItem", "NamedNodeMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    Attr* result = impl->removeNamedItem(name, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void removeNamedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapRemoveNamedItem);
    CEReactionsScope ceReactionsScope;
    NamedNodeMapV8Internal::removeNamedItemMethod(info);
}

static void removeNamedItemNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeNamedItemNS", "NamedNodeMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    V8StringResource<TreatNullAndUndefinedAsNullString> namespaceURI;
    V8StringResource<> localName;
    {
        namespaceURI = info[0];
        if (!namespaceURI.prepare())
            return;
        localName = info[1];
        if (!localName.prepare())
            return;
    }
    Attr* result = impl->removeNamedItemNS(namespaceURI, localName, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void removeNamedItemNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NamedNodeMapRemoveNamedItemNS);
    CEReactionsScope ceReactionsScope;
    NamedNodeMapV8Internal::removeNamedItemNSMethod(info);
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    Attr* result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, result, impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    NamedNodeMapV8Internal::indexedPropertyGetter(index, info);
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    NamedNodeMap* impl = V8NamedNodeMap::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    Attr* result = impl->getNamedItem(propertyName);
    if (!result)
        return;
    v8SetReturnValueFast(info, result, impl);
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    if (!name->IsString())
        return;
    NamedNodeMapV8Internal::namedPropertyGetter(name, info);
}

} // namespace NamedNodeMapV8Internal

void V8NamedNodeMap::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    NamedNodeMap* impl = scriptWrappable->toImpl<NamedNodeMap>();
    // The element() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->element())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::AccessorConfiguration V8NamedNodeMapAccessors[] = {
    {"length", NamedNodeMapV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8NamedNodeMapMethods[] = {
    {"item", NamedNodeMapV8Internal::itemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getNamedItem", NamedNodeMapV8Internal::getNamedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getNamedItemNS", NamedNodeMapV8Internal::getNamedItemNSMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setNamedItem", NamedNodeMapV8Internal::setNamedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setNamedItemNS", NamedNodeMapV8Internal::setNamedItemNSMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"removeNamedItem", NamedNodeMapV8Internal::removeNamedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"removeNamedItemNS", NamedNodeMapV8Internal::removeNamedItemNSMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8NamedNodeMapTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8NamedNodeMap::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8NamedNodeMap::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8NamedNodeMapAccessors, WTF_ARRAY_LENGTH(V8NamedNodeMapAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8NamedNodeMapMethods, WTF_ARRAY_LENGTH(V8NamedNodeMapMethods));

    // Array iterator
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(NamedNodeMapV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<NamedNodeMap>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
    // Named properties
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(NamedNodeMapV8Internal::namedPropertyGetterCallback, 0, 0, 0, 0, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);
}

v8::Local<v8::FunctionTemplate> V8NamedNodeMap::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8NamedNodeMapTemplate);
}

bool V8NamedNodeMap::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8NamedNodeMap::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

NamedNodeMap* V8NamedNodeMap::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
