// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_STATUS_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_STATUS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/permissions/permission_status.mojom-shared-internal.h"
namespace blink {
namespace mojom {

enum class PermissionStatus : int32_t {
  GRANTED,
  DENIED,
  ASK,
  LAST = PermissionStatus::ASK,
};

inline std::ostream& operator<<(std::ostream& os, PermissionStatus value) {
  switch(value) {
    case PermissionStatus::GRANTED:
      return os << "PermissionStatus::GRANTED";
    case PermissionStatus::DENIED:
      return os << "PermissionStatus::DENIED";
    case PermissionStatus::ASK:
      return os << "PermissionStatus::{ASK, LAST}";
    default:
      return os << "Unknown PermissionStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PermissionStatus value) {
  return internal::PermissionStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PermissionStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PermissionStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PermissionStatus, ::blink::mojom::PermissionStatus> {
  static ::blink::mojom::PermissionStatus ToMojom(::blink::mojom::PermissionStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PermissionStatus input, ::blink::mojom::PermissionStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PermissionStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PermissionStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_STATUS_MOJOM_SHARED_H_