// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_H_
#define COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/filesystem/public/interfaces/file_system.mojom-shared.h"
#include "components/filesystem/public/interfaces/directory.mojom.h"
#include "components/filesystem/public/interfaces/types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace filesystem {
namespace mojom {
class FileSystem;
using FileSystemPtr = mojo::InterfacePtr<FileSystem>;
using FileSystemPtrInfo = mojo::InterfacePtrInfo<FileSystem>;
using FileSystemRequest = mojo::InterfaceRequest<FileSystem>;
using FileSystemAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileSystem>;
using FileSystemAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileSystem>;
using FileSystemAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileSystem>;


class FileSystemProxy;
class FileSystemStub;

class FileSystemRequestValidator;
class FileSystemResponseValidator;

class  FileSystem {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = FileSystemProxy;
  using Stub_ = FileSystemStub;

  using RequestValidator_ = FileSystemRequestValidator;
  using ResponseValidator_ = FileSystemResponseValidator;
  virtual ~FileSystem() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error);

  using OpenTempDirectoryCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, const OpenTempDirectoryCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error);

  using OpenPersistentFileSystemCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, const OpenPersistentFileSystemCallback& callback) = 0;
};

class  FileSystemProxy
    : public FileSystem,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FileSystemProxy(mojo::MessageReceiverWithResponder* receiver);
  bool OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error) override;
  void OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, const OpenTempDirectoryCallback& callback) override;
  bool OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error) override;
  void OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, const OpenPersistentFileSystemCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  FileSystemStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FileSystemStub();
  ~FileSystemStub() override;
  void set_sink(FileSystem* sink) { sink_ = sink; }
  FileSystem* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FileSystem* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  FileSystemRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FileSystemRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  FileSystemResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FileSystemResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace filesystem

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_H_