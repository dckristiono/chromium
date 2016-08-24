// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "ServiceWorkerOrMessagePort.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8MessagePort.h"
#include "bindings/modules/v8/V8ServiceWorker.h"
#include "core/workers/AbstractWorker.h"

namespace blink {

ServiceWorkerOrMessagePort::ServiceWorkerOrMessagePort()
    : m_type(SpecificTypeNone)
{
}

ServiceWorker* ServiceWorkerOrMessagePort::getAsServiceWorker() const
{
    ASSERT(isServiceWorker());
    return m_serviceWorker;
}

void ServiceWorkerOrMessagePort::setServiceWorker(ServiceWorker* value)
{
    ASSERT(isNull());
    m_serviceWorker = value;
    m_type = SpecificTypeServiceWorker;
}

ServiceWorkerOrMessagePort ServiceWorkerOrMessagePort::fromServiceWorker(ServiceWorker* value)
{
    ServiceWorkerOrMessagePort container;
    container.setServiceWorker(value);
    return container;
}

MessagePort* ServiceWorkerOrMessagePort::getAsMessagePort() const
{
    ASSERT(isMessagePort());
    return m_messagePort;
}

void ServiceWorkerOrMessagePort::setMessagePort(MessagePort* value)
{
    ASSERT(isNull());
    m_messagePort = value;
    m_type = SpecificTypeMessagePort;
}

ServiceWorkerOrMessagePort ServiceWorkerOrMessagePort::fromMessagePort(MessagePort* value)
{
    ServiceWorkerOrMessagePort container;
    container.setMessagePort(value);
    return container;
}

ServiceWorkerOrMessagePort::ServiceWorkerOrMessagePort(const ServiceWorkerOrMessagePort&) = default;
ServiceWorkerOrMessagePort::~ServiceWorkerOrMessagePort() = default;
ServiceWorkerOrMessagePort& ServiceWorkerOrMessagePort::operator=(const ServiceWorkerOrMessagePort&) = default;

DEFINE_TRACE(ServiceWorkerOrMessagePort)
{
    visitor->trace(m_serviceWorker);
    visitor->trace(m_messagePort);
}

void V8ServiceWorkerOrMessagePort::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ServiceWorkerOrMessagePort& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8ServiceWorker::hasInstance(v8Value, isolate)) {
        ServiceWorker* cppValue = V8ServiceWorker::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setServiceWorker(cppValue);
        return;
    }

    if (V8MessagePort::hasInstance(v8Value, isolate)) {
        MessagePort* cppValue = V8MessagePort::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setMessagePort(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(ServiceWorker or MessagePort)'");
}

v8::Local<v8::Value> toV8(const ServiceWorkerOrMessagePort& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case ServiceWorkerOrMessagePort::SpecificTypeNone:
        return v8::Null(isolate);
    case ServiceWorkerOrMessagePort::SpecificTypeServiceWorker:
        return toV8(impl.getAsServiceWorker(), creationContext, isolate);
    case ServiceWorkerOrMessagePort::SpecificTypeMessagePort:
        return toV8(impl.getAsMessagePort(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

ServiceWorkerOrMessagePort NativeValueTraits<ServiceWorkerOrMessagePort>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ServiceWorkerOrMessagePort impl;
    V8ServiceWorkerOrMessagePort::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
