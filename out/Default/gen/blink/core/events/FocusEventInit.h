// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef FocusEventInit_h
#define FocusEventInit_h

#include "core/CoreExport.h"
#include "core/events/EventTarget.h"
#include "core/events/UIEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT FocusEventInit : public UIEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    FocusEventInit();
    virtual ~FocusEventInit();

    bool hasRelatedTarget() const { return m_relatedTarget; }
    EventTarget* relatedTarget() const { return m_relatedTarget; }
    void setRelatedTarget(EventTarget* value) { m_relatedTarget = value; }
    void setRelatedTargetToNull() { m_relatedTarget = Member<EventTarget>(); }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Member<EventTarget> m_relatedTarget;

    friend class V8FocusEventInit;
};

} // namespace blink

#endif // FocusEventInit_h