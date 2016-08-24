// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8ScrollStateInit.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8ScrollStateInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollStateInit& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> deltaGranularityValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaGranularity")).ToLocal(&deltaGranularityValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (deltaGranularityValue.IsEmpty() || deltaGranularityValue->IsUndefined()) {
        // Do nothing.
    } else {
        double deltaGranularity = toRestrictedDouble(isolate, deltaGranularityValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDeltaGranularity(deltaGranularity);
    }

    v8::Local<v8::Value> deltaXValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaX")).ToLocal(&deltaXValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (deltaXValue.IsEmpty() || deltaXValue->IsUndefined()) {
        // Do nothing.
    } else {
        double deltaX = toRestrictedDouble(isolate, deltaXValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDeltaX(deltaX);
    }

    v8::Local<v8::Value> deltaYValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaY")).ToLocal(&deltaYValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (deltaYValue.IsEmpty() || deltaYValue->IsUndefined()) {
        // Do nothing.
    } else {
        double deltaY = toRestrictedDouble(isolate, deltaYValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDeltaY(deltaY);
    }

    v8::Local<v8::Value> fromUserInputValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "fromUserInput")).ToLocal(&fromUserInputValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (fromUserInputValue.IsEmpty() || fromUserInputValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool fromUserInput = toBoolean(isolate, fromUserInputValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setFromUserInput(fromUserInput);
    }

    v8::Local<v8::Value> isBeginningValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isBeginning")).ToLocal(&isBeginningValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (isBeginningValue.IsEmpty() || isBeginningValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool isBeginning = toBoolean(isolate, isBeginningValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIsBeginning(isBeginning);
    }

    v8::Local<v8::Value> isDirectManipulationValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isDirectManipulation")).ToLocal(&isDirectManipulationValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (isDirectManipulationValue.IsEmpty() || isDirectManipulationValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool isDirectManipulation = toBoolean(isolate, isDirectManipulationValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIsDirectManipulation(isDirectManipulation);
    }

    v8::Local<v8::Value> isEndingValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isEnding")).ToLocal(&isEndingValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (isEndingValue.IsEmpty() || isEndingValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool isEnding = toBoolean(isolate, isEndingValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIsEnding(isEnding);
    }

    v8::Local<v8::Value> isInInertialPhaseValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isInInertialPhase")).ToLocal(&isInInertialPhaseValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (isInInertialPhaseValue.IsEmpty() || isInInertialPhaseValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool isInInertialPhase = toBoolean(isolate, isInInertialPhaseValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIsInInertialPhase(isInInertialPhase);
    }

    v8::Local<v8::Value> positionXValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "positionX")).ToLocal(&positionXValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (positionXValue.IsEmpty() || positionXValue->IsUndefined()) {
        // Do nothing.
    } else {
        int positionX = toInt32(isolate, positionXValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setPositionX(positionX);
    }

    v8::Local<v8::Value> positionYValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "positionY")).ToLocal(&positionYValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (positionYValue.IsEmpty() || positionYValue->IsUndefined()) {
        // Do nothing.
    } else {
        int positionY = toInt32(isolate, positionYValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setPositionY(positionY);
    }

    v8::Local<v8::Value> shouldPropagateValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "shouldPropagate")).ToLocal(&shouldPropagateValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (shouldPropagateValue.IsEmpty() || shouldPropagateValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool shouldPropagate = toBoolean(isolate, shouldPropagateValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setShouldPropagate(shouldPropagate);
    }

    v8::Local<v8::Value> velocityXValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "velocityX")).ToLocal(&velocityXValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (velocityXValue.IsEmpty() || velocityXValue->IsUndefined()) {
        // Do nothing.
    } else {
        double velocityX = toRestrictedDouble(isolate, velocityXValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setVelocityX(velocityX);
    }

    v8::Local<v8::Value> velocityYValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "velocityY")).ToLocal(&velocityYValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (velocityYValue.IsEmpty() || velocityYValue->IsUndefined()) {
        // Do nothing.
    } else {
        double velocityY = toRestrictedDouble(isolate, velocityYValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setVelocityY(velocityY);
    }
}

v8::Local<v8::Value> ScrollStateInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ScrollStateInit(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8ScrollStateInit(const ScrollStateInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasDeltaGranularity()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaGranularity"), v8::Number::New(isolate, impl.deltaGranularity()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaGranularity"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasDeltaX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaX"), v8::Number::New(isolate, impl.deltaX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaX"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasDeltaY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaY"), v8::Number::New(isolate, impl.deltaY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaY"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasFromUserInput()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fromUserInput"), v8Boolean(impl.fromUserInput(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fromUserInput"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasIsBeginning()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isBeginning"), v8Boolean(impl.isBeginning(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isBeginning"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasIsDirectManipulation()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isDirectManipulation"), v8Boolean(impl.isDirectManipulation(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isDirectManipulation"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasIsEnding()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isEnding"), v8Boolean(impl.isEnding(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isEnding"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasIsInInertialPhase()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isInInertialPhase"), v8Boolean(impl.isInInertialPhase(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isInInertialPhase"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasPositionX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "positionX"), v8::Integer::New(isolate, impl.positionX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "positionX"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasPositionY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "positionY"), v8::Integer::New(isolate, impl.positionY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "positionY"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasShouldPropagate()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "shouldPropagate"), v8Boolean(impl.shouldPropagate(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "shouldPropagate"), v8Boolean(true, isolate))))
            return false;
    }

    if (impl.hasVelocityX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "velocityX"), v8::Number::New(isolate, impl.velocityX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "velocityX"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasVelocityY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "velocityY"), v8::Number::New(isolate, impl.velocityY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "velocityY"), v8::Number::New(isolate, 0))))
            return false;
    }

    return true;
}

ScrollStateInit NativeValueTraits<ScrollStateInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ScrollStateInit impl;
    V8ScrollStateInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink