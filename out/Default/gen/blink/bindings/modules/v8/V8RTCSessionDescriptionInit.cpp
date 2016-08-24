// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8RTCSessionDescriptionInit.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8RTCSessionDescriptionInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCSessionDescriptionInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> sdpValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sdp")).ToLocal(&sdpValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (sdpValue.IsEmpty() || sdpValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> sdp = sdpValue;
        if (!sdp.prepare(exceptionState))
            return;
        impl.setSdp(sdp);
    }

    v8::Local<v8::Value> typeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "type")).ToLocal(&typeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> type = typeValue;
        if (!type.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "offer",
            "pranswer",
            "answer",
        };
        if (!isValidEnum(type, validValues, WTF_ARRAY_LENGTH(validValues), "RTCSdpType", exceptionState))
            return;
        impl.setType(type);
    }
}

v8::Local<v8::Value> RTCSessionDescriptionInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8RTCSessionDescriptionInit(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8RTCSessionDescriptionInit(const RTCSessionDescriptionInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasSdp()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sdp"), v8String(isolate, impl.sdp()))))
            return false;
    }

    if (impl.hasType()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "type"), v8String(isolate, impl.type()))))
            return false;
    }

    return true;
}

RTCSessionDescriptionInit NativeValueTraits<RTCSessionDescriptionInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    RTCSessionDescriptionInit impl;
    V8RTCSessionDescriptionInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
