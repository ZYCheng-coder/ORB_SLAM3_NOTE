//
// Created by czy on 22-9-3.
//

#ifndef ORB_SLAM3_FILEIO_H
#define ORB_SLAM3_FILEIO_H

#include <fstream>
#include <boost/filesystem.hpp>

#include <glog/logging.h>
#include <string>

namespace ORB_SLAM3 {

    bool IfPathExists(const std::string &file_path);

    bool IfDirectory(const std::string &file_path);

    bool RemoveIfExist(const std::string &path);
}


#endif //ORB_SLAM3_FILEIO_H
