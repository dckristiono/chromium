
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../net/android/traffic_stats.cc

package org.chromium.net;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class TrafficStatsError {
  @IntDef({
      ERROR_NOT_SUPPORTED
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface TrafficStatsErrorEnum {}
  /**
   * Value returned by AndroidTrafficStats APIs when a valid value is unavailable.
   */
  public static final int ERROR_NOT_SUPPORTED = 0;
}
