// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8MediaStreamTrackSourcesCallback_h
#define V8MediaStreamTrackSourcesCallback_h

#include "bindings/core/v8/ActiveDOMCallback.h"
#include "bindings/core/v8/DOMWrapperWorld.h"
#include "bindings/core/v8/ScopedPersistent.h"
#include "modules/ModulesExport.h"
#include "modules/mediastream/MediaStreamTrackSourcesCallback.h"

namespace blink {

class V8MediaStreamTrackSourcesCallback final : public MediaStreamTrackSourcesCallback, public ActiveDOMCallback {
    USING_GARBAGE_COLLECTED_MIXIN(V8MediaStreamTrackSourcesCallback);
public:
    static V8MediaStreamTrackSourcesCallback* create(v8::Local<v8::Function> callback, ScriptState* scriptState)
    {
        return new V8MediaStreamTrackSourcesCallback(callback, scriptState);
    }

    ~V8MediaStreamTrackSourcesCallback() override;

    DECLARE_VIRTUAL_TRACE();

    void handleEvent(const HeapVector<Member<SourceInfo>>& sources) override;
private:
    MODULES_EXPORT V8MediaStreamTrackSourcesCallback(v8::Local<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};
}
#endif // V8MediaStreamTrackSourcesCallback_h
