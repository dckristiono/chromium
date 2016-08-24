// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "DoubleOrInternalEnum.h"

#include "bindings/core/v8/ToV8.h"

namespace blink {

DoubleOrInternalEnum::DoubleOrInternalEnum()
    : m_type(SpecificTypeNone)
{
}

double DoubleOrInternalEnum::getAsDouble() const
{
    ASSERT(isDouble());
    return m_double;
}

void DoubleOrInternalEnum::setDouble(double value)
{
    ASSERT(isNull());
    m_double = value;
    m_type = SpecificTypeDouble;
}

DoubleOrInternalEnum DoubleOrInternalEnum::fromDouble(double value)
{
    DoubleOrInternalEnum container;
    container.setDouble(value);
    return container;
}

String DoubleOrInternalEnum::getAsInternalEnum() const
{
    ASSERT(isInternalEnum());
    return m_internalEnum;
}

void DoubleOrInternalEnum::setInternalEnum(String value)
{
    ASSERT(isNull());
    NonThrowableExceptionState exceptionState;
    const char* validValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!isValidEnum(value, validValues, WTF_ARRAY_LENGTH(validValues), "InternalEnum", exceptionState)) {
        ASSERT_NOT_REACHED();
        return;
    }
    m_internalEnum = value;
    m_type = SpecificTypeInternalEnum;
}

DoubleOrInternalEnum DoubleOrInternalEnum::fromInternalEnum(String value)
{
    DoubleOrInternalEnum container;
    container.setInternalEnum(value);
    return container;
}

DoubleOrInternalEnum::DoubleOrInternalEnum(const DoubleOrInternalEnum&) = default;
DoubleOrInternalEnum::~DoubleOrInternalEnum() = default;
DoubleOrInternalEnum& DoubleOrInternalEnum::operator=(const DoubleOrInternalEnum&) = default;

DEFINE_TRACE(DoubleOrInternalEnum)
{
}

void V8DoubleOrInternalEnum::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrInternalEnum& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsNumber()) {
        double cppValue = toRestrictedDouble(isolate, v8Value, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDouble(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "foo",
            "bar",
            "baz",
        };
        if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "InternalEnum", exceptionState))
            return;
        impl.setInternalEnum(cppValue);
        return;
    }
}

v8::Local<v8::Value> toV8(const DoubleOrInternalEnum& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case DoubleOrInternalEnum::SpecificTypeNone:
        return v8::Null(isolate);
    case DoubleOrInternalEnum::SpecificTypeDouble:
        return v8::Number::New(isolate, impl.getAsDouble());
    case DoubleOrInternalEnum::SpecificTypeInternalEnum:
        return v8String(isolate, impl.getAsInternalEnum());
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

DoubleOrInternalEnum NativeValueTraits<DoubleOrInternalEnum>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DoubleOrInternalEnum impl;
    V8DoubleOrInternalEnum::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink