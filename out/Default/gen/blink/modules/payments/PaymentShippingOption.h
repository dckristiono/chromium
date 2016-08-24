// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PaymentShippingOption_h
#define PaymentShippingOption_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/payments/PaymentCurrencyAmount.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentShippingOption : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PaymentShippingOption();
    virtual ~PaymentShippingOption();

    bool hasAmount() const { return !m_amount.isNull(); }
    const PaymentCurrencyAmount& amount() const { return m_amount.get(); }
    void setAmount(const PaymentCurrencyAmount& value) { m_amount = value; }

    bool hasId() const { return !m_id.isNull(); }
    String id() const { return m_id; }
    void setId(String value) { m_id = value; }

    bool hasLabel() const { return !m_label.isNull(); }
    String label() const { return m_label; }
    void setLabel(String value) { m_label = value; }

    bool hasSelected() const { return !m_selected.isNull(); }
    bool selected() const { return m_selected.get(); }
    void setSelected(bool value) { m_selected = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<PaymentCurrencyAmount> m_amount;
    String m_id;
    String m_label;
    Nullable<bool> m_selected;

    friend class V8PaymentShippingOption;
};

} // namespace blink

#endif // PaymentShippingOption_h