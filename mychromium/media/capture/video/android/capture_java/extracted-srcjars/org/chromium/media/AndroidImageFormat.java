
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../media/capture/video/android/video_capture_device_android.h

package org.chromium.media;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class AndroidImageFormat {
  @IntDef({
      NV21, YUV_420_888, YV12, UNKNOWN
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface AndroidImageFormatEnum {}
  public static final int NV21 = 17;
  public static final int YUV_420_888 = 35;
  public static final int YV12 = 842094169;
  public static final int UNKNOWN = 0;
}
