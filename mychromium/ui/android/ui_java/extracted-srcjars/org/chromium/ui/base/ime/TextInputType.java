
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../ui/base/ime/text_input_type.h

package org.chromium.ui.base.ime;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class TextInputType {
  @IntDef({
      NONE, TEXT, PASSWORD, SEARCH, EMAIL, NUMBER, TELEPHONE, URL, DATE, DATE_TIME, DATE_TIME_LOCAL,
      MONTH, TIME, WEEK, TEXT_AREA, CONTENT_EDITABLE, DATE_TIME_FIELD, MAX
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface TextInputTypeEnum {}
  public static final int NONE = 0;
  public static final int TEXT = 1;
  public static final int PASSWORD = 2;
  public static final int SEARCH = 3;
  public static final int EMAIL = 4;
  public static final int NUMBER = 5;
  public static final int TELEPHONE = 6;
  public static final int URL = 7;
  public static final int DATE = 8;
  public static final int DATE_TIME = 9;
  public static final int DATE_TIME_LOCAL = 10;
  public static final int MONTH = 11;
  public static final int TIME = 12;
  public static final int WEEK = 13;
  public static final int TEXT_AREA = 14;
  public static final int CONTENT_EDITABLE = 15;
  public static final int DATE_TIME_FIELD = 16;
  public static final int MAX = 16;
}
