// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef NotificationAction_h
#define NotificationAction_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT NotificationAction : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    NotificationAction();
    virtual ~NotificationAction();

    bool hasAction() const { return !m_action.isNull(); }
    String action() const { return m_action; }
    void setAction(String value) { m_action = value; }

    bool hasIcon() const { return !m_icon.isNull(); }
    String icon() const { return m_icon; }
    void setIcon(String value) { m_icon = value; }

    bool hasPlaceholder() const { return !m_placeholder.isNull(); }
    String placeholder() const { return m_placeholder; }
    void setPlaceholder(String value) { m_placeholder = value; }
    void setPlaceholderToNull() { m_placeholder = String(); }

    bool hasTitle() const { return !m_title.isNull(); }
    String title() const { return m_title; }
    void setTitle(String value) { m_title = value; }

    bool hasType() const { return !m_type.isNull(); }
    String type() const { return m_type; }
    void setType(String value) { m_type = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_action;
    String m_icon;
    String m_placeholder;
    String m_title;
    String m_type;

    friend class V8NotificationAction;
};

} // namespace blink

#endif // NotificationAction_h
