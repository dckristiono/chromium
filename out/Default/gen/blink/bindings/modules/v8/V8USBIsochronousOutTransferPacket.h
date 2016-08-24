// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8USBIsochronousOutTransferPacket_h
#define V8USBIsochronousOutTransferPacket_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "modules/ModulesExport.h"
#include "modules/webusb/USBIsochronousOutTransferPacket.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8USBIsochronousOutTransferPacket {
    STATIC_ONLY(V8USBIsochronousOutTransferPacket);
public:
    MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static USBIsochronousOutTransferPacket* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<USBIsochronousOutTransferPacket>();
    }
    MODULES_EXPORT static USBIsochronousOutTransferPacket* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<USBIsochronousOutTransferPacket>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<USBIsochronousOutTransferPacket>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    MODULES_EXPORT static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<USBIsochronousOutTransferPacket> {
    typedef V8USBIsochronousOutTransferPacket Type;
};

} // namespace blink

#endif // V8USBIsochronousOutTransferPacket_h
