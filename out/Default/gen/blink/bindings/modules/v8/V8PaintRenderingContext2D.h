// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8PaintRenderingContext2D_h
#define V8PaintRenderingContext2D_h

#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "bindings/modules/v8/HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmap.h"
#include "bindings/modules/v8/StringOrCanvasGradientOrCanvasPattern.h"
#include "modules/ModulesExport.h"
#include "modules/csspaint/PaintRenderingContext2D.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8PaintRenderingContext2D {
    STATIC_ONLY(V8PaintRenderingContext2D);
public:
    MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static PaintRenderingContext2D* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<PaintRenderingContext2D>();
    }
    MODULES_EXPORT static PaintRenderingContext2D* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<PaintRenderingContext2D>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<PaintRenderingContext2D>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    MODULES_EXPORT static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<PaintRenderingContext2D> {
    typedef V8PaintRenderingContext2D Type;
};

} // namespace blink

#endif // V8PaintRenderingContext2D_h
