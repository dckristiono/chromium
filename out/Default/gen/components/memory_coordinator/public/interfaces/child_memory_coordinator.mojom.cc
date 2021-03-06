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

#include "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom.h"

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
namespace memory_coordinator {
namespace mojom {

namespace {

class ChildMemoryCoordinator_OnStateChange_ParamsDataView {
 public:
  ChildMemoryCoordinator_OnStateChange_ParamsDataView() {}

  ChildMemoryCoordinator_OnStateChange_ParamsDataView(
      internal::ChildMemoryCoordinator_OnStateChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::memory_coordinator::mojom::MemoryState>(
        data_value, output);
  }

  ::memory_coordinator::mojom::MemoryState state() const {
    return static_cast<::memory_coordinator::mojom::MemoryState>(data_->state);
  }
 private:
  internal::ChildMemoryCoordinator_OnStateChange_Params_Data* data_ = nullptr;
};




}  // namespace
const char ChildMemoryCoordinator::Name_[] = "memory_coordinator::mojom::ChildMemoryCoordinator";
const uint32_t ChildMemoryCoordinator::Version_;

ChildMemoryCoordinatorProxy::ChildMemoryCoordinatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ChildMemoryCoordinatorProxy::OnStateChange(
    MemoryState in_state) {
  size_t size = sizeof(::memory_coordinator::mojom::internal::ChildMemoryCoordinator_OnStateChange_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kChildMemoryCoordinator_OnStateChange_Name, size);

  auto params =
      ::memory_coordinator::mojom::internal::ChildMemoryCoordinator_OnStateChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::memory_coordinator::mojom::MemoryState>(
      in_state, &params->state);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ChildMemoryCoordinatorStub::ChildMemoryCoordinatorStub()
    : sink_(nullptr),
      control_message_handler_(ChildMemoryCoordinator::Version_) {
}

ChildMemoryCoordinatorStub::~ChildMemoryCoordinatorStub() {}

bool ChildMemoryCoordinatorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
      internal::ChildMemoryCoordinator_OnStateChange_Params_Data* params =
          reinterpret_cast<internal::ChildMemoryCoordinator_OnStateChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      MemoryState p_state{};
      ChildMemoryCoordinator_OnStateChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChildMemoryCoordinator::OnStateChange deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ChildMemoryCoordinator::OnStateChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnStateChange(
std::move(p_state));
      return true;
    }
  }
  return false;
}

bool ChildMemoryCoordinatorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
      break;
    }
  }
  return false;
}

ChildMemoryCoordinatorRequestValidator::ChildMemoryCoordinatorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ChildMemoryCoordinatorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ChildMemoryCoordinator RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildMemoryCoordinator_OnStateChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace memory_coordinator

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif