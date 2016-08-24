
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     device/vibration/vibration_manager.mojom
//

package org.chromium.mojom.device;

import org.chromium.base.annotations.SuppressFBWarnings;
import org.chromium.mojo.bindings.DeserializationException;


public interface VibrationManager extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends VibrationManager, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<VibrationManager, VibrationManager.Proxy> MANAGER = VibrationManager_Internal.MANAGER;


    void vibrate(
long milliseconds, 
VibrateResponse callback);

    interface VibrateResponse extends org.chromium.mojo.bindings.Callbacks.Callback0 { }



    void cancel(

CancelResponse callback);

    interface CancelResponse extends org.chromium.mojo.bindings.Callbacks.Callback0 { }


}
