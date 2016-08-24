// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8AssignedNodesOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8AssignedNodesOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AssignedNodesOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> flattenValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "flatten")).ToLocal(&flattenValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (flattenValue.IsEmpty() || flattenValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool flatten = toBoolean(isolate, flattenValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setFlatten(flatten);
    }
}

v8::Local<v8::Value> AssignedNodesOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8AssignedNodesOptions(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8AssignedNodesOptions(const AssignedNodesOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasFlatten()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "flatten"), v8Boolean(impl.flatten(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "flatten"), v8Boolean(false, isolate))))
            return false;
    }

    return true;
}

AssignedNodesOptions NativeValueTraits<AssignedNodesOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    AssignedNodesOptions impl;
    V8AssignedNodesOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
