// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ServiceWorkerOrMessagePort_h
#define ServiceWorkerOrMessagePort_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MessagePort;
class ServiceWorker;

class MODULES_EXPORT ServiceWorkerOrMessagePort final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    ServiceWorkerOrMessagePort();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isServiceWorker() const { return m_type == SpecificTypeServiceWorker; }
    ServiceWorker* getAsServiceWorker() const;
    void setServiceWorker(ServiceWorker*);
    static ServiceWorkerOrMessagePort fromServiceWorker(ServiceWorker*);

    bool isMessagePort() const { return m_type == SpecificTypeMessagePort; }
    MessagePort* getAsMessagePort() const;
    void setMessagePort(MessagePort*);
    static ServiceWorkerOrMessagePort fromMessagePort(MessagePort*);

    ServiceWorkerOrMessagePort(const ServiceWorkerOrMessagePort&);
    ~ServiceWorkerOrMessagePort();
    ServiceWorkerOrMessagePort& operator=(const ServiceWorkerOrMessagePort&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeServiceWorker,
        SpecificTypeMessagePort,
    };
    SpecificTypes m_type;

    Member<ServiceWorker> m_serviceWorker;
    Member<MessagePort> m_messagePort;

    friend MODULES_EXPORT v8::Local<v8::Value> toV8(const ServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ServiceWorkerOrMessagePort final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, ServiceWorkerOrMessagePort&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> toV8(const ServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, ServiceWorkerOrMessagePort& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ServiceWorkerOrMessagePort> {
    MODULES_EXPORT static ServiceWorkerOrMessagePort nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ServiceWorkerOrMessagePort);

#endif // ServiceWorkerOrMessagePort_h