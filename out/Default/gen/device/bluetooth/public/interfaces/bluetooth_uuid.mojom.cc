// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/bluetooth/public/interfaces/bluetooth_uuid.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
namespace device {
namespace mojom {

namespace {

}  // namespace// static
BluetoothUUIDPtr BluetoothUUID::New() {
  BluetoothUUIDPtr rv;
  mojo::internal::StructHelper<BluetoothUUID>::Initialize(&rv);
  return rv;
}

BluetoothUUID::BluetoothUUID()
    : uuid(nullptr) {
}

BluetoothUUID::~BluetoothUUID() {
}
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::BluetoothUUID, ::device::mojom::BluetoothUUIDPtr>::Read(
    ::device::mojom::BluetoothUUIDDataView input,
    ::device::mojom::BluetoothUUIDPtr* output) {
  bool success = true;
  ::device::mojom::BluetoothUUIDPtr result(::device::mojom::BluetoothUUID::New());
  
      if (!input.ReadUuid(&result->uuid))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif