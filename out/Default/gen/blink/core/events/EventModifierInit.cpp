// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "EventModifierInit.h"

namespace blink {

EventModifierInit::EventModifierInit()
{
    setAltKey(false);
    setCtrlKey(false);
    setMetaKey(false);
    setModifierAltGraph(false);
    setModifierCapsLock(false);
    setModifierFn(false);
    setModifierNumLock(false);
    setModifierScrollLock(false);
    setModifierSymbol(false);
    setShiftKey(false);
}

EventModifierInit::~EventModifierInit()
{
}

DEFINE_TRACE(EventModifierInit)
{
    UIEventInit::trace(visitor);
}

} // namespace blink
