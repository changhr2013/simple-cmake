//
// Created by chang on 2022/8/14.
//

#ifndef SIMPLE_CMAKE_SM4_AESNI_X4_H
#define SIMPLE_CMAKE_SM4_AESNI_X4_H

#include"sm4.h"

#ifdef __cplusplus
extern "C" {
#endif

void SM4_AESNI_Encrypt_x4(uint8_t *plaintext, uint8_t *ciphertext, SM4_Key *sm4_key);

void SM4_AESNI_Decrypt_x4(uint8_t *ciphertext, uint8_t *plaintext, SM4_Key *sm4_key);

#ifdef __cplusplus
}
#endif

#endif //SIMPLE_CMAKE_SM4_AESNI_X4_H
