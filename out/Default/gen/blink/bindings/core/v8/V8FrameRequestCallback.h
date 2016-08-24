// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8FrameRequestCallback_h
#define V8FrameRequestCallback_h

#include "bindings/core/v8/ActiveDOMCallback.h"
#include "bindings/core/v8/DOMWrapperWorld.h"
#include "bindings/core/v8/ScopedPersistent.h"
#include "core/CoreExport.h"
#include "core/dom/FrameRequestCallback.h"

namespace blink {

class V8FrameRequestCallback final : public FrameRequestCallback, public ActiveDOMCallback {
    USING_GARBAGE_COLLECTED_MIXIN(V8FrameRequestCallback);
public:
    static V8FrameRequestCallback* create(v8::Local<v8::Function> callback, ScriptState* scriptState)
    {
        return new V8FrameRequestCallback(callback, scriptState);
    }

    ~V8FrameRequestCallback() override;

    DECLARE_VIRTUAL_TRACE();

    void handleEvent(double highResTime) override;
private:
    CORE_EXPORT V8FrameRequestCallback(v8::Local<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};
}
#endif // V8FrameRequestCallback_h
