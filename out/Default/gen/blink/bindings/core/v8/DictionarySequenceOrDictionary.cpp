// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "DictionarySequenceOrDictionary.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ToV8.h"

namespace blink {

DictionarySequenceOrDictionary::DictionarySequenceOrDictionary()
    : m_type(SpecificTypeNone)
{
}

const Vector<Dictionary>& DictionarySequenceOrDictionary::getAsDictionarySequence() const
{
    ASSERT(isDictionarySequence());
    return m_dictionarySequence;
}

void DictionarySequenceOrDictionary::setDictionarySequence(const Vector<Dictionary>& value)
{
    ASSERT(isNull());
    m_dictionarySequence = value;
    m_type = SpecificTypeDictionarySequence;
}

DictionarySequenceOrDictionary DictionarySequenceOrDictionary::fromDictionarySequence(const Vector<Dictionary>& value)
{
    DictionarySequenceOrDictionary container;
    container.setDictionarySequence(value);
    return container;
}

Dictionary DictionarySequenceOrDictionary::getAsDictionary() const
{
    ASSERT(isDictionary());
    return m_dictionary;
}

void DictionarySequenceOrDictionary::setDictionary(Dictionary value)
{
    ASSERT(isNull());
    m_dictionary = value;
    m_type = SpecificTypeDictionary;
}

DictionarySequenceOrDictionary DictionarySequenceOrDictionary::fromDictionary(Dictionary value)
{
    DictionarySequenceOrDictionary container;
    container.setDictionary(value);
    return container;
}

DictionarySequenceOrDictionary::DictionarySequenceOrDictionary(const DictionarySequenceOrDictionary&) = default;
DictionarySequenceOrDictionary::~DictionarySequenceOrDictionary() = default;
DictionarySequenceOrDictionary& DictionarySequenceOrDictionary::operator=(const DictionarySequenceOrDictionary&) = default;

DEFINE_TRACE(DictionarySequenceOrDictionary)
{
}

void V8DictionarySequenceOrDictionary::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DictionarySequenceOrDictionary& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsArray()) {
        Vector<Dictionary> cppValue = toImplArray<Vector<Dictionary>>(v8Value, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDictionarySequence(cppValue);
        return;
    }

    if (isUndefinedOrNull(v8Value) || v8Value->IsObject()) {
        Dictionary cppValue = Dictionary(v8Value, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDictionary(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(sequence<Dictionary> or Dictionary)'");
}

v8::Local<v8::Value> toV8(const DictionarySequenceOrDictionary& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case DictionarySequenceOrDictionary::SpecificTypeNone:
        return v8::Null(isolate);
    case DictionarySequenceOrDictionary::SpecificTypeDictionarySequence:
        return toV8(impl.getAsDictionarySequence(), creationContext, isolate);
    case DictionarySequenceOrDictionary::SpecificTypeDictionary:
        return impl.getAsDictionary().v8Value();
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

DictionarySequenceOrDictionary NativeValueTraits<DictionarySequenceOrDictionary>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DictionarySequenceOrDictionary impl;
    V8DictionarySequenceOrDictionary::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
