// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGAnimatedLengthList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGLengthList.h"
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
const WrapperTypeInfo V8SVGAnimatedLengthList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGAnimatedLengthList::domTemplate, V8SVGAnimatedLengthList::trace, V8SVGAnimatedLengthList::traceWrappers, 0, V8SVGAnimatedLengthList::visitDOMWrapper, V8SVGAnimatedLengthList::preparePrototypeAndInterfaceObject, nullptr, "SVGAnimatedLengthList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAnimatedLengthList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGAnimatedLengthList::s_wrapperTypeInfo = V8SVGAnimatedLengthList::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGAnimatedLengthList>::value,
    "SVGAnimatedLengthList inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGAnimatedLengthListV8Internal {

static void baseValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedLengthList* impl = V8SVGAnimatedLengthList::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->baseVal()), impl);
}

static void baseValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimatedLengthListV8Internal::baseValAttributeGetter(info);
}

static void animValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedLengthList* impl = V8SVGAnimatedLengthList::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->animVal()), impl);
}

static void animValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimatedLengthListV8Internal::animValAttributeGetter(info);
}

} // namespace SVGAnimatedLengthListV8Internal

void V8SVGAnimatedLengthList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGAnimatedLengthList* impl = scriptWrappable->toImpl<SVGAnimatedLengthList>();
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, contextElement, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8SVGAnimatedLengthListAccessors[] = {
    {"baseVal", SVGAnimatedLengthListV8Internal::baseValAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"animVal", SVGAnimatedLengthListV8Internal::animValAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGAnimatedLengthListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGAnimatedLengthList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8SVGAnimatedLengthList::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGAnimatedLengthListAccessors, WTF_ARRAY_LENGTH(V8SVGAnimatedLengthListAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGAnimatedLengthList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAnimatedLengthListTemplate);
}

bool V8SVGAnimatedLengthList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAnimatedLengthList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAnimatedLengthList* V8SVGAnimatedLengthList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
