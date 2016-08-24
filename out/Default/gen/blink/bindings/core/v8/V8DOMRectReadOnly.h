// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8DOMRectReadOnly_h
#define V8DOMRectReadOnly_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/dom/DOMRectReadOnly.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8DOMRectReadOnly {
    STATIC_ONLY(V8DOMRectReadOnly);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static DOMRectReadOnly* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<DOMRectReadOnly>();
    }
    CORE_EXPORT static DOMRectReadOnly* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<DOMRectReadOnly>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<DOMRectReadOnly>());
    }
    static void constructorCallback(const v8::FunctionCallbackInfo<v8::Value>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    CORE_EXPORT static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<DOMRectReadOnly> {
    typedef V8DOMRectReadOnly Type;
};

} // namespace blink

#endif // V8DOMRectReadOnly_h