//
// Created by chang on 2022/8/14.
//

#include <stdint.h>

#ifndef SIMPLE_CMAKE_SM4NI_H
#define SIMPLE_CMAKE_SM4NI_H

#ifdef __cplusplus
extern "C" {
#endif

void sm4_encrypt4(const uint32_t rk[32], void *src, const void *dst);

#ifdef __cplusplus
}
#endif

#endif //SIMPLE_CMAKE_SM4NI_H