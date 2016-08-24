// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLTableElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8HTMLTableCaptionElement.h"
#include "bindings/core/v8/V8HTMLTableRowElement.h"
#include "bindings/core/v8/V8HTMLTableSectionElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLDataListOptionsCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLTableElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLTableElement::domTemplate, V8HTMLTableElement::trace, V8HTMLTableElement::traceWrappers, 0, 0, V8HTMLTableElement::preparePrototypeAndInterfaceObject, nullptr, "HTMLTableElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableElement::s_wrapperTypeInfo = V8HTMLTableElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLTableElement>::value,
    "HTMLTableElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLTableElementV8Internal {

static void captionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->caption()), impl);
}

static void captionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::captionAttributeGetter(info);
}

static void captionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "caption", "HTMLTableElement", holder, info.GetIsolate());
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    HTMLTableCaptionElement* cppValue = V8HTMLTableCaptionElement::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'HTMLTableCaptionElement'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setCaption(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void captionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::captionAttributeSetter(v8Value, info);
}

static void tHeadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->tHead()), impl);
}

static void tHeadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::tHeadAttributeGetter(info);
}

static void tHeadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "tHead", "HTMLTableElement", holder, info.GetIsolate());
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    HTMLTableSectionElement* cppValue = V8HTMLTableSectionElement::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'HTMLTableSectionElement'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setTHead(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void tHeadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::tHeadAttributeSetter(v8Value, info);
}

static void tFootAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->tFoot()), impl);
}

static void tFootAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::tFootAttributeGetter(info);
}

static void tFootAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "tFoot", "HTMLTableElement", holder, info.GetIsolate());
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    HTMLTableSectionElement* cppValue = V8HTMLTableSectionElement::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'HTMLTableSectionElement'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setTFoot(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void tFootAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::tFootAttributeSetter(v8Value, info);
}

static void tBodiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->tBodies()), impl);
}

static void tBodiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::tBodiesAttributeGetter(info);
}

static void rowsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->rows()), impl);
}

static void rowsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::rowsAttributeGetter(info);
}

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::alignAttributeGetter(info);
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::alignAttr, cppValue);
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::alignAttributeSetter(v8Value, info);
}

static void borderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::borderAttr), info.GetIsolate());
}

static void borderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::borderAttributeGetter(info);
}

static void borderAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::borderAttr, cppValue);
}

static void borderAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::borderAttributeSetter(v8Value, info);
}

static void frameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::frameAttr), info.GetIsolate());
}

static void frameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::frameAttributeGetter(info);
}

static void frameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::frameAttr, cppValue);
}

static void frameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::frameAttributeSetter(v8Value, info);
}

static void rulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::rulesAttr), info.GetIsolate());
}

static void rulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::rulesAttributeGetter(info);
}

static void rulesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::rulesAttr, cppValue);
}

static void rulesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::rulesAttributeSetter(v8Value, info);
}

static void summaryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::summaryAttr), info.GetIsolate());
}

static void summaryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::summaryAttributeGetter(info);
}

static void summaryAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::summaryAttr, cppValue);
}

static void summaryAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::summaryAttributeSetter(v8Value, info);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::widthAttributeGetter(info);
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::widthAttr, cppValue);
}

static void widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::widthAttributeSetter(v8Value, info);
}

static void bgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::bgcolorAttr), info.GetIsolate());
}

static void bgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::bgColorAttributeGetter(info);
}

static void bgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::bgcolorAttr, cppValue);
}

static void bgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::bgColorAttributeSetter(v8Value, info);
}

static void cellPaddingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::cellpaddingAttr), info.GetIsolate());
}

static void cellPaddingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::cellPaddingAttributeGetter(info);
}

static void cellPaddingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::cellpaddingAttr, cppValue);
}

static void cellPaddingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::cellPaddingAttributeSetter(v8Value, info);
}

static void cellSpacingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::cellspacingAttr), info.GetIsolate());
}

static void cellSpacingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElementV8Internal::cellSpacingAttributeGetter(info);
}

static void cellSpacingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::cellspacingAttr, cppValue);
}

static void cellSpacingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableElementV8Internal::cellSpacingAttributeSetter(v8Value, info);
}

static void createCaptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, impl->createCaption(), impl);
}

static void createCaptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::createCaptionMethod(info);
}

