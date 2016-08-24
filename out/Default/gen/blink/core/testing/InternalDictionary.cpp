// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "InternalDictionary.h"

#include "bindings/core/v8/DoubleOrString.h"

namespace blink {

InternalDictionary::InternalDictionary()
{
    setEnumMemberWithDefault(String("foo"));
    setLongMemberWithDefault(42);
    setStringMemberWithDefault(String("defaultStringValue"));
    setStringSequenceMemberWithDefault(Vector<String>());
}

InternalDictionary::~InternalDictionary()
{
}

DEFINE_TRACE(InternalDictionary)
{
    visitor->trace(m_doubleOrStringMember);
    visitor->trace(m_doubleOrStringSequenceMember);
    visitor->trace(m_elementMember);
    visitor->trace(m_elementOrNullMember);
    visitor->trace(m_eventTargetOrNullMember);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
