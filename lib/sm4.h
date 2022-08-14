//
// Created by chang on 2022/8/14.
//

#ifndef SIMPLE_CMAKE_SM4_H
#define SIMPLE_CMAKE_SM4_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SM4 密钥
 */
typedef struct _SM4_Key {
    // 32 轮密钥
    uint32_t rk[32];
} SM4_Key;


/**
 * @brief 初始化 SM4 轮密钥
 * @param key 128bit 长度密钥
 * @param sm4_key SM4 密钥
 */
void SM4_KeyInit(uint8_t *key, SM4_Key *sm4_key);

#ifdef __cplusplus
}
#endif

#endif //SIMPLE_CMAKE_SM4_H
