// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/output_protection.mojom-shared-internal.h"
namespace media {
namespace mojom {

enum class OutputProtection_ProtectionType : int32_t {
  NONE = 0,
  HDCP = 1,
};

inline std::ostream& operator<<(std::ostream& os, OutputProtection_ProtectionType value) {
  switch(value) {
    case OutputProtection_ProtectionType::NONE:
      return os << "OutputProtection_ProtectionType::NONE";
    case OutputProtection_ProtectionType::HDCP:
      return os << "OutputProtection_ProtectionType::HDCP";
    default:
      return os << "Unknown OutputProtection_ProtectionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(OutputProtection_ProtectionType value) {
  return internal::OutputProtection_ProtectionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class OutputProtection_LinkType : int32_t {
  NONE = 0,
  UNKNOWN = 1,
  INTERNAL = 2,
  VGA = 4,
  HDMI = 8,
  DVI = 16,
  DISPLAYPORT = 32,
  NETWORK = 64,
};

inline std::ostream& operator<<(std::ostream& os, OutputProtection_LinkType value) {
  switch(value) {
    case OutputProtection_LinkType::NONE:
      return os << "OutputProtection_LinkType::NONE";
    case OutputProtection_LinkType::UNKNOWN:
      return os << "OutputProtection_LinkType::UNKNOWN";
    case OutputProtection_LinkType::INTERNAL:
      return os << "OutputProtection_LinkType::INTERNAL";
    case OutputProtection_LinkType::VGA:
      return os << "OutputProtection_LinkType::VGA";
    case OutputProtection_LinkType::HDMI:
      return os << "OutputProtection_LinkType::HDMI";
    case OutputProtection_LinkType::DVI:
      return os << "OutputProtection_LinkType::DVI";
    case OutputProtection_LinkType::DISPLAYPORT:
      return os << "OutputProtection_LinkType::DISPLAYPORT";
    case OutputProtection_LinkType::NETWORK:
      return os << "OutputProtection_LinkType::NETWORK";
    default:
      return os << "Unknown OutputProtection_LinkType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(OutputProtection_LinkType value) {
  return internal::OutputProtection_LinkType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::OutputProtection_ProtectionType>
    : public mojo::internal::EnumHashImpl<::media::mojom::OutputProtection_ProtectionType> {};

template <>
struct hash<::media::mojom::OutputProtection_LinkType>
    : public mojo::internal::EnumHashImpl<::media::mojom::OutputProtection_LinkType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::OutputProtection_ProtectionType, ::media::mojom::OutputProtection_ProtectionType> {
  static ::media::mojom::OutputProtection_ProtectionType ToMojom(::media::mojom::OutputProtection_ProtectionType input) { return input; }
  static bool FromMojom(::media::mojom::OutputProtection_ProtectionType input, ::media::mojom::OutputProtection_ProtectionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::OutputProtection_ProtectionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::OutputProtection_ProtectionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::OutputProtection_ProtectionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::OutputProtection_LinkType, ::media::mojom::OutputProtection_LinkType> {
  static ::media::mojom::OutputProtection_LinkType ToMojom(::media::mojom::OutputProtection_LinkType input) { return input; }
  static bool FromMojom(::media::mojom::OutputProtection_LinkType input, ::media::mojom::OutputProtection_LinkType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::OutputProtection_LinkType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::OutputProtection_LinkType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::OutputProtection_LinkType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_
