// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "StringOrUnsignedLong.h"

#include "bindings/core/v8/ToV8.h"

namespace blink {

StringOrUnsignedLong::StringOrUnsignedLong()
    : m_type(SpecificTypeNone)
{
}

String StringOrUnsignedLong::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void StringOrUnsignedLong::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrUnsignedLong StringOrUnsignedLong::fromString(String value)
{
    StringOrUnsignedLong container;
    container.setString(value);
    return container;
}

unsigned StringOrUnsignedLong::getAsUnsignedLong() const
{
    ASSERT(isUnsignedLong());
    return m_unsignedLong;
}

void StringOrUnsignedLong::setUnsignedLong(unsigned value)
{
    ASSERT(isNull());
    m_unsignedLong = value;
    m_type = SpecificTypeUnsignedLong;
}

StringOrUnsignedLong StringOrUnsignedLong::fromUnsignedLong(unsigned value)
{
    StringOrUnsignedLong container;
    container.setUnsignedLong(value);
    return container;
}

StringOrUnsignedLong::StringOrUnsignedLong(const StringOrUnsignedLong&) = default;
StringOrUnsignedLong::~StringOrUnsignedLong() = default;
StringOrUnsignedLong& StringOrUnsignedLong::operator=(const StringOrUnsignedLong&) = default;

DEFINE_TRACE(StringOrUnsignedLong)
{
}

void V8StringOrUnsignedLong::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrUnsignedLong& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsNumber()) {
        unsigned cppValue = toUInt32(isolate, v8Value, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setUnsignedLong(cppValue);
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

v8::Local<v8::Value> toV8(const StringOrUnsignedLong& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrUnsignedLong::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrUnsignedLong::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrUnsignedLong::SpecificTypeUnsignedLong:
        return v8::Integer::NewFromUnsigned(isolate, impl.getAsUnsignedLong());
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrUnsignedLong NativeValueTraits<StringOrUnsignedLong>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrUnsignedLong impl;
    V8StringOrUnsignedLong::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink