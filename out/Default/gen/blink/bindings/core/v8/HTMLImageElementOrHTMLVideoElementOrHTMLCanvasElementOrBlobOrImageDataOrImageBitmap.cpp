// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap.h"

#include "bindings/core/v8/ArrayBufferOrArrayBufferViewOrBlobOrUSVString.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8HTMLCanvasElement.h"
#include "bindings/core/v8/V8HTMLImageElement.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8ImageBitmap.h"
#include "bindings/core/v8/V8ImageData.h"

namespace blink {

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap()
    : m_type(SpecificTypeNone)
{
}

HTMLImageElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsHTMLImageElement() const
{
    ASSERT(isHTMLImageElement());
    return m_htmlImageElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setHTMLImageElement(HTMLImageElement* value)
{
    ASSERT(isNull());
    m_htmlImageElement = value;
    m_type = SpecificTypeHTMLImageElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromHTMLImageElement(HTMLImageElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setHTMLImageElement(value);
    return container;
}

HTMLVideoElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsHTMLVideoElement() const
{
    ASSERT(isHTMLVideoElement());
    return m_htmlVideoElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setHTMLVideoElement(HTMLVideoElement* value)
{
    ASSERT(isNull());
    m_htmlVideoElement = value;
    m_type = SpecificTypeHTMLVideoElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromHTMLVideoElement(HTMLVideoElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setHTMLVideoElement(value);
    return container;
}

HTMLCanvasElement* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsHTMLCanvasElement() const
{
    ASSERT(isHTMLCanvasElement());
    return m_htmlCanvasElement;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setHTMLCanvasElement(HTMLCanvasElement* value)
{
    ASSERT(isNull());
    m_htmlCanvasElement = value;
    m_type = SpecificTypeHTMLCanvasElement;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromHTMLCanvasElement(HTMLCanvasElement* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setHTMLCanvasElement(value);
    return container;
}

Blob* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsBlob() const
{
    ASSERT(isBlob());
    return m_blob;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setBlob(Blob* value)
{
    ASSERT(isNull());
    m_blob = value;
    m_type = SpecificTypeBlob;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromBlob(Blob* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setBlob(value);
    return container;
}

ImageData* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsImageData() const
{
    ASSERT(isImageData());
    return m_imageData;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setImageData(ImageData* value)
{
    ASSERT(isNull());
    m_imageData = value;
    m_type = SpecificTypeImageData;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromImageData(ImageData* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setImageData(value);
    return container;
}

ImageBitmap* HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::getAsImageBitmap() const
{
    ASSERT(isImageBitmap());
    return m_imageBitmap;
}

void HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::setImageBitmap(ImageBitmap* value)
{
    ASSERT(isNull());
    m_imageBitmap = value;
    m_type = SpecificTypeImageBitmap;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::fromImageBitmap(ImageBitmap* value)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap container;
    container.setImageBitmap(value);
    return container;
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap&) = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::~HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap() = default;
HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap& HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::operator=(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap&) = default;

DEFINE_TRACE(HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap)
{
    visitor->trace(m_htmlImageElement);
    visitor->trace(m_htmlVideoElement);
    visitor->trace(m_htmlCanvasElement);
    visitor->trace(m_blob);
    visitor->trace(m_imageData);
    visitor->trace(m_imageBitmap);
}

void V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8HTMLImageElement::hasInstance(v8Value, isolate)) {
        HTMLImageElement* cppValue = V8HTMLImageElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLImageElement(cppValue);
        return;
    }

    if (V8HTMLVideoElement::hasInstance(v8Value, isolate)) {
        HTMLVideoElement* cppValue = V8HTMLVideoElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLVideoElement(cppValue);
        return;
    }

    if (V8HTMLCanvasElement::hasInstance(v8Value, isolate)) {
        HTMLCanvasElement* cppValue = V8HTMLCanvasElement::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setHTMLCanvasElement(cppValue);
        return;
    }

    if (V8Blob::hasInstance(v8Value, isolate)) {
        Blob* cppValue = V8Blob::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setBlob(cppValue);
        return;
    }

    if (V8ImageData::hasInstance(v8Value, isolate)) {
        ImageData* cppValue = V8ImageData::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setImageData(cppValue);
        return;
    }

    if (V8ImageBitmap::hasInstance(v8Value, isolate)) {
        ImageBitmap* cppValue = V8ImageBitmap::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setImageBitmap(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(HTMLImageElement or HTMLVideoElement or HTMLCanvasElement or Blob or ImageData or ImageBitmap)'");
}

v8::Local<v8::Value> toV8(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeNone:
        return v8::Null(isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeHTMLImageElement:
        return toV8(impl.getAsHTMLImageElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeHTMLVideoElement:
        return toV8(impl.getAsHTMLVideoElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeHTMLCanvasElement:
        return toV8(impl.getAsHTMLCanvasElement(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeBlob:
        return toV8(impl.getAsBlob(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeImageData:
        return toV8(impl.getAsImageData(), creationContext, isolate);
    case HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::SpecificTypeImageBitmap:
        return toV8(impl.getAsImageBitmap(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap NativeValueTraits<HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap impl;
    V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
