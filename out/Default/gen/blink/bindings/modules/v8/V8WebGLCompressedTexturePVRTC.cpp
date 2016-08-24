// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8WebGLCompressedTexturePVRTC.h"

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
const WrapperTypeInfo V8WebGLCompressedTexturePVRTC::wrapperTypeInfo = { gin::kEmbedderBlink, V8WebGLCompressedTexturePVRTC::domTemplate, V8WebGLCompressedTexturePVRTC::trace, V8WebGLCompressedTexturePVRTC::traceWrappers, 0, V8WebGLCompressedTexturePVRTC::visitDOMWrapper, V8WebGLCompressedTexturePVRTC::preparePrototypeAndInterfaceObject, nullptr, "WebGLCompressedTexturePVRTC", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLCompressedTexturePVRTC.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WebGLCompressedTexturePVRTC::s_wrapperTypeInfo = V8WebGLCompressedTexturePVRTC::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, WebGLCompressedTexturePVRTC>::value,
    "WebGLCompressedTexturePVRTC inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGLCompressedTexturePVRTCV8Internal {

} // namespace WebGLCompressedTexturePVRTCV8Internal

void V8WebGLCompressedTexturePVRTC::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    WebGLCompressedTexturePVRTC* impl = scriptWrappable->toImpl<WebGLCompressedTexturePVRTC>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static void installV8WebGLCompressedTexturePVRTCTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGLCompressedTexturePVRTC::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8WebGLCompressedTexturePVRTC::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8WebGLCompressedTexturePVRTCConstants[] = {
        {"COMPRESSED_RGB_PVRTC_4BPPV1_IMG", 0x8C00, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"COMPRESSED_RGB_PVRTC_2BPPV1_IMG", 0x8C01, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"COMPRESSED_RGBA_PVRTC_4BPPV1_IMG", 0x8C02, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"COMPRESSED_RGBA_PVRTC_2BPPV1_IMG", 0x8C03, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8WebGLCompressedTexturePVRTCConstants, WTF_ARRAY_LENGTH(V8WebGLCompressedTexturePVRTCConstants));
}

v8::Local<v8::FunctionTemplate> V8WebGLCompressedTexturePVRTC::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLCompressedTexturePVRTCTemplate);
}

bool V8WebGLCompressedTexturePVRTC::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLCompressedTexturePVRTC::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLCompressedTexturePVRTC* V8WebGLCompressedTexturePVRTC::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink