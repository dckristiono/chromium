// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaTrackSettings_h
#define MediaTrackSettings_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaTrackSettings : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaTrackSettings();
    virtual ~MediaTrackSettings();

    bool hasAspectRatio() const { return !m_aspectRatio.isNull(); }
    double aspectRatio() const { return m_aspectRatio.get(); }
    void setAspectRatio(double value) { m_aspectRatio = value; }

    bool hasChannelCount() const { return !m_channelCount.isNull(); }
    int channelCount() const { return m_channelCount.get(); }
    void setChannelCount(int value) { m_channelCount = value; }

    bool hasDeviceId() const { return !m_deviceId.isNull(); }
    String deviceId() const { return m_deviceId; }
    void setDeviceId(String value) { m_deviceId = value; }

    bool hasEchoCancellation() const { return !m_echoCancellation.isNull(); }
    bool echoCancellation() const { return m_echoCancellation.get(); }
    void setEchoCancellation(bool value) { m_echoCancellation = value; }

    bool hasFacingMode() const { return !m_facingMode.isNull(); }
    String facingMode() const { return m_facingMode; }
    void setFacingMode(String value) { m_facingMode = value; }

    bool hasFrameRate() const { return !m_frameRate.isNull(); }
    double frameRate() const { return m_frameRate.get(); }
    void setFrameRate(double value) { m_frameRate = value; }

    bool hasGroupId() const { return !m_groupId.isNull(); }
    String groupId() const { return m_groupId; }
    void setGroupId(String value) { m_groupId = value; }

    bool hasHeight() const { return !m_height.isNull(); }
    int height() const { return m_height.get(); }
    void setHeight(int value) { m_height = value; }

    bool hasLatency() const { return !m_latency.isNull(); }
    double latency() const { return m_latency.get(); }
    void setLatency(double value) { m_latency = value; }

    bool hasSampleRate() const { return !m_sampleRate.isNull(); }
    int sampleRate() const { return m_sampleRate.get(); }
    void setSampleRate(int value) { m_sampleRate = value; }

    bool hasSampleSize() const { return !m_sampleSize.isNull(); }
    int sampleSize() const { return m_sampleSize.get(); }
    void setSampleSize(int value) { m_sampleSize = value; }

    bool hasVolume() const { return !m_volume.isNull(); }
    double volume() const { return m_volume.get(); }
    void setVolume(double value) { m_volume = value; }

    bool hasWidth() const { return !m_width.isNull(); }
    int width() const { return m_width.get(); }
    void setWidth(int value) { m_width = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_aspectRatio;
    Nullable<int> m_channelCount;
    String m_deviceId;
    Nullable<bool> m_echoCancellation;
    String m_facingMode;
    Nullable<double> m_frameRate;
    String m_groupId;
    Nullable<int> m_height;
    Nullable<double> m_latency;
    Nullable<int> m_sampleRate;
    Nullable<int> m_sampleSize;
    Nullable<double> m_volume;
    Nullable<int> m_width;

    friend class V8MediaTrackSettings;
};

} // namespace blink

#endif // MediaTrackSettings_h
