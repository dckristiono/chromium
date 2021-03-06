
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../content/public/browser/navigation_controller.h

package org.chromium.content_public.browser.navigation_controller;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class UserAgentOverrideOption {
  @IntDef({
      INHERIT, FALSE, TRUE
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface UserAgentOverrideOptionEnum {}
  public static final int INHERIT = 0;
  public static final int FALSE = 1;
  public static final int TRUE = 2;
}
