include_directories("C:/software/simple_cmake/include/hello")
add_executable(main main.c)
target_link_libraries(main hello)