static void deleteCaptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    impl->deleteCaption();
}

static void deleteCaptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::deleteCaptionMethod(info);
}

static void createTHeadMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, impl->createTHead(), impl);
}

static void createTHeadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::createTHeadMethod(info);
}

static void deleteTHeadMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    impl->deleteTHead();
}

static void deleteTHeadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::deleteTHeadMethod(info);
}

static void createTFootMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, impl->createTFoot(), impl);
}

static void createTFootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::createTFootMethod(info);
}

static void deleteTFootMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    impl->deleteTFoot();
}

static void deleteTFootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::deleteTFootMethod(info);
}

static void createTBodyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, impl->createTBody(), impl);
}

static void createTBodyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::createTBodyMethod(info);
}

static void insertRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertRow", "HTMLTableElement", info.Holder(), info.GetIsolate());
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    int index;
    {
        if (!info[0]->IsUndefined()) {
            index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            index = -1;
        }
    }
    HTMLTableRowElement* result = impl->insertRow(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, result, impl);
}

static void insertRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::insertRowMethod(info);
}

static void deleteRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteRow", "HTMLTableElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLTableElement* impl = V8HTMLTableElement::toImpl(info.Holder());
    int index;
    {
        index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteRow(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableElementV8Internal::deleteRowMethod(info);
}

} // namespace HTMLTableElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLTableElementAccessors[] = {
    {"caption", HTMLTableElementV8Internal::captionAttributeGetterCallback, HTMLTableElementV8Internal::captionAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"tHead", HTMLTableElementV8Internal::tHeadAttributeGetterCallback, HTMLTableElementV8Internal::tHeadAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"tFoot", HTMLTableElementV8Internal::tFootAttributeGetterCallback, HTMLTableElementV8Internal::tFootAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"tBodies", HTMLTableElementV8Internal::tBodiesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"rows", HTMLTableElementV8Internal::rowsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"align", HTMLTableElementV8Internal::alignAttributeGetterCallback, HTMLTableElementV8Internal::alignAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"border", HTMLTableElementV8Internal::borderAttributeGetterCallback, HTMLTableElementV8Internal::borderAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"frame", HTMLTableElementV8Internal::frameAttributeGetterCallback, HTMLTableElementV8Internal::frameAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"rules", HTMLTableElementV8Internal::rulesAttributeGetterCallback, HTMLTableElementV8Internal::rulesAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"summary", HTMLTableElementV8Internal::summaryAttributeGetterCallback, HTMLTableElementV8Internal::summaryAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"width", HTMLTableElementV8Internal::widthAttributeGetterCallback, HTMLTableElementV8Internal::widthAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bgColor", HTMLTableElementV8Internal::bgColorAttributeGetterCallback, HTMLTableElementV8Internal::bgColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cellPadding", HTMLTableElementV8Internal::cellPaddingAttributeGetterCallback, HTMLTableElementV8Internal::cellPaddingAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cellSpacing", HTMLTableElementV8Internal::cellSpacingAttributeGetterCallback, HTMLTableElementV8Internal::cellSpacingAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8HTMLTableElementMethods[] = {
    {"createCaption", HTMLTableElementV8Internal::createCaptionMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"deleteCaption", HTMLTableElementV8Internal::deleteCaptionMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"createTHead", HTMLTableElementV8Internal::createTHeadMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"deleteTHead", HTMLTableElementV8Internal::deleteTHeadMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"createTFoot", HTMLTableElementV8Internal::createTFootMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"deleteTFoot", HTMLTableElementV8Internal::deleteTFootMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"createTBody", HTMLTableElementV8Internal::createTBodyMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"insertRow", HTMLTableElementV8Internal::insertRowMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"deleteRow", HTMLTableElementV8Internal::deleteRowMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8HTMLTableElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLTableElement::wrapperTypeInfo.interfaceName, V8HTMLElement::domTemplate(isolate, world), V8HTMLTableElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLTableElementAccessors, WTF_ARRAY_LENGTH(V8HTMLTableElementAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLTableElementMethods, WTF_ARRAY_LENGTH(V8HTMLTableElementMethods));
}

v8::Local<v8::FunctionTemplate> V8HTMLTableElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLTableElementTemplate);
}

bool V8HTMLTableElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLTableElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLTableElement* V8HTMLTableElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
