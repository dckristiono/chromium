// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGStyleElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8StyleSheet.h"
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
const WrapperTypeInfo V8SVGStyleElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGStyleElement::domTemplate, V8SVGStyleElement::trace, V8SVGStyleElement::traceWrappers, 0, 0, V8SVGStyleElement::preparePrototypeAndInterfaceObject, nullptr, "SVGStyleElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGStyleElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGStyleElement::s_wrapperTypeInfo = V8SVGStyleElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGStyleElement>::value,
    "SVGStyleElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGStyleElementV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGStyleElementV8Internal::typeAttributeGetter(info);
}

static void typeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setType(cppValue);
}

static void typeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGStyleElementV8Internal::typeAttributeSetter(v8Value, info);
}

static void mediaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    v8SetReturnValueString(info, impl->media(), info.GetIsolate());
}

static void mediaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGStyleElementV8Internal::mediaAttributeGetter(info);
}

static void mediaAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setMedia(cppValue);
}

static void mediaAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGStyleElementV8Internal::mediaAttributeSetter(v8Value, info);
}

static void titleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    v8SetReturnValueString(info, impl->title(), info.GetIsolate());
}

static void titleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVGStyleElementTitle);
    SVGStyleElementV8Internal::titleAttributeGetter(info);
}

static void titleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setTitle(cppValue);
}

static void titleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::SVGStyleElementTitle);
    SVGStyleElementV8Internal::titleAttributeSetter(v8Value, info);
}

static void sheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->sheet()), impl);
}

static void sheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGStyleElementV8Internal::sheetAttributeGetter(info);
}

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->disabled());
}

static void disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8SVGStyleElement_Disabled_AttributeGetter);
    SVGStyleElementV8Internal::disabledAttributeGetter(info);
}

static void disabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "disabled", "SVGStyleElement", holder, info.GetIsolate());
    SVGStyleElement* impl = V8SVGStyleElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setDisabled(cppValue);
}

static void disabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8SVGStyleElement_Disabled_AttributeSetter);
    SVGStyleElementV8Internal::disabledAttributeSetter(v8Value, info);
}

} // namespace SVGStyleElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGStyleElementAccessors[] = {
    {"type", SVGStyleElementV8Internal::typeAttributeGetterCallback, SVGStyleElementV8Internal::typeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"media", SVGStyleElementV8Internal::mediaAttributeGetterCallback, SVGStyleElementV8Internal::mediaAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"title", SVGStyleElementV8Internal::titleAttributeGetterCallback, SVGStyleElementV8Internal::titleAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"sheet", SVGStyleElementV8Internal::sheetAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"disabled", SVGStyleElementV8Internal::disabledAttributeGetterCallback, SVGStyleElementV8Internal::disabledAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGStyleElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGStyleElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGStyleElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGStyleElementAccessors, WTF_ARRAY_LENGTH(V8SVGStyleElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGStyleElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGStyleElementTemplate);
}

bool V8SVGStyleElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGStyleElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGStyleElement* V8SVGStyleElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
