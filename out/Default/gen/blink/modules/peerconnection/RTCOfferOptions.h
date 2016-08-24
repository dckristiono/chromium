// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef RTCOfferOptions_h
#define RTCOfferOptions_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/peerconnection/RTCOfferAnswerOptions.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT RTCOfferOptions : public RTCOfferAnswerOptions {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    RTCOfferOptions();
    virtual ~RTCOfferOptions();

    bool hasIceRestart() const { return !m_iceRestart.isNull(); }
    bool iceRestart() const { return m_iceRestart.get(); }
    void setIceRestart(bool value) { m_iceRestart = value; }

    bool hasOfferToReceiveAudio() const { return !m_offerToReceiveAudio.isNull(); }
    int offerToReceiveAudio() const { return m_offerToReceiveAudio.get(); }
    void setOfferToReceiveAudio(int value) { m_offerToReceiveAudio = value; }

    bool hasOfferToReceiveVideo() const { return !m_offerToReceiveVideo.isNull(); }
    int offerToReceiveVideo() const { return m_offerToReceiveVideo.get(); }
    void setOfferToReceiveVideo(int value) { m_offerToReceiveVideo = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_iceRestart;
    Nullable<int> m_offerToReceiveAudio;
    Nullable<int> m_offerToReceiveVideo;

    friend class V8RTCOfferOptions;
};

} // namespace blink

#endif // RTCOfferOptions_h
