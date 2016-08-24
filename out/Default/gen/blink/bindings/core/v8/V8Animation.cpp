// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Animation.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8AnimationEffectReadOnly.h"
#include "bindings/core/v8/V8AnimationTimeline.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8Animation::wrapperTypeInfo = { gin::kEmbedderBlink, V8Animation::domTemplate, V8Animation::trace, V8Animation::traceWrappers, V8Animation::toActiveScriptWrappable, 0, V8Animation::preparePrototypeAndInterfaceObject, nullptr, "Animation", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Animation.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Animation::s_wrapperTypeInfo = V8Animation::wrapperTypeInfo;

namespace AnimationV8Internal {

static void effectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->effect()), impl);
}

static void effectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationV8Internal::effectAttributeGetter(info);
}

static void effectAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "effect", "Animation", holder, info.GetIsolate());
    Animation* impl = V8Animation::toImpl(holder);
    AnimationEffectReadOnly* cppValue = V8AnimationEffectReadOnly::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'AnimationEffectReadOnly'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setEffect(cppValue);
}

static void effectAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    AnimationV8Internal::effectAttributeSetter(v8Value, info);
}

static void timelineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    AnimationTimeline* cppValue(WTF::getPtr(impl->timeline()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "timeline"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void timelineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationV8Internal::timelineAttributeGetter(info);
}

static void startTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->startTime(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void startTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_StartTime_AttributeGetter);
    AnimationV8Internal::startTimeAttributeGetter(info);
}

static void startTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "startTime", "Animation", holder, info.GetIsolate());
    Animation* impl = V8Animation::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setStartTime(cppValue);
}

static void startTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_StartTime_AttributeSetter);
    AnimationV8Internal::startTimeAttributeSetter(v8Value, info);
}

static void currentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
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
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_CurrentTime_AttributeGetter);
    AnimationV8Internal::currentTimeAttributeGetter(info);
}

static void currentTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "currentTime", "Animation", holder, info.GetIsolate());
    Animation* impl = V8Animation::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setCurrentTime(cppValue);
}

static void currentTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_CurrentTime_AttributeSetter);
    AnimationV8Internal::currentTimeAttributeSetter(v8Value, info);
}

static void playbackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    v8SetReturnValue(info, impl->playbackRate());
}

static void playbackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_PlaybackRate_AttributeGetter);
    AnimationV8Internal::playbackRateAttributeGetter(info);
}

static void playbackRateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "playbackRate", "Animation", holder, info.GetIsolate());
    Animation* impl = V8Animation::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPlaybackRate(cppValue);
}

static void playbackRateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_PlaybackRate_AttributeSetter);
    AnimationV8Internal::playbackRateAttributeSetter(v8Value, info);
}

static void playStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    v8SetReturnValueString(info, impl->playState(), info.GetIsolate());
}

static void playStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_PlayState_AttributeGetter);
    AnimationV8Internal::playStateAttributeGetter(info);
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    v8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Id_AttributeGetter);
    AnimationV8Internal::idAttributeGetter(info);
}

static void idAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setId(cppValue);
}

static void idAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Id_AttributeSetter);
    AnimationV8Internal::idAttributeSetter(v8Value, info);
}

static void onfinishAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onfinish()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onfinishAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Onfinish_AttributeGetter);
    AnimationV8Internal::onfinishAttributeGetter(info);
}

static void onfinishAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onfinish(), v8Value, V8Animation::eventListenerCacheIndex);
    impl->setOnfinish(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onfinishAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Onfinish_AttributeSetter);
    AnimationV8Internal::onfinishAttributeSetter(v8Value, info);
}

static void oncancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->oncancel()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Oncancel_AttributeGetter);
    AnimationV8Internal::oncancelAttributeGetter(info);
}

static void oncancelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->oncancel(), v8Value, V8Animation::eventListenerCacheIndex);
    impl->setOncancel(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncancelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Oncancel_AttributeSetter);
    AnimationV8Internal::oncancelAttributeSetter(v8Value, info);
}

static void finishedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    v8SetReturnValue(info, impl->finished(scriptState).v8Value());
}

static void finishedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationV8Internal::finishedAttributeGetter(info);
}

static void readyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Animation* impl = V8Animation::toImpl(holder);
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    v8SetReturnValue(info, impl->ready(scriptState).v8Value());
}

static void readyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AnimationV8Internal::readyAttributeGetter(info);
}

static void finishMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "finish", "Animation", info.Holder(), info.GetIsolate());
    Animation* impl = V8Animation::toImpl(info.Holder());
    impl->finish(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void finishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Finish_Method);
    AnimationV8Internal::finishMethod(info);
}

static void playMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "play", "Animation", info.Holder(), info.GetIsolate());
    Animation* impl = V8Animation::toImpl(info.Holder());
    impl->play(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void playMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Play_Method);
    AnimationV8Internal::playMethod(info);
}

static void pauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "pause", "Animation", info.Holder(), info.GetIsolate());
    Animation* impl = V8Animation::toImpl(info.Holder());
    impl->pause(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void pauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Pause_Method);
    AnimationV8Internal::pauseMethod(info);
}

static void reverseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "reverse", "Animation", info.Holder(), info.GetIsolate());
    Animation* impl = V8Animation::toImpl(info.Holder());
    impl->reverse(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void reverseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Reverse_Method);
    AnimationV8Internal::reverseMethod(info);
}

static void cancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Animation* impl = V8Animation::toImpl(info.Holder());
    impl->cancel();
}

static void cancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Animation_Cancel_Method);
    AnimationV8Internal::cancelMethod(info);
}

} // namespace AnimationV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AnimationAccessors[] = {
    {"startTime", AnimationV8Internal::startTimeAttributeGetterCallback, AnimationV8Internal::startTimeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"currentTime", AnimationV8Internal::currentTimeAttributeGetterCallback, AnimationV8Internal::currentTimeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"playbackRate", AnimationV8Internal::playbackRateAttributeGetterCallback, AnimationV8Internal::playbackRateAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"playState", AnimationV8Internal::playStateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"id", AnimationV8Internal::idAttributeGetterCallback, AnimationV8Internal::idAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onfinish", AnimationV8Internal::onfinishAttributeGetterCallback, AnimationV8Internal::onfinishAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"oncancel", AnimationV8Internal::oncancelAttributeGetterCallback, AnimationV8Internal::oncancelAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8AnimationMethods[] = {
    {"finish", AnimationV8Internal::finishMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"play", AnimationV8Internal::playMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"pause", AnimationV8Internal::pauseMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"reverse", AnimationV8Internal::reverseMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"cancel", AnimationV8Internal::cancelMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8AnimationTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Animation::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8Animation::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AnimationAccessors, WTF_ARRAY_LENGTH(V8AnimationAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AnimationMethods, WTF_ARRAY_LENGTH(V8AnimationMethods));

    if (RuntimeEnabledFeatures::webAnimationsAPIEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorfinishedConfiguration = \
        {"finished", AnimationV8Internal::finishedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorfinishedConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessorreadyConfiguration = \
        {"ready", AnimationV8Internal::readyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorreadyConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessortimelineConfiguration = \
        {"timeline", AnimationV8Internal::timelineAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessortimelineConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessoreffectConfiguration = \
        {"effect", AnimationV8Internal::effectAttributeGetterCallback, AnimationV8Internal::effectAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoreffectConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Animation::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AnimationTemplate);
}

bool V8Animation::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Animation::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Animation* V8Animation::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8Animation::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink