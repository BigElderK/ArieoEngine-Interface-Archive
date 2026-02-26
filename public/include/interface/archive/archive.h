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
        virtual Base::Interface<IFileBuffer> aquireFileBuffer(const Base::Parameter::String& relative_path) = 0;
        virtual void releaseFileBuffer(Base::Interface<IFileBuffer> file_buffer) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interface<IArchive> createArchive(const Base::Parameter::String& root_path) = 0;
        virtual void destroyArchive(Base::Interface<IArchive>) = 0;
    };
}