// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8IDBObjectStoreParameters.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/StringOrStringSequence.h"

namespace blink {

void V8IDBObjectStoreParameters::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IDBObjectStoreParameters& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> autoIncrementValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "autoIncrement")).ToLocal(&autoIncrementValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (autoIncrementValue.IsEmpty() || autoIncrementValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool autoIncrement = toBoolean(isolate, autoIncrementValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setAutoIncrement(autoIncrement);
    }

    v8::Local<v8::Value> keyPathValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "keyPath")).ToLocal(&keyPathValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (keyPathValue.IsEmpty() || keyPathValue->IsUndefined()) {
        // Do nothing.
    } else if (keyPathValue->IsNull()) {
        impl.setKeyPathToNull();
    } else {
        StringOrStringSequence keyPath;
        V8StringOrStringSequence::toImpl(isolate, keyPathValue, keyPath, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setKeyPath(keyPath);
    }
}

v8::Local<v8::Value> IDBObjectStoreParameters::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8IDBObjectStoreParameters(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8IDBObjectStoreParameters(const IDBObjectStoreParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAutoIncrement()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "autoIncrement"), v8Boolean(impl.autoIncrement(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "autoIncrement"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasKeyPath()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "keyPath"), toV8(impl.keyPath(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "keyPath"), v8::Null(isolate))))
            return false;
    }

    return true;
}

IDBObjectStoreParameters NativeValueTraits<IDBObjectStoreParameters>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    IDBObjectStoreParameters impl;
    V8IDBObjectStoreParameters::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
