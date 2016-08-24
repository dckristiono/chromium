// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8AnimationTimeline.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Animation.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8AnimationTimeline::wrapperTypeInfo = { gin::kEmbedderBlink, V8AnimationTimeline::domTemplate, V8AnimationTimeline::trace, V8AnimationTimeline::traceWrappers, 0, 0, V8AnimationTimeline::preparePrototypeAndInterfaceObject, nullptr, "AnimationTimeline", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AnimationTimeline.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AnimationTimeline::s_wrapperTypeInfo = V8AnimationTimeline::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, AnimationTimeline>::value,
    "AnimationTimeline inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AnimationTimelineV8Internal {

static void currentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnimationTimeline* impl = V8AnimationTimeline::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->currentTime(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void currentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationTimelineV8Internal::currentTimeAttributeGetter(info);
}

static void currentTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "currentTime", "AnimationTimeline", holder, info.GetIsolate());
    AnimationTimeline* impl = V8AnimationTimeline::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setCurrentTime(cppValue);
}

static void currentTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    AnimationTimelineV8Internal::currentTimeAttributeSetter(v8Value, info);
}

static void getAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationTimeline* impl = V8AnimationTimeline::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getAnimations(), info.Holder(), info.GetIsolate()));
}

static void getAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationTimelineV8Internal::getAnimationsMethod(info);
}

} // namespace AnimationTimelineV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AnimationTimelineAccessors[] = {
    {"currentTime", AnimationTimelineV8Internal::currentTimeAttributeGetterCallback, AnimationTimelineV8Internal::currentTimeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8AnimationTimelineMethods[] = {
    {"getAnimations", AnimationTimelineV8Internal::getAnimationsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8AnimationTimelineTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AnimationTimeline::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8AnimationTimeline::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webAnimationsAPIEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AnimationTimelineAccessors, WTF_ARRAY_LENGTH(V8AnimationTimelineAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AnimationTimelineMethods, WTF_ARRAY_LENGTH(V8AnimationTimelineMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8AnimationTimeline::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AnimationTimelineTemplate);
}

bool V8AnimationTimeline::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AnimationTimeline::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AnimationTimeline* V8AnimationTimeline::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
