// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef FilePropertyBag_h
#define FilePropertyBag_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/fileapi/BlobPropertyBag.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT FilePropertyBag : public BlobPropertyBag {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    FilePropertyBag();
    virtual ~FilePropertyBag();

    bool hasLastModified() const { return !m_lastModified.isNull(); }
    long long lastModified() const { return m_lastModified.get(); }
    void setLastModified(long long value) { m_lastModified = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<long long> m_lastModified;

    friend class V8FilePropertyBag;
};

} // namespace blink

#endif // FilePropertyBag_h