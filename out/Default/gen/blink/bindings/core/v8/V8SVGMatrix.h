// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8SVGMatrix_h
#define V8SVGMatrix_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/svg/SVGMatrixTearOff.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8SVGMatrix {
    STATIC_ONLY(V8SVGMatrix);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static SVGMatrixTearOff* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<SVGMatrixTearOff>();
    }
    CORE_EXPORT static SVGMatrixTearOff* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<SVGMatrixTearOff>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<SVGMatrixTearOff>());
    }
    static void visitDOMWrapper(v8::Isolate*, ScriptWrappable*, const v8::Persistent<v8::Object>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    CORE_EXPORT static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<SVGMatrixTearOff> {
    typedef V8SVGMatrix Type;
};

} // namespace blink

#endif // V8SVGMatrix_h
