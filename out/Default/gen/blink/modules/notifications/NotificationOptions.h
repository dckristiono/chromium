// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef NotificationOptions_h
#define NotificationOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/modules/v8/UnsignedLongOrUnsignedLongSequence.h"
#include "modules/ModulesExport.h"
#include "modules/notifications/NotificationAction.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT NotificationOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    NotificationOptions();
    virtual ~NotificationOptions();

    bool hasActions() const { return !m_actions.isNull(); }
    const HeapVector<NotificationAction>& actions() const { return m_actions.get(); }
    void setActions(const HeapVector<NotificationAction>& value) { m_actions = value; }

    bool hasBadge() const { return !m_badge.isNull(); }
    String badge() const { return m_badge; }
    void setBadge(String value) { m_badge = value; }

    bool hasBody() const { return !m_body.isNull(); }
    String body() const { return m_body; }
    void setBody(String value) { m_body = value; }

    bool hasData() const { return !(m_data.isEmpty() || m_data.isNull() || m_data.isUndefined()); }
    ScriptValue data() const { return m_data; }
    void setData(ScriptValue value) { m_data = value; }

    bool hasDir() const { return !m_dir.isNull(); }
    String dir() const { return m_dir; }
    void setDir(String value) { m_dir = value; }

    bool hasIcon() const { return !m_icon.isNull(); }
    String icon() const { return m_icon; }
    void setIcon(String value) { m_icon = value; }

    bool hasLang() const { return !m_lang.isNull(); }
    String lang() const { return m_lang; }
    void setLang(String value) { m_lang = value; }

    bool hasRenotify() const { return !m_renotify.isNull(); }
    bool renotify() const { return m_renotify.get(); }
    void setRenotify(bool value) { m_renotify = value; }

    bool hasRequireInteraction() const { return !m_requireInteraction.isNull(); }
    bool requireInteraction() const { return m_requireInteraction.get(); }
    void setRequireInteraction(bool value) { m_requireInteraction = value; }

    bool hasSilent() const { return !m_silent.isNull(); }
    bool silent() const { return m_silent.get(); }
    void setSilent(bool value) { m_silent = value; }

    bool hasTag() const { return !m_tag.isNull(); }
    String tag() const { return m_tag; }
    void setTag(String value) { m_tag = value; }

    bool hasTimestamp() const { return !m_timestamp.isNull(); }
    unsigned long long timestamp() const { return m_timestamp.get(); }
    void setTimestamp(unsigned long long value) { m_timestamp = value; }

    bool hasVibrate() const { return !m_vibrate.isNull(); }
    const UnsignedLongOrUnsignedLongSequence& vibrate() const { return m_vibrate; }
    void setVibrate(const UnsignedLongOrUnsignedLongSequence& value) { m_vibrate = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<HeapVector<NotificationAction>> m_actions;
    String m_badge;
    String m_body;
    ScriptValue m_data;
    String m_dir;
    String m_icon;
    String m_lang;
    Nullable<bool> m_renotify;
    Nullable<bool> m_requireInteraction;
    Nullable<bool> m_silent;
    String m_tag;
    Nullable<unsigned long long> m_timestamp;
    UnsignedLongOrUnsignedLongSequence m_vibrate;

    friend class V8NotificationOptions;
};

} // namespace blink

#endif // NotificationOptions_h
