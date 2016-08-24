// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGFEDropShadowElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8SVGFEDropShadowElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGFEDropShadowElement::domTemplate, V8SVGFEDropShadowElement::trace, V8SVGFEDropShadowElement::traceWrappers, 0, 0, V8SVGFEDropShadowElement::preparePrototypeAndInterfaceObject, nullptr, "SVGFEDropShadowElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFEDropShadowElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGFEDropShadowElement::s_wrapperTypeInfo = V8SVGFEDropShadowElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGFEDropShadowElement>::value,
    "SVGFEDropShadowElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGFEDropShadowElementV8Internal {

static void in1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->in1()), impl);
}

static void in1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::in1AttributeGetter(info);
}

static void dxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->dx()), impl);
}

static void dxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::dxAttributeGetter(info);
}

static void dyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->dy()), impl);
}

static void dyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::dyAttributeGetter(info);
}

static void stdDeviationXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->stdDeviationX()), impl);
}

static void stdDeviationXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::stdDeviationXAttributeGetter(info);
}

static void stdDeviationYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->stdDeviationY()), impl);
}

static void stdDeviationYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::stdDeviationYAttributeGetter(info);
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::xAttributeGetter(info);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::yAttributeGetter(info);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::widthAttributeGetter(info);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::heightAttributeGetter(info);
}

static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->result()), impl);
}

static void resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::resultAttributeGetter(info);
}

static void setStdDeviationMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setStdDeviation", "SVGFEDropShadowElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGFEDropShadowElement* impl = V8SVGFEDropShadowElement::toImpl(info.Holder());
    float stdDeviationX;
    float stdDeviationY;
    {
        stdDeviationX = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        stdDeviationY = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setStdDeviation(stdDeviationX, stdDeviationY);
}

static void setStdDeviationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
    SVGFEDropShadowElementV8Internal::setStdDeviationMethod(info);
}

} // namespace SVGFEDropShadowElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGFEDropShadowElementAccessors[] = {
    {"in1", SVGFEDropShadowElementV8Internal::in1AttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"dx", SVGFEDropShadowElementV8Internal::dxAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"dy", SVGFEDropShadowElementV8Internal::dyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"stdDeviationX", SVGFEDropShadowElementV8Internal::stdDeviationXAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"stdDeviationY", SVGFEDropShadowElementV8Internal::stdDeviationYAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"x", SVGFEDropShadowElementV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGFEDropShadowElementV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"width", SVGFEDropShadowElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"height", SVGFEDropShadowElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"result", SVGFEDropShadowElementV8Internal::resultAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8SVGFEDropShadowElementMethods[] = {
    {"setStdDeviation", SVGFEDropShadowElementV8Internal::setStdDeviationMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8SVGFEDropShadowElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGFEDropShadowElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGFEDropShadowElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGFEDropShadowElementAccessors, WTF_ARRAY_LENGTH(V8SVGFEDropShadowElementAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGFEDropShadowElementMethods, WTF_ARRAY_LENGTH(V8SVGFEDropShadowElementMethods));
}

v8::Local<v8::FunctionTemplate> V8SVGFEDropShadowElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFEDropShadowElementTemplate);
}

bool V8SVGFEDropShadowElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFEDropShadowElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFEDropShadowElement* V8SVGFEDropShadowElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink