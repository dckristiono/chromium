// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8CSSStyleRule.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8CSSStyleDeclaration.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
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
const WrapperTypeInfo V8CSSStyleRule::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSStyleRule::domTemplate, V8CSSStyleRule::trace, V8CSSStyleRule::traceWrappers, 0, V8CSSStyleRule::visitDOMWrapper, V8CSSStyleRule::preparePrototypeAndInterfaceObject, nullptr, "CSSStyleRule", &V8CSSRule::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSStyleRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSStyleRule::s_wrapperTypeInfo = V8CSSStyleRule::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, CSSStyleRule>::value,
    "CSSStyleRule inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSStyleRuleV8Internal {

static void selectorTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleRule* impl = V8CSSStyleRule::toImpl(holder);
    v8SetReturnValueString(info, impl->selectorText(), info.GetIsolate());
}

static void selectorTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CSSStyleRuleV8Internal::selectorTextAttributeGetter(info);
}

static void selectorTextAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleRule* impl = V8CSSStyleRule::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setSelectorText(cppValue);
}

static void selectorTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CSSStyleRuleV8Internal::selectorTextAttributeSetter(v8Value, info);
}

static void styleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleRule* impl = V8CSSStyleRule::toImpl(holder);
    CSSStyleDeclaration* cppValue(WTF::getPtr(impl->style()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "style"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void styleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CSSStyleRuleV8Internal::styleAttributeGetter(info);
}

static void styleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "style", "CSSStyleRule", holder, info.GetIsolate());
    CSSStyleRule* proxyImpl = V8CSSStyleRule::toImpl(holder);
    CSSStyleDeclaration* impl = WTF::getPtr(proxyImpl->style());
    if (!impl)
        return;
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setCSSText(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void styleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CSSStyleRuleV8Internal::styleAttributeSetter(v8Value, info);
}

} // namespace CSSStyleRuleV8Internal

const V8DOMConfiguration::AccessorConfiguration V8CSSStyleRuleAccessors[] = {
    {"selectorText", CSSStyleRuleV8Internal::selectorTextAttributeGetterCallback, CSSStyleRuleV8Internal::selectorTextAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"style", CSSStyleRuleV8Internal::styleAttributeGetterCallback, CSSStyleRuleV8Internal::styleAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8CSSStyleRuleTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSStyleRule::wrapperTypeInfo.interfaceName, V8CSSRule::domTemplate(isolate, world), V8CSSStyleRule::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CSSStyleRuleAccessors, WTF_ARRAY_LENGTH(V8CSSStyleRuleAccessors));
}

v8::Local<v8::FunctionTemplate> V8CSSStyleRule::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSStyleRuleTemplate);
}

bool V8CSSStyleRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSStyleRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSStyleRule* V8CSSStyleRule::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
