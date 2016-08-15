//=======================================================================
// Copyright Baptiste Wicht 2013-2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#ifndef VFS_PATH_H
#define VFS_PATH_H

#include <vector.hpp>
#include <string.hpp>

/*!
 * \brief Structure to represent a path on the file system
 */
struct path {
    path();
    path(const std::string& path);

    path(const path& rhs) = default;
    path(path&& rhs) = default;

    path& operator=(const path& rhs) = default;
    path& operator=(path&& rhs) = default;

    bool empty();

    private:
        std::vector<std::string> names;
};

#endif