
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../components/browsing_data/core/browsing_data_utils.h

package org.chromium.chrome.browser.browsing_data;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class TimePeriod {
  @IntDef({
      LAST_HOUR, LAST_DAY, LAST_WEEK, FOUR_WEEKS, ALL_TIME, TIME_PERIOD_LAST
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface TimePeriodEnum {}
  public static final int LAST_HOUR = 0;
  public static final int LAST_DAY = 1;
  public static final int LAST_WEEK = 2;
  public static final int FOUR_WEEKS = 3;
  public static final int ALL_TIME = 4;
  public static final int TIME_PERIOD_LAST = 4;
}
