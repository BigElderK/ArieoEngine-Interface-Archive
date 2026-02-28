#pragma once
#include "base/interop/interface.h"

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
        virtual Base::Interop::SharedRef<IFileBuffer> aquireFileBuffer(const Base::InteropOld<std::string_view>& relative_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interop::SharedRef<IArchive> createArchive(const Base::InteropOld<std::string_view>& root_path) = 0;
    };
}