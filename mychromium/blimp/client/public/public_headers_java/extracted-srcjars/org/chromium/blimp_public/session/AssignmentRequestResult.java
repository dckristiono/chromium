
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../blimp/client/public/session/assignment.h

package org.chromium.blimp_public.session;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class AssignmentRequestResult {
  @IntDef({
      UNKNOWN, OK, BAD_REQUEST, BAD_RESPONSE, INVALID_PROTOCOL_VERSION, EXPIRED_ACCESS_TOKEN,
      USER_INVALID, OUT_OF_VMS, SERVER_ERROR, SERVER_INTERRUPTED, NETWORK_FAILURE, INVALID_CERT
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface AssignmentRequestResultEnum {}
  public static final int UNKNOWN = 0;
  public static final int OK = 1;
  public static final int BAD_REQUEST = 2;
  public static final int BAD_RESPONSE = 3;
  public static final int INVALID_PROTOCOL_VERSION = 4;
  public static final int EXPIRED_ACCESS_TOKEN = 5;
  public static final int USER_INVALID = 6;
  public static final int OUT_OF_VMS = 7;
  public static final int SERVER_ERROR = 8;
  public static final int SERVER_INTERRUPTED = 9;
  public static final int NETWORK_FAILURE = 10;
  public static final int INVALID_CERT = 11;
}