// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "StringOrStringSequence.h"

#include "bindings/core/v8/ToV8.h"

namespace blink {

StringOrStringSequence::StringOrStringSequence()
    : m_type(SpecificTypeNone)
{
}

String StringOrStringSequence::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void StringOrStringSequence::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrStringSequence StringOrStringSequence::fromString(String value)
{
    StringOrStringSequence container;
    container.setString(value);
    return container;
}

const Vector<String>& StringOrStringSequence::getAsStringSequence() const
{
    ASSERT(isStringSequence());
    return m_stringSequence;
}

void StringOrStringSequence::setStringSequence(const Vector<String>& value)
{
    ASSERT(isNull());
    m_stringSequence = value;
    m_type = SpecificTypeStringSequence;
}

StringOrStringSequence StringOrStringSequence::fromStringSequence(const Vector<String>& value)
{
    StringOrStringSequence container;
    container.setStringSequence(value);
    return container;
}

StringOrStringSequence::StringOrStringSequence(const StringOrStringSequence&) = default;
StringOrStringSequence::~StringOrStringSequence() = default;
StringOrStringSequence& StringOrStringSequence::operator=(const StringOrStringSequence&) = default;

DEFINE_TRACE(StringOrStringSequence)
{
}

void V8StringOrStringSequence::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrStringSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsArray()) {
        Vector<String> cppValue = toImplArray<Vector<String>>(v8Value, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setStringSequence(cppValue);
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

v8::Local<v8::Value> toV8(const StringOrStringSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrStringSequence::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrStringSequence::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrStringSequence::SpecificTypeStringSequence:
        return toV8(impl.getAsStringSequence(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrStringSequence NativeValueTraits<StringOrStringSequence>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrStringSequence impl;
    V8StringOrStringSequence::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
