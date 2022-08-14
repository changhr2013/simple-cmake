cmake_minimum_required(VERSION 3.23)
project(simple_cmake)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_FLAGS "-std=c99")

add_library(sse2 INTERFACE IMPORTED)
if (MSVC)
    set(CMAKE_INSTALL_PREFIX "c:/software/simple_cmake")
    target_compile_options(sse2 INTERFACE /arch:SSE2)
else ()
    set(CMAKE_INSTALL_PREFIX "/usr/local/simple_cmake")
    target_compile_options(sse2 INTERFACE -msse2)
endif ()

add_subdirectory(lib)
add_subdirectory(src)
