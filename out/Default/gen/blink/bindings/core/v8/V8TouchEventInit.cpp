// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8TouchEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventModifierInit.h"
#include "bindings/core/v8/V8Touch.h"

namespace blink {

void V8TouchEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, TouchEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventModifierInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> changedTouchesValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "changedTouches")).ToLocal(&changedTouchesValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (changedTouchesValue.IsEmpty() || changedTouchesValue->IsUndefined()) {
        // Do nothing.
    } else {
        HeapVector<Member<Touch>> changedTouches = (toMemberNativeArray<Touch>(changedTouchesValue, 0, isolate, exceptionState));
        if (exceptionState.hadException())
            return;
        impl.setChangedTouches(changedTouches);
    }

    v8::Local<v8::Value> targetTouchesValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "targetTouches")).ToLocal(&targetTouchesValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (targetTouchesValue.IsEmpty() || targetTouchesValue->IsUndefined()) {
        // Do nothing.
    } else {
        HeapVector<Member<Touch>> targetTouches = (toMemberNativeArray<Touch>(targetTouchesValue, 0, isolate, exceptionState));
        if (exceptionState.hadException())
            return;
        impl.setTargetTouches(targetTouches);
    }

    v8::Local<v8::Value> touchesValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "touches")).ToLocal(&touchesValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (touchesValue.IsEmpty() || touchesValue->IsUndefined()) {
        // Do nothing.
    } else {
        HeapVector<Member<Touch>> touches = (toMemberNativeArray<Touch>(touchesValue, 0, isolate, exceptionState));
        if (exceptionState.hadException())
            return;
        impl.setTouches(touches);
    }
}

v8::Local<v8::Value> TouchEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8TouchEventInit(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8TouchEventInit(const TouchEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasChangedTouches()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "changedTouches"), toV8(impl.changedTouches(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "changedTouches"), toV8(HeapVector<Member<Touch>>(), creationContext, isolate))))
            return false;
    }

    if (impl.hasTargetTouches()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "targetTouches"), toV8(impl.targetTouches(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "targetTouches"), toV8(HeapVector<Member<Touch>>(), creationContext, isolate))))
            return false;
    }

    if (impl.hasTouches()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "touches"), toV8(impl.touches(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "touches"), toV8(HeapVector<Member<Touch>>(), creationContext, isolate))))
            return false;
    }

    return true;
}

TouchEventInit NativeValueTraits<TouchEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    TouchEventInit impl;
    V8TouchEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
