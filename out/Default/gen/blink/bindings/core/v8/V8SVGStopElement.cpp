// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGStopElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedNumber.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
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
const WrapperTypeInfo V8SVGStopElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGStopElement::domTemplate, V8SVGStopElement::trace, V8SVGStopElement::traceWrappers, 0, 0, V8SVGStopElement::preparePrototypeAndInterfaceObject, nullptr, "SVGStopElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGStopElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGStopElement::s_wrapperTypeInfo = V8SVGStopElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGStopElement>::value,
    "SVGStopElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGStopElementV8Internal {

static void offsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStopElement* impl = V8SVGStopElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->offset()), impl);
}

static void offsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMPaintServer);
    SVGStopElementV8Internal::offsetAttributeGetter(info);
}

} // namespace SVGStopElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGStopElementAccessors[] = {
    {"offset", SVGStopElementV8Internal::offsetAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGStopElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGStopElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGStopElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGStopElementAccessors, WTF_ARRAY_LENGTH(V8SVGStopElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGStopElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGStopElementTemplate);
}

bool V8SVGStopElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGStopElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGStopElement* V8SVGStopElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
