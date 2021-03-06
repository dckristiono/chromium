// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ExtendableEventInit_h
#define ExtendableEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT ExtendableEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    ExtendableEventInit();
    virtual ~ExtendableEventInit();

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:

    friend class V8ExtendableEventInit;
};

} // namespace blink

#endif // ExtendableEventInit_h
