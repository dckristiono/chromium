// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8GetRootNodeOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8GetRootNodeOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, GetRootNodeOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> composedValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "composed")).ToLocal(&composedValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (composedValue.IsEmpty() || composedValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool composed = toBoolean(isolate, composedValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setComposed(composed);
    }
}

v8::Local<v8::Value> GetRootNodeOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8GetRootNodeOptions(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8GetRootNodeOptions(const GetRootNodeOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasComposed()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "composed"), v8Boolean(impl.composed(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "composed"), v8Boolean(false, isolate))))
            return false;
    }

    return true;
}

GetRootNodeOptions NativeValueTraits<GetRootNodeOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    GetRootNodeOptions impl;
    V8GetRootNodeOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
