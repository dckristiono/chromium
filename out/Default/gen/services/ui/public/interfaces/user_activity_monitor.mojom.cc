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

#include "services/ui/public/interfaces/user_activity_monitor.mojom.h"

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
#include "cc/ipc/quads_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace ui {
namespace mojom {

namespace {

class UserActivityObserver_OnUserActivity_ParamsDataView {
 public:
  UserActivityObserver_OnUserActivity_ParamsDataView() {}

  UserActivityObserver_OnUserActivity_ParamsDataView(
      internal::UserActivityObserver_OnUserActivity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UserActivityObserver_OnUserActivity_Params_Data* data_ = nullptr;
};




class UserIdleObserver_OnUserIdleStateChanged_ParamsDataView {
 public:
  UserIdleObserver_OnUserIdleStateChanged_ParamsDataView() {}

  UserIdleObserver_OnUserIdleStateChanged_ParamsDataView(
      internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadNewState(UserType* output) const {
    auto data_value = data_->new_state;
    return mojo::internal::Deserialize<::ui::mojom::UserIdleObserver::IdleState>(
        data_value, output);
  }

  ::ui::mojom::UserIdleObserver::IdleState new_state() const {
    return static_cast<::ui::mojom::UserIdleObserver::IdleState>(data_->new_state);
  }
 private:
  internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* data_ = nullptr;
};




class UserActivityMonitor_AddUserActivityObserver_ParamsDataView {
 public:
  UserActivityMonitor_AddUserActivityObserver_ParamsDataView() {}

