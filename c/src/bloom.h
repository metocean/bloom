#ifndef _BLOOM_H
#define _BLOOM_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif


void bloom_add(char *filter,
               size_t filter_bit_count,
               int num_hashes,
               const char *data,
               size_t len);

void bloom_add_str(char *filter,
                   size_t filter_bit_count,
                   int num_hashes,
                   const char *str);

void bloom_add_str_i(char *filter,
                     size_t filter_bit_count,
                     int num_hashes,
                     const char *str);

bool bloom_contains(char *filter,
                             size_t filter_bit_count,
                             int num_hashes,
                             const char *data,
                             size_t len);

bool bloom_contains_str(char *filter,
                                 size_t filter_bit_count,
                                 int num_hashes,
                                 const char *str);

bool bloom_contains_str_i(char *filter,
                                   size_t filter_bit_count,
                                   int num_hashes,
                                   const char *str);

#ifdef __cplusplus
}
#endif
#endif
