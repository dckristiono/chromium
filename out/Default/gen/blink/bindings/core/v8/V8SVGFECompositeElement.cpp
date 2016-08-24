// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGFECompositeElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGAnimatedNumber.h"
#include "bindings/core/v8/V8SVGAnimatedString.h"
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
const WrapperTypeInfo V8SVGFECompositeElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGFECompositeElement::domTemplate, V8SVGFECompositeElement::trace, V8SVGFECompositeElement::traceWrappers, 0, 0, V8SVGFECompositeElement::preparePrototypeAndInterfaceObject, nullptr, "SVGFECompositeElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFECompositeElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGFECompositeElement::s_wrapperTypeInfo = V8SVGFECompositeElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGFECompositeElement>::value,
    "SVGFECompositeElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGFECompositeElementV8Internal {

static void SVG_FECOMPOSITE_OPERATOR_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 0);
}

static void SVG_FECOMPOSITE_OPERATOR_OVERConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 1);
}

static void SVG_FECOMPOSITE_OPERATOR_INConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 2);
}

static void SVG_FECOMPOSITE_OPERATOR_OUTConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 3);
}

static void SVG_FECOMPOSITE_OPERATOR_ATOPConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 4);
}

static void SVG_FECOMPOSITE_OPERATOR_XORConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 5);
}

static void SVG_FECOMPOSITE_OPERATOR_ARITHMETICConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    v8SetReturnValueInt(info, 6);
}

static void in2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->in2()), impl);
}

static void in2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::in2AttributeGetter(info);
}

static void in1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->in1()), impl);
}

static void in1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::in1AttributeGetter(info);
}

static void operatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->svgOperator()), impl);
}

static void operatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::operatorAttributeGetter(info);
}

static void k1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->k1()), impl);
}

static void k1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::k1AttributeGetter(info);
}

static void k2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->k2()), impl);
}

static void k2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::k2AttributeGetter(info);
}

static void k3AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->k3()), impl);
}

static void k3AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::k3AttributeGetter(info);
}

static void k4AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->k4()), impl);
}

static void k4AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::k4AttributeGetter(info);
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::xAttributeGetter(info);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::yAttributeGetter(info);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::widthAttributeGetter(info);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::heightAttributeGetter(info);
}

static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFECompositeElement* impl = V8SVGFECompositeElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->result()), impl);
}

static void resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFECompositeElementV8Internal::resultAttributeGetter(info);
}

} // namespace SVGFECompositeElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGFECompositeElementAccessors[] = {
    {"in2", SVGFECompositeElementV8Internal::in2AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"in1", SVGFECompositeElementV8Internal::in1AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"operator", SVGFECompositeElementV8Internal::operatorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"k1", SVGFECompositeElementV8Internal::k1AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"k2", SVGFECompositeElementV8Internal::k2AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"k3", SVGFECompositeElementV8Internal::k3AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"k4", SVGFECompositeElementV8Internal::k4AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"x", SVGFECompositeElementV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGFECompositeElementV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"width", SVGFECompositeElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"height", SVGFECompositeElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"result", SVGFECompositeElementV8Internal::resultAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGFECompositeElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGFECompositeElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGFECompositeElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_UNKNOWN", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_UNKNOWNConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_OVER", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_OVERConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_IN", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_INConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_OUT", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_OUTConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_ATOP", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_ATOPConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_XOR", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_XORConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_FECOMPOSITE_OPERATOR_ARITHMETIC", SVGFECompositeElementV8Internal::SVG_FECOMPOSITE_OPERATOR_ARITHMETICConstantGetterCallback);
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGFECompositeElementAccessors, WTF_ARRAY_LENGTH(V8SVGFECompositeElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGFECompositeElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFECompositeElementTemplate);
}

bool V8SVGFECompositeElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFECompositeElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFECompositeElement* V8SVGFECompositeElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
