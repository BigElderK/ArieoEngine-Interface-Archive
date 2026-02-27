#pragma once
#include "base/interface/interface.h"

namespace Arieo::Interface::Archive
{
    class IFileBuffer
    {
    public:
        virtual void* getBuffer() = 0;
        virtual size_t getBufferSize() = 0;
    };

    class IArchive
    {
    public:
        virtual Base::Interop<IFileBuffer> aquireFileBuffer(const Base::Interop<std::string_view>& relative_path) = 0;
        virtual void releaseFileBuffer(Base::Interop<IFileBuffer> file_buffer) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interop<IArchive> createArchive(const Base::Interop<std::string_view>& root_path) = 0;
        virtual void destroyArchive(Base::Interop<IArchive>) = 0;
    };
}