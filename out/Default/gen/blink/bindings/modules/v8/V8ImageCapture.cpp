// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8ImageCapture.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaStreamTrack.h"
#include "bindings/modules/v8/V8PhotoSettings.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8ImageCapture::wrapperTypeInfo = { gin::kEmbedderBlink, V8ImageCapture::domTemplate, V8ImageCapture::trace, V8ImageCapture::traceWrappers, V8ImageCapture::toActiveScriptWrappable, 0, V8ImageCapture::preparePrototypeAndInterfaceObject, nullptr, "ImageCapture", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ImageCapture.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ImageCapture::s_wrapperTypeInfo = V8ImageCapture::wrapperTypeInfo;

namespace ImageCaptureV8Internal {

static void videoStreamTrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ImageCapture* impl = V8ImageCapture::toImpl(holder);
    MediaStreamTrack* cppValue(WTF::getPtr(impl->videoStreamTrack()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "videoStreamTrack"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void videoStreamTrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ImageCaptureV8Internal::videoStreamTrackAttributeGetter(info);
}

static void getPhotoCapabilitiesMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    ImageCapture* impl = V8ImageCapture::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->getPhotoCapabilities(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void getPhotoCapabilitiesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getPhotoCapabilities", "ImageCapture", info.Holder(), info.GetIsolate());
    getPhotoCapabilitiesMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void getPhotoCapabilitiesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ImageCaptureV8Internal::getPhotoCapabilitiesMethod(info);
}

static void setOptionsMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    ImageCapture* impl = V8ImageCapture::toImpl(info.Holder());
    PhotoSettings photoSettings;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('photoSettings') is not an object.");
            return;
        }
        V8PhotoSettings::toImpl(info.GetIsolate(), info[0], photoSettings, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->setOptions(scriptState, photoSettings, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void setOptionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setOptions", "ImageCapture", info.Holder(), info.GetIsolate());
    setOptionsMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void setOptionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ImageCaptureV8Internal::setOptionsMethod(info);
}

static void takePhotoMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    ImageCapture* impl = V8ImageCapture::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->takePhoto(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void takePhotoMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "takePhoto", "ImageCapture", info.Holder(), info.GetIsolate());
    takePhotoMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void takePhotoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ImageCaptureV8Internal::takePhotoMethod(info);
}

static void grabFrameMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    ImageCapture* impl = V8ImageCapture::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->grabFrame(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void grabFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "grabFrame", "ImageCapture", info.Holder(), info.GetIsolate());
    grabFrameMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void grabFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ImageCaptureV8Internal::grabFrameMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "ImageCapture", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MediaStreamTrack* track;
    {
        track = V8MediaStreamTrack::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!track) {
            exceptionState.throwTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    ImageCapture* impl = ImageCapture::create(executionContext, track, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8ImageCapture::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace ImageCaptureV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ImageCaptureAccessors[] = {
    {"videoStreamTrack", ImageCaptureV8Internal::videoStreamTrackAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8ImageCaptureMethods[] = {
    {"getPhotoCapabilities", ImageCaptureV8Internal::getPhotoCapabilitiesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setOptions", ImageCaptureV8Internal::setOptionsMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"takePhoto", ImageCaptureV8Internal::takePhotoMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"grabFrame", ImageCaptureV8Internal::grabFrameMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8ImageCapture::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("ImageCapture"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ImageCaptureV8Internal::constructor(info);
}

static void installV8ImageCaptureTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ImageCapture::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8ImageCapture::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8ImageCapture::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::imageCaptureEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ImageCaptureAccessors, WTF_ARRAY_LENGTH(V8ImageCaptureAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ImageCaptureMethods, WTF_ARRAY_LENGTH(V8ImageCaptureMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8ImageCapture::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ImageCaptureTemplate);
}

bool V8ImageCapture::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ImageCapture::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ImageCapture* V8ImageCapture::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8ImageCapture::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink
