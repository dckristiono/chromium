// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ClientQueryOptions_h
#define ClientQueryOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT ClientQueryOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    ClientQueryOptions();
    virtual ~ClientQueryOptions();

    bool hasIncludeUncontrolled() const { return !m_includeUncontrolled.isNull(); }
    bool includeUncontrolled() const { return m_includeUncontrolled.get(); }
    void setIncludeUncontrolled(bool value) { m_includeUncontrolled = value; }

    bool hasType() const { return !m_type.isNull(); }
    String type() const { return m_type; }
    void setType(String value) { m_type = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_includeUncontrolled;
    String m_type;

    friend class V8ClientQueryOptions;
};

} // namespace blink

#endif // ClientQueryOptions_h
