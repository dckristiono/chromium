// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef UIEventInit_h
#define UIEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "core/frame/DOMWindow.h"
#include "core/input/InputDeviceCapabilities.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT UIEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    UIEventInit();
    virtual ~UIEventInit();

    bool hasDetail() const { return !m_detail.isNull(); }
    int detail() const { return m_detail.get(); }
    void setDetail(int value) { m_detail = value; }

    bool hasSourceCapabilities() const { return m_sourceCapabilities; }
    InputDeviceCapabilities* sourceCapabilities() const { return m_sourceCapabilities; }
    void setSourceCapabilities(InputDeviceCapabilities* value) { m_sourceCapabilities = value; }
    void setSourceCapabilitiesToNull() { m_sourceCapabilities = Member<InputDeviceCapabilities>(); }

    bool hasView() const { return m_view; }
    DOMWindow* view() const { return m_view; }
    void setView(DOMWindow* value) { m_view = value; }
    void setViewToNull() { m_view = Member<DOMWindow>(); }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<int> m_detail;
    Member<InputDeviceCapabilities> m_sourceCapabilities;
    Member<DOMWindow> m_view;

    friend class V8UIEventInit;
};

} // namespace blink

#endif // UIEventInit_h
