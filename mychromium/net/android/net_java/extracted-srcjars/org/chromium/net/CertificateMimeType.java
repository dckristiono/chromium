
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../net/base/mime_util.h

package org.chromium.net;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class CertificateMimeType {
  @IntDef({
      UNKNOWN, X509_USER_CERT, X509_CA_CERT, PKCS12_ARCHIVE
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface CertificateMimeTypeEnum {}
  public static final int UNKNOWN = 0;
  public static final int X509_USER_CERT = 1;
  public static final int X509_CA_CERT = 2;
  public static final int PKCS12_ARCHIVE = 3;
}
