// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Client.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/SerializedScriptValue.h"
#include "bindings/core/v8/SerializedScriptValueFactory.h"
#include "bindings/core/v8/Transferables.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8MessagePort.h"
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
const WrapperTypeInfo V8Client::wrapperTypeInfo = { gin::kEmbedderBlink, V8Client::domTemplate, V8Client::trace, V8Client::traceWrappers, 0, 0, V8Client::preparePrototypeAndInterfaceObject, nullptr, "Client", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ServiceWorkerClient.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ServiceWorkerClient::s_wrapperTypeInfo = V8Client::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, ServiceWorkerClient>::value,
    "ServiceWorkerClient inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ServiceWorkerClientV8Internal {

static void urlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServiceWorkerClient* impl = V8Client::toImpl(holder);
    v8SetReturnValueString(info, impl->url(), info.GetIsolate());
}

static void urlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ServiceWorkerClientV8Internal::urlAttributeGetter(info);
}

static void frameTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServiceWorkerClient* impl = V8Client::toImpl(holder);
    v8SetReturnValueString(info, impl->frameType(), info.GetIsolate());
}

static void frameTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ServiceWorkerClientV8Internal::frameTypeAttributeGetter(info);
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServiceWorkerClient* impl = V8Client::toImpl(holder);
    v8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ServiceWorkerClientV8Internal::idAttributeGetter(info);
}

void postMessageImpl(const char* interfaceName, ServiceWorkerClient* instance, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "postMessage", interfaceName, info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Transferables transferables;
    if (info.Length() > 1) {
        const int transferablesArgIndex = 1;
        if (!SerializedScriptValue::extractTransferables(info.GetIsolate(), info[transferablesArgIndex], transferablesArgIndex, transferables, exceptionState)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtr<SerializedScriptValue> message = SerializedScriptValue::serialize(info.GetIsolate(), info[0], &transferables, nullptr, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    // FIXME: Only pass context/exceptionState if instance really requires it.
    ExecutionContext* context = currentExecutionContext(info.GetIsolate());
    instance->postMessage(context, message.release(), transferables.messagePorts, exceptionState);
    exceptionState.throwIfNeeded();
}

static void postMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    postMessageImpl("Client", V8Client::toImpl(info.Holder()), info);
}

} // namespace ServiceWorkerClientV8Internal

const V8DOMConfiguration::MethodConfiguration V8ClientMethods[] = {
    {"postMessage", ServiceWorkerClientV8Internal::postMessageMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8ClientTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Client::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Client::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ClientMethods, WTF_ARRAY_LENGTH(V8ClientMethods));

    if (RuntimeEnabledFeatures::serviceWorkerClientAttributesEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorframeTypeConfiguration = \
        {"frameType", ServiceWorkerClientV8Internal::frameTypeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorframeTypeConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessoridConfiguration = \
        {"id", ServiceWorkerClientV8Internal::idAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoridConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessorurlConfiguration = \
        {"url", ServiceWorkerClientV8Internal::urlAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorurlConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Client::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ClientTemplate);
}

bool V8Client::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Client::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ServiceWorkerClient* V8Client::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
