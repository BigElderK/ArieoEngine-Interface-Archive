#pragma once
#include "base/interface/interface.h"

namespace Arieo::Interface::Archive
{
    struct FileBuffer
    {
        void* buffer = nullptr;
        size_t size = 0;
    };

    class IArchive
    {
    public:
        virtual FileBuffer getFileBuffer(const Base::Parameter::String& relative_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interface<IArchive> createArchive(const Base::Parameter::String& root_path) = 0;
        virtual void destroyArchive(Base::Interface<IArchive>) = 0;
    };
}