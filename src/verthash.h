#ifndef VERTHASH_H_INCLUDED
#define VERTHASH_H_INCLUDED

#include <stddef.h>
#include <stdint.h>
#include <stdint.h>

void verthash_hash(const unsigned char* blob_bytes, const size_t blob_size, const unsigned char* input, const size_t input_size, unsigned char* output);
int get_verthash_file();

#endif