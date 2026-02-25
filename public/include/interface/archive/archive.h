#pragma once
#include "base/interface/interface.h"
#include <filesystem>
#include <tuple>
namespace Arieo::Interface::Archive
{
    class IArchive
    {
    public:
        virtual std::tuple<void*, size_t> getFileBuffer(const std::filesystem::path& relative_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interface<IArchive> createArchive(const std::filesystem::path& root_path) = 0;
        virtual void destroyArchive(Base::Interface<IArchive>) = 0;
    };
}