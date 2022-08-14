cmake_minimum_required(VERSION 3.23)
project(simple_cmake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX "c:/software/simple_cmake2")

add_subdirectory(lib)
add_subdirectory(src)
