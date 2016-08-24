// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef DoubleOrStringOrStringSequence_h
#define DoubleOrStringOrStringSequence_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT DoubleOrStringOrStringSequence final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    DoubleOrStringOrStringSequence();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isDouble() const { return m_type == SpecificTypeDouble; }
    double getAsDouble() const;
    void setDouble(double);
    static DoubleOrStringOrStringSequence fromDouble(double);

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static DoubleOrStringOrStringSequence fromString(String);

    bool isStringSequence() const { return m_type == SpecificTypeStringSequence; }
    const Vector<String>& getAsStringSequence() const;
    void setStringSequence(const Vector<String>&);
    static DoubleOrStringOrStringSequence fromStringSequence(const Vector<String>&);

    DoubleOrStringOrStringSequence(const DoubleOrStringOrStringSequence&);
    ~DoubleOrStringOrStringSequence();
    DoubleOrStringOrStringSequence& operator=(const DoubleOrStringOrStringSequence&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeDouble,
        SpecificTypeString,
        SpecificTypeStringSequence,
    };
    SpecificTypes m_type;

    double m_double;
    String m_string;
    Vector<String> m_stringSequence;

    friend CORE_EXPORT v8::Local<v8::Value> toV8(const DoubleOrStringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DoubleOrStringOrStringSequence final {
public:
    CORE_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, DoubleOrStringOrStringSequence&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> toV8(const DoubleOrStringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrStringOrStringSequence& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DoubleOrStringOrStringSequence> {
    CORE_EXPORT static DoubleOrStringOrStringSequence nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DoubleOrStringOrStringSequence);

#endif // DoubleOrStringOrStringSequence_h
