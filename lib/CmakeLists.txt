# 设置要编译的源代码
set(LIBHELLO_SRC hello.c sm4_ref.h sm4_ref.c sm4.h sm4.c sm4_aesni_x4.h sm4_aesni_x4.c)
# 设置动态库的生成路径
if (MSVC)
    set(LIBRARY_OUTPUT_PATH "C:/software/simple_cmake_out")
else ()
    set(LIBRARY_OUTPUT_PATH "/usr/local/simple_cmake_out")
endif ()
# 生成动态库
add_library(hello SHARED ${LIBHELLO_SRC})

# 设置静态库的原始名称
add_library(hello-static STATIC ${LIBHELLO_SRC})

#set_target_properties(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#set_target_properties(hello_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 重命名静态库名称
set_target_properties(hello-static PROPERTIES OUTPUT_NAME hello)

#install(TARGETS hello hello-static LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(TARGETS hello RUNTIME DESTINATION lib)
install(TARGETS hello LIBRARY DESTINATION lib)
install(TARGETS hello ARCHIVE DESTINATION lib)

install(FILES hello.h sm4_ref.h sm4.h sm4_aesni_x4.h DESTINATION include/hello)

