#pragma once
#include "base/interop/interface.h"

namespace Arieo::Interface::Archive
{
    class IArchive
    {
    public:
        virtual Base::Interop::SharedRef<Base::IBuffer> aquireFileBuffer(const Base::Interop::StringView& related_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interop::SharedRef<IArchive> createArchive(const Base::Interop::StringView& root_path) = 0;
    };
}




