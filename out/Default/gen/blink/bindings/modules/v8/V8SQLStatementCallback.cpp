// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SQLStatementCallback.h"

#include "bindings/core/v8/ScriptController.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/modules/v8/V8SQLResultSet.h"
#include "bindings/modules/v8/V8SQLTransaction.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

V8SQLStatementCallback::V8SQLStatementCallback(v8::Local<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->getExecutionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8SQLStatementCallback::~V8SQLStatementCallback()
{
}

DEFINE_TRACE(V8SQLStatementCallback)
{
    SQLStatementCallback::trace(visitor);
    ActiveDOMCallback::trace(visitor);
}

bool V8SQLStatementCallback::handleEvent(SQLTransaction* transaction, SQLResultSet* resultSet)
{
    if (!canInvokeCallback())
        return true;

    if (!m_scriptState->contextIsValid())
        return true;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Local<v8::Value> transactionHandle = toV8(transaction, m_scriptState->context()->Global(), m_scriptState->isolate());
    v8::Local<v8::Value> resultSetHandle = toV8(resultSet, m_scriptState->context()->Global(), m_scriptState->isolate());
    v8::Local<v8::Value> argv[] = { transactionHandle, resultSetHandle };

    v8::TryCatch exceptionCatcher(m_scriptState->isolate());
    exceptionCatcher.SetVerbose(true);
    V8ScriptRunner::callFunction(m_callback.newLocal(m_scriptState->isolate()), m_scriptState->getExecutionContext(), v8::Undefined(m_scriptState->isolate()), 2, argv, m_scriptState->isolate());
    return !exceptionCatcher.HasCaught();
}

} // namespace blink
