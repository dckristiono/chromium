// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8DeprecatedStorageInfo.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8StorageErrorCallback.h"
#include "bindings/modules/v8/V8StorageQuotaCallback.h"
#include "bindings/modules/v8/V8StorageUsageCallback.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DeprecatedStorageInfo::wrapperTypeInfo = { gin::kEmbedderBlink, V8DeprecatedStorageInfo::domTemplate, V8DeprecatedStorageInfo::trace, V8DeprecatedStorageInfo::traceWrappers, 0, 0, V8DeprecatedStorageInfo::preparePrototypeAndInterfaceObject, nullptr, "DeprecatedStorageInfo", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DeprecatedStorageInfo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DeprecatedStorageInfo::s_wrapperTypeInfo = V8DeprecatedStorageInfo::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, DeprecatedStorageInfo>::value,
    "DeprecatedStorageInfo inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DeprecatedStorageInfoV8Internal {

static void queryUsageAndQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "queryUsageAndQuota", "DeprecatedStorageInfo", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DeprecatedStorageInfo* impl = V8DeprecatedStorageInfo::toImpl(info.Holder());
    unsigned storageType;
    StorageUsageCallback* usageCallback;
    StorageErrorCallback* errorCallback;
    {
        storageType = toUInt16(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 2 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            usageCallback = V8StorageUsageCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            usageCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 3 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8StorageErrorCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->queryUsageAndQuota(executionContext, storageType, usageCallback, errorCallback);
}

static void queryUsageAndQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DeprecatedStorageInfoV8Internal::queryUsageAndQuotaMethod(info);
}

static void requestQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "requestQuota", "DeprecatedStorageInfo", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DeprecatedStorageInfo* impl = V8DeprecatedStorageInfo::toImpl(info.Holder());
    unsigned storageType;
    unsigned long long newQuotaInBytes;
    StorageQuotaCallback* quotaCallback;
    StorageErrorCallback* errorCallback;
    {
        storageType = toUInt16(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        newQuotaInBytes = toUInt64(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 3 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            quotaCallback = V8StorageQuotaCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            quotaCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 4 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8StorageErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->requestQuota(executionContext, storageType, newQuotaInBytes, quotaCallback, errorCallback);
}

static void requestQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DeprecatedStorageInfoV8Internal::requestQuotaMethod(info);
}

} // namespace DeprecatedStorageInfoV8Internal

const V8DOMConfiguration::MethodConfiguration V8DeprecatedStorageInfoMethods[] = {
    {"queryUsageAndQuota", DeprecatedStorageInfoV8Internal::queryUsageAndQuotaMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"requestQuota", DeprecatedStorageInfoV8Internal::requestQuotaMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8DeprecatedStorageInfoTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DeprecatedStorageInfo::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DeprecatedStorageInfo::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8DeprecatedStorageInfoConstants[] = {
        {"TEMPORARY", 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"PERSISTENT", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8DeprecatedStorageInfoConstants, WTF_ARRAY_LENGTH(V8DeprecatedStorageInfoConstants));
    static_assert(0 == DeprecatedStorageInfo::kTemporary, "the value of DeprecatedStorageInfo_kTemporary does not match with implementation");
    static_assert(1 == DeprecatedStorageInfo::kPersistent, "the value of DeprecatedStorageInfo_kPersistent does not match with implementation");
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DeprecatedStorageInfoMethods, WTF_ARRAY_LENGTH(V8DeprecatedStorageInfoMethods));
}

v8::Local<v8::FunctionTemplate> V8DeprecatedStorageInfo::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DeprecatedStorageInfoTemplate);
}

bool V8DeprecatedStorageInfo::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DeprecatedStorageInfo::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DeprecatedStorageInfo* V8DeprecatedStorageInfo::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink