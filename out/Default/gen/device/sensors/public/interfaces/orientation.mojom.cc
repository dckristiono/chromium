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

#include "device/sensors/public/interfaces/orientation.mojom.h"

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
namespace device {
namespace mojom {

namespace {

class OrientationAbsoluteSensor_StartPolling_ParamsDataView {
 public:
  OrientationAbsoluteSensor_StartPolling_ParamsDataView() {}

  OrientationAbsoluteSensor_StartPolling_ParamsDataView(
      internal::OrientationAbsoluteSensor_StartPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OrientationAbsoluteSensor_StartPolling_Params_Data* data_ = nullptr;
};



class OrientationAbsoluteSensor_StartPolling_ResponseParamsDataView {
 public:
  OrientationAbsoluteSensor_StartPolling_ResponseParamsDataView() {}

  OrientationAbsoluteSensor_StartPolling_ResponseParamsDataView(
      internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeMemoryHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class OrientationAbsoluteSensor_StopPolling_ParamsDataView {
 public:
  OrientationAbsoluteSensor_StopPolling_ParamsDataView() {}

  OrientationAbsoluteSensor_StopPolling_ParamsDataView(
      internal::OrientationAbsoluteSensor_StopPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OrientationAbsoluteSensor_StopPolling_Params_Data* data_ = nullptr;
};




class OrientationSensor_StartPolling_ParamsDataView {
 public:
  OrientationSensor_StartPolling_ParamsDataView() {}

  OrientationSensor_StartPolling_ParamsDataView(
      internal::OrientationSensor_StartPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OrientationSensor_StartPolling_Params_Data* data_ = nullptr;
};



class OrientationSensor_StartPolling_ResponseParamsDataView {
 public:
  OrientationSensor_StartPolling_ResponseParamsDataView() {}

  OrientationSensor_StartPolling_ResponseParamsDataView(
      internal::OrientationSensor_StartPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeMemoryHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::OrientationSensor_StartPolling_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class OrientationSensor_StopPolling_ParamsDataView {
 public:
  OrientationSensor_StopPolling_ParamsDataView() {}

  OrientationSensor_StopPolling_ParamsDataView(
      internal::OrientationSensor_StopPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OrientationSensor_StopPolling_Params_Data* data_ = nullptr;
};




}  // namespace
const char OrientationAbsoluteSensor::Name_[] = "device::mojom::OrientationAbsoluteSensor";
const uint32_t OrientationAbsoluteSensor::Version_;

class OrientationAbsoluteSensor_StartPolling_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OrientationAbsoluteSensor_StartPolling_ForwardToCallback(
      const OrientationAbsoluteSensor::StartPollingCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OrientationAbsoluteSensor::StartPollingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(OrientationAbsoluteSensor_StartPolling_ForwardToCallback);
};
bool OrientationAbsoluteSensor_StartPolling_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data* params =
      reinterpret_cast<internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::ScopedSharedBufferHandle p_memory_handle{};
  OrientationAbsoluteSensor_StartPolling_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_memory_handle = input_data_view.TakeMemoryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OrientationAbsoluteSensor::StartPolling response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_memory_handle));
  }
  return true;
}

OrientationAbsoluteSensorProxy::OrientationAbsoluteSensorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OrientationAbsoluteSensorProxy::StartPolling(
    const StartPollingCallback& callback) {
  size_t size = sizeof(::device::mojom::internal::OrientationAbsoluteSensor_StartPolling_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kOrientationAbsoluteSensor_StartPolling_Name, size);

  auto params =
      ::device::mojom::internal::OrientationAbsoluteSensor_StartPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new OrientationAbsoluteSensor_StartPolling_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void OrientationAbsoluteSensorProxy::StopPolling(
    ) {
  size_t size = sizeof(::device::mojom::internal::OrientationAbsoluteSensor_StopPolling_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kOrientationAbsoluteSensor_StopPolling_Name, size);

  auto params =
      ::device::mojom::internal::OrientationAbsoluteSensor_StopPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class OrientationAbsoluteSensor_StartPolling_ProxyToResponder {
 public:
  static OrientationAbsoluteSensor::StartPollingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<OrientationAbsoluteSensor_StartPolling_ProxyToResponder> proxy(
        new OrientationAbsoluteSensor_StartPolling_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&OrientationAbsoluteSensor_StartPolling_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OrientationAbsoluteSensor_StartPolling_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "OrientationAbsoluteSensor::StartPolling() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  OrientationAbsoluteSensor_StartPolling_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      mojo::ScopedSharedBufferHandle in_memory_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(OrientationAbsoluteSensor_StartPolling_ProxyToResponder);
};

void OrientationAbsoluteSensor_StartPolling_ProxyToResponder::Run(
    mojo::ScopedSharedBufferHandle in_memory_handle) {
  size_t size = sizeof(::device::mojom::internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kOrientationAbsoluteSensor_StartPolling_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::mojom::internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_memory_handle, &params->memory_handle, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->memory_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid memory_handle in OrientationAbsoluteSensor.StartPolling response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

OrientationAbsoluteSensorStub::OrientationAbsoluteSensorStub()
    : sink_(nullptr),
      control_message_handler_(OrientationAbsoluteSensor::Version_) {
}

OrientationAbsoluteSensorStub::~OrientationAbsoluteSensorStub() {}

bool OrientationAbsoluteSensorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOrientationAbsoluteSensor_StartPolling_Name: {
      break;
    }
    case internal::kOrientationAbsoluteSensor_StopPolling_Name: {
      internal::OrientationAbsoluteSensor_StopPolling_Params_Data* params =
          reinterpret_cast<internal::OrientationAbsoluteSensor_StopPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OrientationAbsoluteSensor_StopPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OrientationAbsoluteSensor::StopPolling deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OrientationAbsoluteSensor::StopPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StopPolling();
      return true;
    }
  }
  return false;
}

bool OrientationAbsoluteSensorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOrientationAbsoluteSensor_StartPolling_Name: {
      internal::OrientationAbsoluteSensor_StartPolling_Params_Data* params =
          reinterpret_cast<internal::OrientationAbsoluteSensor_StartPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OrientationAbsoluteSensor_StartPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OrientationAbsoluteSensor::StartPolling deserializer");
        return false;
      }
      OrientationAbsoluteSensor::StartPollingCallback callback =
          OrientationAbsoluteSensor_StartPolling_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OrientationAbsoluteSensor::StartPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartPolling(callback);
      return true;
    }
    case internal::kOrientationAbsoluteSensor_StopPolling_Name: {
      break;
    }
  }
  return false;
}

OrientationAbsoluteSensorRequestValidator::OrientationAbsoluteSensorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OrientationAbsoluteSensorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OrientationAbsoluteSensor RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOrientationAbsoluteSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationAbsoluteSensor_StartPolling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOrientationAbsoluteSensor_StopPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationAbsoluteSensor_StopPolling_Params_Data>(
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

OrientationAbsoluteSensorResponseValidator::OrientationAbsoluteSensorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OrientationAbsoluteSensorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OrientationAbsoluteSensor ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOrientationAbsoluteSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationAbsoluteSensor_StartPolling_ResponseParams_Data>(
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
const char OrientationSensor::Name_[] = "device::mojom::OrientationSensor";
const uint32_t OrientationSensor::Version_;

class OrientationSensor_StartPolling_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OrientationSensor_StartPolling_ForwardToCallback(
      const OrientationSensor::StartPollingCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OrientationSensor::StartPollingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(OrientationSensor_StartPolling_ForwardToCallback);
};
bool OrientationSensor_StartPolling_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::OrientationSensor_StartPolling_ResponseParams_Data* params =
      reinterpret_cast<internal::OrientationSensor_StartPolling_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::ScopedSharedBufferHandle p_memory_handle{};
  OrientationSensor_StartPolling_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_memory_handle = input_data_view.TakeMemoryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OrientationSensor::StartPolling response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_memory_handle));
  }
  return true;
}

OrientationSensorProxy::OrientationSensorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OrientationSensorProxy::StartPolling(
    const StartPollingCallback& callback) {
  size_t size = sizeof(::device::mojom::internal::OrientationSensor_StartPolling_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kOrientationSensor_StartPolling_Name, size);

  auto params =
      ::device::mojom::internal::OrientationSensor_StartPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new OrientationSensor_StartPolling_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void OrientationSensorProxy::StopPolling(
    ) {
  size_t size = sizeof(::device::mojom::internal::OrientationSensor_StopPolling_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kOrientationSensor_StopPolling_Name, size);

  auto params =
      ::device::mojom::internal::OrientationSensor_StopPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class OrientationSensor_StartPolling_ProxyToResponder {
 public:
  static OrientationSensor::StartPollingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<OrientationSensor_StartPolling_ProxyToResponder> proxy(
        new OrientationSensor_StartPolling_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&OrientationSensor_StartPolling_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OrientationSensor_StartPolling_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "OrientationSensor::StartPolling() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  OrientationSensor_StartPolling_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      mojo::ScopedSharedBufferHandle in_memory_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(OrientationSensor_StartPolling_ProxyToResponder);
};

void OrientationSensor_StartPolling_ProxyToResponder::Run(
    mojo::ScopedSharedBufferHandle in_memory_handle) {
  size_t size = sizeof(::device::mojom::internal::OrientationSensor_StartPolling_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kOrientationSensor_StartPolling_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::mojom::internal::OrientationSensor_StartPolling_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_memory_handle, &params->memory_handle, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->memory_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid memory_handle in OrientationSensor.StartPolling response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

OrientationSensorStub::OrientationSensorStub()
    : sink_(nullptr),
      control_message_handler_(OrientationSensor::Version_) {
}

OrientationSensorStub::~OrientationSensorStub() {}

bool OrientationSensorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOrientationSensor_StartPolling_Name: {
      break;
    }
    case internal::kOrientationSensor_StopPolling_Name: {
      internal::OrientationSensor_StopPolling_Params_Data* params =
          reinterpret_cast<internal::OrientationSensor_StopPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OrientationSensor_StopPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OrientationSensor::StopPolling deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OrientationSensor::StopPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StopPolling();
      return true;
    }
  }
  return false;
}

bool OrientationSensorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOrientationSensor_StartPolling_Name: {
      internal::OrientationSensor_StartPolling_Params_Data* params =
          reinterpret_cast<internal::OrientationSensor_StartPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OrientationSensor_StartPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OrientationSensor::StartPolling deserializer");
        return false;
      }
      OrientationSensor::StartPollingCallback callback =
          OrientationSensor_StartPolling_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OrientationSensor::StartPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartPolling(callback);
      return true;
    }
    case internal::kOrientationSensor_StopPolling_Name: {
      break;
    }
  }
  return false;
}

OrientationSensorRequestValidator::OrientationSensorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OrientationSensorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OrientationSensor RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOrientationSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationSensor_StartPolling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOrientationSensor_StopPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationSensor_StopPolling_Params_Data>(
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

OrientationSensorResponseValidator::OrientationSensorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OrientationSensorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OrientationSensor ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOrientationSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OrientationSensor_StartPolling_ResponseParams_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif