// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8CSSNamespaceRule.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
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
const WrapperTypeInfo V8CSSNamespaceRule::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSNamespaceRule::domTemplate, V8CSSNamespaceRule::trace, V8CSSNamespaceRule::traceWrappers, 0, 0, V8CSSNamespaceRule::preparePrototypeAndInterfaceObject, nullptr, "CSSNamespaceRule", &V8CSSRule::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSNamespaceRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSNamespaceRule::s_wrapperTypeInfo = V8CSSNamespaceRule::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, CSSNamespaceRule>::value,
    "CSSNamespaceRule inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSNamespaceRuleV8Internal {

static void namespaceURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSNamespaceRule* impl = V8CSSNamespaceRule::toImpl(holder);
    v8SetReturnValueString(info, impl->namespaceURI(), info.GetIsolate());
}

static void namespaceURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CSSNamespaceRuleV8Internal::namespaceURIAttributeGetter(info);
}

static void prefixAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSNamespaceRule* impl = V8CSSNamespaceRule::toImpl(holder);
    v8SetReturnValueString(info, impl->prefix(), info.GetIsolate());
}

static void prefixAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CSSNamespaceRuleV8Internal::prefixAttributeGetter(info);
}

} // namespace CSSNamespaceRuleV8Internal

const V8DOMConfiguration::AccessorConfiguration V8CSSNamespaceRuleAccessors[] = {
    {"namespaceURI", CSSNamespaceRuleV8Internal::namespaceURIAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"prefix", CSSNamespaceRuleV8Internal::prefixAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8CSSNamespaceRuleTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSNamespaceRule::wrapperTypeInfo.interfaceName, V8CSSRule::domTemplate(isolate, world), V8CSSNamespaceRule::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CSSNamespaceRuleAccessors, WTF_ARRAY_LENGTH(V8CSSNamespaceRuleAccessors));
}

v8::Local<v8::FunctionTemplate> V8CSSNamespaceRule::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSNamespaceRuleTemplate);
}

bool V8CSSNamespaceRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSNamespaceRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSNamespaceRule* V8CSSNamespaceRule::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
