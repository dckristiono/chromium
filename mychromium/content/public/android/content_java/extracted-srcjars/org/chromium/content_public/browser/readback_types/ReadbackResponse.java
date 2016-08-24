
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../content/public/browser/readback_types.h

package org.chromium.content_public.browser.readback_types;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class ReadbackResponse {
  @IntDef({
      SUCCESS, FAILED, SURFACE_UNAVAILABLE, BITMAP_ALLOCATION_FAILURE
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface ReadbackResponseEnum {}
  public static final int SUCCESS = 0;
  public static final int FAILED = 1;
  public static final int SURFACE_UNAVAILABLE = 2;
  public static final int BITMAP_ALLOCATION_FAILURE = 3;
}