  UserActivityMonitor_AddUserActivityObserver_ParamsDataView(
      internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t delay_between_notify_secs() const {
    return data_->delay_between_notify_secs;
  }
  UserActivityObserverPtr TakeObserver() {
    UserActivityObserverPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::UserActivityObserverPtr>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class UserActivityMonitor_AddUserIdleObserver_ParamsDataView {
 public:
  UserActivityMonitor_AddUserIdleObserver_ParamsDataView() {}

  UserActivityMonitor_AddUserIdleObserver_ParamsDataView(
      internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t idle_time_in_minutes() const {
    return data_->idle_time_in_minutes;
  }
  UserIdleObserverPtr TakeObserver() {
    UserIdleObserverPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::UserIdleObserverPtr>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char UserActivityObserver::Name_[] = "ui::mojom::UserActivityObserver";
const uint32_t UserActivityObserver::Version_;

UserActivityObserverProxy::UserActivityObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void UserActivityObserverProxy::OnUserActivity(
    ) {
  size_t size = sizeof(::ui::mojom::internal::UserActivityObserver_OnUserActivity_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kUserActivityObserver_OnUserActivity_Name, size);

  auto params =
      ::ui::mojom::internal::UserActivityObserver_OnUserActivity_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

UserActivityObserverStub::UserActivityObserverStub()
    : sink_(nullptr),
      control_message_handler_(UserActivityObserver::Version_) {
}

UserActivityObserverStub::~UserActivityObserverStub() {}

bool UserActivityObserverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
      internal::UserActivityObserver_OnUserActivity_Params_Data* params =
          reinterpret_cast<internal::UserActivityObserver_OnUserActivity_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      UserActivityObserver_OnUserActivity_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UserActivityObserver::OnUserActivity deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UserActivityObserver::OnUserActivity");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnUserActivity();
      return true;
    }
  }
  return false;
}

bool UserActivityObserverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
      break;
    }
  }
  return false;
}

UserActivityObserverRequestValidator::UserActivityObserverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UserActivityObserverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "UserActivityObserver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityObserver_OnUserActivity_Params_Data>(
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

const char UserIdleObserver::Name_[] = "ui::mojom::UserIdleObserver";
const uint32_t UserIdleObserver::Version_;

UserIdleObserverProxy::UserIdleObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void UserIdleObserverProxy::OnUserIdleStateChanged(
    UserIdleObserver::IdleState in_new_state) {
  size_t size = sizeof(::ui::mojom::internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kUserIdleObserver_OnUserIdleStateChanged_Name, size);

  auto params =
      ::ui::mojom::internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::UserIdleObserver::IdleState>(
      in_new_state, &params->new_state);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

UserIdleObserverStub::UserIdleObserverStub()
    : sink_(nullptr),
      control_message_handler_(UserIdleObserver::Version_) {
}

UserIdleObserverStub::~UserIdleObserverStub() {}

bool UserIdleObserverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
      internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* params =
          reinterpret_cast<internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      UserIdleObserver::IdleState p_new_state{};
      UserIdleObserver_OnUserIdleStateChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadNewState(&p_new_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UserIdleObserver::OnUserIdleStateChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UserIdleObserver::OnUserIdleStateChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnUserIdleStateChanged(
std::move(p_new_state));
      return true;
    }
  }
  return false;
}

bool UserIdleObserverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
      break;
    }
  }
  return false;
}

UserIdleObserverRequestValidator::UserIdleObserverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UserIdleObserverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "UserIdleObserver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data>(
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

const char UserActivityMonitor::Name_[] = "ui::mojom::UserActivityMonitor";
const uint32_t UserActivityMonitor::Version_;

UserActivityMonitorProxy::UserActivityMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void UserActivityMonitorProxy::AddUserActivityObserver(
    uint32_t in_delay_between_notify_secs, UserActivityObserverPtr in_observer) {
  size_t size = sizeof(::ui::mojom::internal::UserActivityMonitor_AddUserActivityObserver_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kUserActivityMonitor_AddUserActivityObserver_Name, size);

  auto params =
      ::ui::mojom::internal::UserActivityMonitor_AddUserActivityObserver_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->delay_between_notify_secs = in_delay_between_notify_secs;
  mojo::internal::Serialize<::ui::mojom::UserActivityObserverPtr>(
      in_observer, &params->observer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in UserActivityMonitor.AddUserActivityObserver request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void UserActivityMonitorProxy::AddUserIdleObserver(
    uint32_t in_idle_time_in_minutes, UserIdleObserverPtr in_observer) {
  size_t size = sizeof(::ui::mojom::internal::UserActivityMonitor_AddUserIdleObserver_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kUserActivityMonitor_AddUserIdleObserver_Name, size);

  auto params =
      ::ui::mojom::internal::UserActivityMonitor_AddUserIdleObserver_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->idle_time_in_minutes = in_idle_time_in_minutes;
  mojo::internal::Serialize<::ui::mojom::UserIdleObserverPtr>(
      in_observer, &params->observer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in UserActivityMonitor.AddUserIdleObserver request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

UserActivityMonitorStub::UserActivityMonitorStub()
    : sink_(nullptr),
      control_message_handler_(UserActivityMonitor::Version_) {
}

UserActivityMonitorStub::~UserActivityMonitorStub() {}

bool UserActivityMonitorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
      internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* params =
          reinterpret_cast<internal::UserActivityMonitor_AddUserActivityObserver_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_delay_between_notify_secs{};
      UserActivityObserverPtr p_observer{};
      UserActivityMonitor_AddUserActivityObserver_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_delay_between_notify_secs = input_data_view.delay_between_notify_secs();
      p_observer = input_data_view.TakeObserver();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UserActivityMonitor::AddUserActivityObserver deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UserActivityMonitor::AddUserActivityObserver");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddUserActivityObserver(
std::move(p_delay_between_notify_secs), 
std::move(p_observer));
      return true;
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
      internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* params =
          reinterpret_cast<internal::UserActivityMonitor_AddUserIdleObserver_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_idle_time_in_minutes{};
      UserIdleObserverPtr p_observer{};
      UserActivityMonitor_AddUserIdleObserver_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_idle_time_in_minutes = input_data_view.idle_time_in_minutes();
      p_observer = input_data_view.TakeObserver();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UserActivityMonitor::AddUserIdleObserver deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UserActivityMonitor::AddUserIdleObserver");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddUserIdleObserver(
std::move(p_idle_time_in_minutes), 
std::move(p_observer));
      return true;
    }
  }
  return false;
}

bool UserActivityMonitorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
      break;
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
      break;
    }
  }
  return false;
}

UserActivityMonitorRequestValidator::UserActivityMonitorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UserActivityMonitorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "UserActivityMonitor RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityMonitor_AddUserActivityObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityMonitor_AddUserIdleObserver_Params_Data>(
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
}  // namespace ui

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif