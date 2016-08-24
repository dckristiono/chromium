// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "HTMLOptionElementOrHTMLOptGroupElement.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8HTMLOptGroupElement.h"
#include "bindings/core/v8/V8HTMLOptionElement.h"

namespace blink {

HTMLOptionElementOrHTMLOptGroupElement::HTMLOptionElementOrHTMLOptGroupElement()
    : m_type(SpecificTypeNone)
{
}

HTMLOptionElement* HTMLOptionElementOrHTMLOptGroupElement::getAsHTMLOptionElement() const
{
    ASSERT(isHTMLOptionElement());
    return m_htmlOptionElement;
}

void HTMLOptionElementOrHTMLOptGroupElement::setHTMLOptionElement(HTMLOptionElement* value)
{
    ASSERT(isNull());
    m_htmlOptionElement = value;
    m_type = SpecificTypeHTMLOptionElement;
}

HTMLOptionElementOrHTMLOptGroupElement HTMLOptionElementOrHTMLOptGroupElement::fromHTMLOptionElement(HTMLOptionElement* value)
{
    HTMLOptionElementOrHTMLOptGroupElement container;
    container.setHTMLOptionElement(value);
    return container;
}

HTMLOptGroupElement* HTMLOptionElementOrHTMLOptGroupElement::getAsHTMLOptGroupElement() const
{
    ASSERT(isHTMLOptGroupElement());
    return m_htmlOptGroupElement;
}

void HTMLOptionElementOrHTMLOptGroupElement::setHTMLOptGroupElement(HTMLOptGroupElement* value)
{
    ASSERT(isNull());
    m_htmlOptGroupElement = value;
    m_type = SpecificTypeHTMLOptGroupElement;
}

HTMLOptionElementOrHTMLOptGroupElement HTMLOptionElementOrHTMLOptGroupElement::fromHTMLOptGroupElement(HTMLOptGroupElement* value)
{
    HTMLOptionElementOrHTMLOptGroupElement container;
    container.setHTMLOptGroupElement(value);
    return container;
}

HTMLOptionElementOrHTMLOptGroupElement::HTMLOptionElementOrHTMLOptGroupElement(const HTMLOptionElementOrHTMLOptGroupElement&) = default;
HTMLOptionElementOrHTMLOptGroupElement::~HTMLOptionElementOrHTMLOptGroupElement() = default;
HTMLOptionElementOrHTMLOptGroupElement& HTMLOptionElementOrHTMLOptGroupElement::operator=(const HTMLOptionElementOrHTMLOptGroupElement&) = default;

DEFINE_TRACE(HTMLOptionElementOrHTMLOptGroupElement)
{
    visitor->trace(m_htmlOptionElement);
    visitor->trace(m_htmlOptGroupElement);
}

void V8HTMLOptionElementOrHTMLOptGroupElement::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLOptionElementOrHTMLOptGroupElement& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8HTMLOptionElement::hasInstance(v8Value, isolate)) {
        HTMLOptionElement* cppValue = V8HTMLOptionElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLOptionElement(cppValue);
        return;
    }

    if (V8HTMLOptGroupElement::hasInstance(v8Value, isolate)) {
        HTMLOptGroupElement* cppValue = V8HTMLOptGroupElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLOptGroupElement(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(HTMLOptionElement or HTMLOptGroupElement)'");
}

v8::Local<v8::Value> toV8(const HTMLOptionElementOrHTMLOptGroupElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificTypeNone:
        return v8::Null(isolate);
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificTypeHTMLOptionElement:
        return toV8(impl.getAsHTMLOptionElement(), creationContext, isolate);
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificTypeHTMLOptGroupElement:
        return toV8(impl.getAsHTMLOptGroupElement(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

HTMLOptionElementOrHTMLOptGroupElement NativeValueTraits<HTMLOptionElementOrHTMLOptGroupElement>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    HTMLOptionElementOrHTMLOptGroupElement impl;
    V8HTMLOptionElementOrHTMLOptGroupElement::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
