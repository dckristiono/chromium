// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8WebGLDebugRendererInfo.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8WebGLDebugRendererInfo::wrapperTypeInfo = { gin::kEmbedderBlink, V8WebGLDebugRendererInfo::domTemplate, V8WebGLDebugRendererInfo::trace, V8WebGLDebugRendererInfo::traceWrappers, 0, V8WebGLDebugRendererInfo::visitDOMWrapper, V8WebGLDebugRendererInfo::preparePrototypeAndInterfaceObject, nullptr, "WebGLDebugRendererInfo", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLDebugRendererInfo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WebGLDebugRendererInfo::s_wrapperTypeInfo = V8WebGLDebugRendererInfo::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, WebGLDebugRendererInfo>::value,
    "WebGLDebugRendererInfo inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGLDebugRendererInfoV8Internal {

} // namespace WebGLDebugRendererInfoV8Internal

void V8WebGLDebugRendererInfo::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    WebGLDebugRendererInfo* impl = scriptWrappable->toImpl<WebGLDebugRendererInfo>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static void installV8WebGLDebugRendererInfoTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGLDebugRendererInfo::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8WebGLDebugRendererInfo::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8WebGLDebugRendererInfoConstants[] = {
        {"UNMASKED_VENDOR_WEBGL", 0x9245, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"UNMASKED_RENDERER_WEBGL", 0x9246, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8WebGLDebugRendererInfoConstants, WTF_ARRAY_LENGTH(V8WebGLDebugRendererInfoConstants));
}

v8::Local<v8::FunctionTemplate> V8WebGLDebugRendererInfo::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLDebugRendererInfoTemplate);
}

bool V8WebGLDebugRendererInfo::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLDebugRendererInfo::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLDebugRendererInfo* V8WebGLDebugRendererInfo::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink