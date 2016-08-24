// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Navigator.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/events/NavigatorEvents.h"
#include "core/frame/Deprecation.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo V8Navigator::wrapperTypeInfo = { gin::kEmbedderBlink, V8Navigator::domTemplate, V8Navigator::trace, V8Navigator::traceWrappers, 0, 0, V8Navigator::preparePrototypeAndInterfaceObject, nullptr, "Navigator", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Navigator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Navigator::s_wrapperTypeInfo = V8Navigator::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, Navigator>::value,
    "Navigator inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace NavigatorV8Internal {

static void vendorSubAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->vendorSub(), info.GetIsolate());
}

static void vendorSubAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NavigatorVendorSub);
    NavigatorV8Internal::vendorSubAttributeGetter(info);
}

static void productSubAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->productSub(), info.GetIsolate());
}

static void productSubAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NavigatorProductSub);
    NavigatorV8Internal::productSubAttributeGetter(info);
}

static void vendorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->vendor(), info.GetIsolate());
}

static void vendorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NavigatorVendor);
    NavigatorV8Internal::vendorAttributeGetter(info);
}

static void maxTouchPointsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueInt(info, NavigatorEvents::maxTouchPoints(*impl));
}

static void maxTouchPointsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::maxTouchPointsAttributeGetter(info);
}

static void pointerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueBool(info, NavigatorEvents::pointerEnabled(*impl));
}

static void pointerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NavigatorPointerEnabled);
    NavigatorV8Internal::pointerEnabledAttributeGetter(info);
}

static void hardwareConcurrencyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->hardwareConcurrency());
}

static void hardwareConcurrencyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::hardwareConcurrencyAttributeGetter(info);
}

static void appCodeNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->appCodeName(), info.GetIsolate());
}

static void appCodeNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::appCodeNameAttributeGetter(info);
}

static void appNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->appName(), info.GetIsolate());
}

static void appNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::appNameAttributeGetter(info);
}

static void appVersionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->appVersion(), info.GetIsolate());
}

static void appVersionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::appVersionAttributeGetter(info);
}

static void platformAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->platform(), info.GetIsolate());
}

static void platformAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::platformAttributeGetter(info);
}

static void productAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->product(), info.GetIsolate());
}

static void productAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::productAttributeGetter(info);
}

static void userAgentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueString(info, impl->userAgent(), info.GetIsolate());
}

static void userAgentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::userAgentAttributeGetter(info);
}

static void languageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->language(), info.GetIsolate());
}

static void languageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::languageAttributeGetter(info);
}

static void languagesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "languages");
    if (!impl->hasLanguagesChanged()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName);
        if (!v8Value.IsEmpty() && !v8Value->IsUndefined()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    Vector<String> cppValue(impl->languages());
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void languagesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::languagesAttributeGetter(info);
}

static void onLineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueBool(info, impl->onLine());
}

static void onLineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::onLineAttributeGetter(info);
}

static void cookieEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Navigator* impl = V8Navigator::toImpl(holder);
    v8SetReturnValueBool(info, impl->cookieEnabled());
}

static void cookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NavigatorV8Internal::cookieEnabledAttributeGetter(info);
}

} // namespace NavigatorV8Internal

const V8DOMConfiguration::AccessorConfiguration V8NavigatorAccessors[] = {
    {"vendorSub", NavigatorV8Internal::vendorSubAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"productSub", NavigatorV8Internal::productSubAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vendor", NavigatorV8Internal::vendorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"maxTouchPoints", NavigatorV8Internal::maxTouchPointsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"hardwareConcurrency", NavigatorV8Internal::hardwareConcurrencyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"appCodeName", NavigatorV8Internal::appCodeNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"appName", NavigatorV8Internal::appNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"appVersion", NavigatorV8Internal::appVersionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"platform", NavigatorV8Internal::platformAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"product", NavigatorV8Internal::productAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"userAgent", NavigatorV8Internal::userAgentAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"language", NavigatorV8Internal::languageAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"languages", NavigatorV8Internal::languagesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onLine", NavigatorV8Internal::onLineAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cookieEnabled", NavigatorV8Internal::cookieEnabledAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8Navigator::installV8NavigatorTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Navigator::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Navigator::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8NavigatorAccessors, WTF_ARRAY_LENGTH(V8NavigatorAccessors));

    if (RuntimeEnabledFeatures::pointerEventEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorpointerEnabledConfiguration = \
        {"pointerEnabled", NavigatorV8Internal::pointerEnabledAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorpointerEnabledConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Navigator::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8Navigator::installV8NavigatorTemplateFunction);
}

bool V8Navigator::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Navigator::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Navigator* V8Navigator::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InstallTemplateFunction V8Navigator::installV8NavigatorTemplateFunction = (InstallTemplateFunction)&V8Navigator::installV8NavigatorTemplate;

void V8Navigator::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeAndInterfaceObjectFunction preparePrototypeAndInterfaceObjectFunction)
{
    V8Navigator::installV8NavigatorTemplateFunction = installTemplateFunction;
    if (preparePrototypeAndInterfaceObjectFunction)
        V8Navigator::wrapperTypeInfo.preparePrototypeAndInterfaceObjectFunction = preparePrototypeAndInterfaceObjectFunction;
}

} // namespace blink
