// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8TextTrackCue.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TextTrack.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8TextTrackCue::wrapperTypeInfo = { gin::kEmbedderBlink, V8TextTrackCue::domTemplate, V8TextTrackCue::trace, V8TextTrackCue::traceWrappers, 0, V8TextTrackCue::visitDOMWrapper, V8TextTrackCue::preparePrototypeAndInterfaceObject, nullptr, "TextTrackCue", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextTrackCue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TextTrackCue::s_wrapperTypeInfo = V8TextTrackCue::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, TextTrackCue>::value,
    "TextTrackCue inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace TextTrackCueV8Internal {

static void trackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    TextTrack* cppValue(WTF::getPtr(impl->track()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "track"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void trackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::trackAttributeGetter(info);
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    v8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::idAttributeGetter(info);
}

static void idAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setId(cppValue);
}

static void idAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::idAttributeSetter(v8Value, info);
}

static void startTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    v8SetReturnValue(info, impl->startTime());
}

static void startTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::startTimeAttributeGetter(info);
}

static void startTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "startTime", "TextTrackCue", holder, info.GetIsolate());
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setStartTime(cppValue);
}

static void startTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::startTimeAttributeSetter(v8Value, info);
}

static void endTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    v8SetReturnValue(info, impl->endTime());
}

static void endTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::endTimeAttributeGetter(info);
}

static void endTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "endTime", "TextTrackCue", holder, info.GetIsolate());
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setEndTime(cppValue);
}

static void endTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::endTimeAttributeSetter(v8Value, info);
}

static void pauseOnExitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    v8SetReturnValueBool(info, impl->pauseOnExit());
}

static void pauseOnExitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::pauseOnExitAttributeGetter(info);
}

static void pauseOnExitAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "pauseOnExit", "TextTrackCue", holder, info.GetIsolate());
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPauseOnExit(cppValue);
}

static void pauseOnExitAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::pauseOnExitAttributeSetter(v8Value, info);
}

static void onenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onenter()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::onenterAttributeGetter(info);
}

static void onenterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onenter(), v8Value, V8TextTrackCue::eventListenerCacheIndex);
    impl->setOnenter(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onenterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::onenterAttributeSetter(v8Value, info);
}

static void onexitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onexit()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onexitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextTrackCueV8Internal::onexitAttributeGetter(info);
}

static void onexitAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextTrackCue* impl = V8TextTrackCue::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onexit(), v8Value, V8TextTrackCue::eventListenerCacheIndex);
    impl->setOnexit(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onexitAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TextTrackCueV8Internal::onexitAttributeSetter(v8Value, info);
}

} // namespace TextTrackCueV8Internal

void V8TextTrackCue::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    TextTrackCue* impl = scriptWrappable->toImpl<TextTrackCue>();
    // The owner() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->owner())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::AccessorConfiguration V8TextTrackCueAccessors[] = {
    {"track", TextTrackCueV8Internal::trackAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"id", TextTrackCueV8Internal::idAttributeGetterCallback, TextTrackCueV8Internal::idAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"startTime", TextTrackCueV8Internal::startTimeAttributeGetterCallback, TextTrackCueV8Internal::startTimeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"endTime", TextTrackCueV8Internal::endTimeAttributeGetterCallback, TextTrackCueV8Internal::endTimeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"pauseOnExit", TextTrackCueV8Internal::pauseOnExitAttributeGetterCallback, TextTrackCueV8Internal::pauseOnExitAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onenter", TextTrackCueV8Internal::onenterAttributeGetterCallback, TextTrackCueV8Internal::onenterAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onexit", TextTrackCueV8Internal::onexitAttributeGetterCallback, TextTrackCueV8Internal::onexitAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8TextTrackCueTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8TextTrackCue::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8TextTrackCue::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8TextTrackCueAccessors, WTF_ARRAY_LENGTH(V8TextTrackCueAccessors));
}

v8::Local<v8::FunctionTemplate> V8TextTrackCue::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TextTrackCueTemplate);
}

bool V8TextTrackCue::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TextTrackCue::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TextTrackCue* V8TextTrackCue::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
