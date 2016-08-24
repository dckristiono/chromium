
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../device/gamepad/gamepad_standard_mappings.h

package org.chromium.device.gamepad;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class CanonicalAxisIndex {
  @IntDef({
      LEFT_STICK_X, LEFT_STICK_Y, RIGHT_STICK_X, RIGHT_STICK_Y, COUNT
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface CanonicalAxisIndexEnum {}
  public static final int LEFT_STICK_X = 0;
  public static final int LEFT_STICK_Y = 1;
  public static final int RIGHT_STICK_X = 2;
  public static final int RIGHT_STICK_Y = 3;
  public static final int COUNT = 4;
}