// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "DictionaryOrString.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ToV8.h"

namespace blink {

DictionaryOrString::DictionaryOrString()
    : m_type(SpecificTypeNone)
{
}

Dictionary DictionaryOrString::getAsDictionary() const
{
    ASSERT(isDictionary());
    return m_dictionary;
}

void DictionaryOrString::setDictionary(Dictionary value)
{
    ASSERT(isNull());
    m_dictionary = value;
    m_type = SpecificTypeDictionary;
}

DictionaryOrString DictionaryOrString::fromDictionary(Dictionary value)
{
    DictionaryOrString container;
    container.setDictionary(value);
    return container;
}

String DictionaryOrString::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void DictionaryOrString::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

DictionaryOrString DictionaryOrString::fromString(String value)
{
    DictionaryOrString container;
    container.setString(value);
    return container;
}

DictionaryOrString::DictionaryOrString(const DictionaryOrString&) = default;
DictionaryOrString::~DictionaryOrString() = default;
DictionaryOrString& DictionaryOrString::operator=(const DictionaryOrString&) = default;

DEFINE_TRACE(DictionaryOrString)
{
}

void V8DictionaryOrString::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DictionaryOrString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (isUndefinedOrNull(v8Value) || v8Value->IsObject()) {
        Dictionary cppValue = Dictionary(v8Value, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDictionary(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }
}

v8::Local<v8::Value> toV8(const DictionaryOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case DictionaryOrString::SpecificTypeNone:
        return v8::Null(isolate);
    case DictionaryOrString::SpecificTypeDictionary:
        return impl.getAsDictionary().v8Value();
    case DictionaryOrString::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

DictionaryOrString NativeValueTraits<DictionaryOrString>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DictionaryOrString impl;
    V8DictionaryOrString::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
