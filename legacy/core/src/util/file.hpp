/*******************************************************************************
 * Copyright 2022-2023 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/
#ifndef GRAPH_BACKEND_GRAPH_COMPILER_CORE_SRC_UTIL_FILE_HPP
#define GRAPH_BACKEND_GRAPH_COMPILER_CORE_SRC_UTIL_FILE_HPP

#include <fstream>
#include <string>
#include <util/def.hpp>

namespace dnnl {
namespace impl {
namespace graph {
namespace gc {
namespace utils {
/**
 * Generates a unique name for file name
 * */
SC_INTERNAL_API std::string get_unique_name_for_file();

/**
 * Opens a file for write (in text mode). If failed to open, throws an error
 * Due to a g++4.8 bug, we cannot return the stream.
 * */
SC_INTERNAL_API void open_file_for_write(std::ofstream &ret,
                                         const std::string &path);

/**
 * Opens a file for read (in text mode). If failed to open, throws an error
 * */
SC_INTERNAL_API void open_file_for_read(std::ifstream &ret,
                                        const std::string &path);

/**
 * Opens a file for write (in text mode) in system temp directory. If failed to
 * open, throws an error
 * */
SC_INTERNAL_API void open_temp_file_for_write(std::ofstream &ret,
                                              const std::string &filename);

/**
 * Opens a file for read (in text mode) in system temp directory. If failed to
 * open, throws an error
 * */
SC_INTERNAL_API void open_temp_file_for_read(std::ifstream &ret,
                                             const std::string &filename);

} // namespace utils

} // namespace gc
} // namespace graph
} // namespace impl
} // namespace dnnl

#endif
