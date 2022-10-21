#ifndef VERTHASH_H
#define VERTHASH_H

#include <stdint.h>

void verthash_hash(const unsigned char* blob_bytes, const size_t blob_size, const unsigned char* input, const size_t input_size, unsigned char* output);

#endif