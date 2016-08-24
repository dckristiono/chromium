
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../ui/touch_selection/selection_event_type.h

package org.chromium.ui.touch_selection;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class SelectionEventType {
  @IntDef({
      SELECTION_HANDLES_SHOWN, SELECTION_HANDLES_MOVED, SELECTION_HANDLES_CLEARED,
      SELECTION_HANDLE_DRAG_STARTED, SELECTION_HANDLE_DRAG_STOPPED, INSERTION_HANDLE_SHOWN,
      INSERTION_HANDLE_MOVED, INSERTION_HANDLE_TAPPED, INSERTION_HANDLE_CLEARED,
      INSERTION_HANDLE_DRAG_STARTED, INSERTION_HANDLE_DRAG_STOPPED, SELECTION_ESTABLISHED,
      SELECTION_DISSOLVED
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface SelectionEventTypeEnum {}
  public static final int SELECTION_HANDLES_SHOWN = 0;
  public static final int SELECTION_HANDLES_MOVED = 1;
  public static final int SELECTION_HANDLES_CLEARED = 2;
  public static final int SELECTION_HANDLE_DRAG_STARTED = 3;
  public static final int SELECTION_HANDLE_DRAG_STOPPED = 4;
  public static final int INSERTION_HANDLE_SHOWN = 5;
  public static final int INSERTION_HANDLE_MOVED = 6;
  public static final int INSERTION_HANDLE_TAPPED = 7;
  public static final int INSERTION_HANDLE_CLEARED = 8;
  public static final int INSERTION_HANDLE_DRAG_STARTED = 9;
  public static final int INSERTION_HANDLE_DRAG_STOPPED = 10;
  public static final int SELECTION_ESTABLISHED = 11;
  public static final int SELECTION_DISSOLVED = 12;
}