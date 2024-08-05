#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/IFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class IFile; }
namespace Core { class IFileSystem; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystemInterfaceImpl : public ::Core::IFileSystem {
public:
    // prevent constructor by default
    FileSystemInterfaceImpl& operator=(FileSystemInterfaceImpl const&);
    FileSystemInterfaceImpl(FileSystemInterfaceImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystemInterfaceImpl() = default;

    // vIndex: 1
    virtual std::unique_ptr<class Core::IFile> openFile(
        class Core::Path const&   filePath,
        class Core::FileOpenMode  openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    // vIndex: 2
    virtual std::unique_ptr<std::iostream> openFileStream(class Core::Path const&, int);

    // vIndex: 3
    virtual bool fileExists(class Core::Path const& filePath);

    // vIndex: 4
    virtual class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryName,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 5
    virtual class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    MCAPI FileSystemInterfaceImpl();

    // NOLINTEND
};

}; // namespace Core
