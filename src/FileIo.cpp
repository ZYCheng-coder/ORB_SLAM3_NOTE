//
// Created by czy on 22-9-3.
//
#include "FileIo.h"
namespace ORB_SLAM3 {
    bool IfPathExists(const std::string &file_path) {
        boost::filesystem::path path(file_path);
        return boost::filesystem::exists(path);
    }

    bool IfDirectory(const std::string &file_path) {
        return boost::filesystem::is_directory(file_path);
    }

    bool RemoveIfExist(const std::string &path) {
        if (IfPathExists(path)) {
            LOG(INFO) << "remove " << path;
            system(("rm -rf " + path).c_str());
            return true;
        }
        return false;
    }
}
