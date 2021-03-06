// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MIDIOptions_h
#define MIDIOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT MIDIOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MIDIOptions();
    virtual ~MIDIOptions();

    bool hasSysex() const { return !m_sysex.isNull(); }
    bool sysex() const { return m_sysex.get(); }
    void setSysex(bool value) { m_sysex = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_sysex;

    friend class V8MIDIOptions;
};

} // namespace blink

#endif // MIDIOptions_h
