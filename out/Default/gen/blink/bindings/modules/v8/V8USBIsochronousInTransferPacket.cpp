// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USBIsochronousInTransferPacket.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DataView.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8USBIsochronousInTransferPacket::wrapperTypeInfo = { gin::kEmbedderBlink, V8USBIsochronousInTransferPacket::domTemplate, V8USBIsochronousInTransferPacket::trace, V8USBIsochronousInTransferPacket::traceWrappers, 0, 0, V8USBIsochronousInTransferPacket::preparePrototypeAndInterfaceObject, nullptr, "USBIsochronousInTransferPacket", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USBIsochronousInTransferPacket.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USBIsochronousInTransferPacket::s_wrapperTypeInfo = V8USBIsochronousInTransferPacket::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, USBIsochronousInTransferPacket>::value,
    "USBIsochronousInTransferPacket inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace USBIsochronousInTransferPacketV8Internal {

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBIsochronousInTransferPacket* impl = V8USBIsochronousInTransferPacket::toImpl(holder);
    v8SetReturnValueString(info, impl->status(), info.GetIsolate());
}

static void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBIsochronousInTransferPacketV8Internal::statusAttributeGetter(info);
}

static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBIsochronousInTransferPacket* impl = V8USBIsochronousInTransferPacket::toImpl(holder);
    DOMDataView* cppValue(WTF::getPtr(impl->data()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "data"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBIsochronousInTransferPacketV8Internal::dataAttributeGetter(info);
}

} // namespace USBIsochronousInTransferPacketV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBIsochronousInTransferPacketAccessors[] = {
    {"status", USBIsochronousInTransferPacketV8Internal::statusAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"data", USBIsochronousInTransferPacketV8Internal::dataAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8USBIsochronousInTransferPacketTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8USBIsochronousInTransferPacket::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8USBIsochronousInTransferPacket::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webUSBEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBIsochronousInTransferPacketAccessors, WTF_ARRAY_LENGTH(V8USBIsochronousInTransferPacketAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8USBIsochronousInTransferPacket::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBIsochronousInTransferPacketTemplate);
}

bool V8USBIsochronousInTransferPacket::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USBIsochronousInTransferPacket::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USBIsochronousInTransferPacket* V8USBIsochronousInTransferPacket::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
