#ifndef _BLOOM_H
#define _BLOOM_H
#include <stddef.h>
#include <stdbool.h>

void bloom_add(uint8_t *bitmap,
               size_t bitmap_bits,
               uint8_t num_hashes,
               const char *data,
               size_t len);

void bloom_add_str(uint8_t *bitmap,
                   size_t bitmap_bits,
                   uint8_t num_hashes,
                   const char *str);

void bloom_add_str_i(uint8_t *bitmap,
                     size_t bitmap_bits,
                     uint8_t num_hashes,
                     const char *str);

bool bloom_possibly_contains(uint8_t *bitmap,
                             size_t bitmap_bits,
                             uint8_t num_hashes,
                             const char *data,
                             size_t len);

bool bloom_possibly_contains_str(uint8_t *bitmap,
                                 size_t bitmap_bits,
                                 uint8_t num_hashes,
                                 const char *str);

bool bloom_possibly_contains_str_i(uint8_t *bitmap,
                                   size_t bitmap_bits,
                                   uint8_t num_hashes,
                                   const char *str);


#endif
