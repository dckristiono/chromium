// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGMaskElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGStringList.h"
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
const WrapperTypeInfo V8SVGMaskElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGMaskElement::domTemplate, V8SVGMaskElement::trace, V8SVGMaskElement::traceWrappers, 0, 0, V8SVGMaskElement::preparePrototypeAndInterfaceObject, nullptr, "SVGMaskElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGMaskElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGMaskElement::s_wrapperTypeInfo = V8SVGMaskElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGMaskElement>::value,
    "SVGMaskElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGMaskElementV8Internal {

static void maskUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->maskUnits()), impl);
}

static void maskUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::maskUnitsAttributeGetter(info);
}

static void maskContentUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->maskContentUnits()), impl);
}

static void maskContentUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::maskContentUnitsAttributeGetter(info);
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::xAttributeGetter(info);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::yAttributeGetter(info);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::widthAttributeGetter(info);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMMaskElement);
    SVGMaskElementV8Internal::heightAttributeGetter(info);
}

static void requiredFeaturesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredFeatures()), impl);
}

static void requiredFeaturesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMSVGTests);
    SVGMaskElementV8Internal::requiredFeaturesAttributeGetter(info);
}

static void requiredExtensionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredExtensions()), impl);
}

static void requiredExtensionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMSVGTests);
    SVGMaskElementV8Internal::requiredExtensionsAttributeGetter(info);
}

static void systemLanguageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGMaskElement* impl = V8SVGMaskElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->systemLanguage()), impl);
}

static void systemLanguageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMSVGTests);
    SVGMaskElementV8Internal::systemLanguageAttributeGetter(info);
}

} // namespace SVGMaskElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGMaskElementAccessors[] = {
    {"maskUnits", SVGMaskElementV8Internal::maskUnitsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"maskContentUnits", SVGMaskElementV8Internal::maskContentUnitsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"x", SVGMaskElementV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGMaskElementV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"width", SVGMaskElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"height", SVGMaskElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"requiredFeatures", SVGMaskElementV8Internal::requiredFeaturesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"requiredExtensions", SVGMaskElementV8Internal::requiredExtensionsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"systemLanguage", SVGMaskElementV8Internal::systemLanguageAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGMaskElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGMaskElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGMaskElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGMaskElementAccessors, WTF_ARRAY_LENGTH(V8SVGMaskElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGMaskElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGMaskElementTemplate);
}

bool V8SVGMaskElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGMaskElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGMaskElement* V8SVGMaskElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
