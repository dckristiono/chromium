// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLHRElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLHRElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLHRElement::domTemplate, V8HTMLHRElement::trace, V8HTMLHRElement::traceWrappers, 0, 0, V8HTMLHRElement::preparePrototypeAndInterfaceObject, nullptr, "HTMLHRElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLHRElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLHRElement::s_wrapperTypeInfo = V8HTMLHRElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLHRElement>::value,
    "HTMLHRElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLHRElementV8Internal {

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLHRElementV8Internal::alignAttributeGetter(info);
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::alignAttr, cppValue);
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLHRElementV8Internal::alignAttributeSetter(v8Value, info);
}

static void colorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::colorAttr), info.GetIsolate());
}

static void colorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLHRElementV8Internal::colorAttributeGetter(info);
}

static void colorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::colorAttr, cppValue);
}

static void colorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLHRElementV8Internal::colorAttributeSetter(v8Value, info);
}

static void noShadeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::noshadeAttr));
}

static void noShadeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLHRElementV8Internal::noShadeAttributeGetter(info);
}

static void noShadeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "noShade", "HTMLHRElement", holder, info.GetIsolate());
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::noshadeAttr, cppValue);
}

static void noShadeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLHRElementV8Internal::noShadeAttributeSetter(v8Value, info);
}

static void sizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::sizeAttr), info.GetIsolate());
}

static void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLHRElementV8Internal::sizeAttributeGetter(info);
}

static void sizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::sizeAttr, cppValue);
}

static void sizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLHRElementV8Internal::sizeAttributeSetter(v8Value, info);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLHRElementV8Internal::widthAttributeGetter(info);
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLHRElement* impl = V8HTMLHRElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::widthAttr, cppValue);
}

static void widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLHRElementV8Internal::widthAttributeSetter(v8Value, info);
}

} // namespace HTMLHRElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLHRElementAccessors[] = {
    {"align", HTMLHRElementV8Internal::alignAttributeGetterCallback, HTMLHRElementV8Internal::alignAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"color", HTMLHRElementV8Internal::colorAttributeGetterCallback, HTMLHRElementV8Internal::colorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"noShade", HTMLHRElementV8Internal::noShadeAttributeGetterCallback, HTMLHRElementV8Internal::noShadeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"size", HTMLHRElementV8Internal::sizeAttributeGetterCallback, HTMLHRElementV8Internal::sizeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"width", HTMLHRElementV8Internal::widthAttributeGetterCallback, HTMLHRElementV8Internal::widthAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8HTMLHRElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLHRElement::wrapperTypeInfo.interfaceName, V8HTMLElement::domTemplate(isolate, world), V8HTMLHRElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLHRElementAccessors, WTF_ARRAY_LENGTH(V8HTMLHRElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8HTMLHRElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLHRElementTemplate);
}

bool V8HTMLHRElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLHRElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLHRElement* V8HTMLHRElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink