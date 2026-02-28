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
        virtual Base::Interop::SharedRef<IFileBuffer> aquireFileBuffer(Base::Interop::StringView related_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interop::SharedRef<IArchive> createArchive(Base::Interop::StringView root_path) = 0;
    };
}




