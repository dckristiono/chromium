// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8FilePropertyBag.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8BlobPropertyBag.h"

namespace blink {

void V8FilePropertyBag::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FilePropertyBag& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8BlobPropertyBag::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> lastModifiedValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "lastModified")).ToLocal(&lastModifiedValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (lastModifiedValue.IsEmpty() || lastModifiedValue->IsUndefined()) {
        // Do nothing.
    } else {
        long long lastModified = toInt64(isolate, lastModifiedValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setLastModified(lastModified);
    }
}

v8::Local<v8::Value> FilePropertyBag::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8FilePropertyBag(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8FilePropertyBag(const FilePropertyBag& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8BlobPropertyBag(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasLastModified()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "lastModified"), v8::Number::New(isolate, static_cast<double>(impl.lastModified())))))
            return false;
    }

    return true;
}

FilePropertyBag NativeValueTraits<FilePropertyBag>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    FilePropertyBag impl;
    V8FilePropertyBag::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
