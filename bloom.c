#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include "bloom.h"
#include "city.h"

static inline uint64_t nth_hash(uint8_t n,
                                uint64_t hash_a,
                                uint64_t hash_b,
                                uint64_t filter_bits_m) {
    return (hash_a + n * hash_b) % filter_bits_m;
}

static inline void set_bit(uint8_t *array, uint64_t index) {
    array[index/8] |= 1 << (index % 8);
}

static inline bool get_bit(uint8_t *array, int index) {
    return 1 & (array[index/8] >> (index % 8));
}

static inline void str_to_lower(char *dest, const char *src) {
    while (*src) {
        *dest = tolower(*src);
        dest++;
        src++;
    }
}

void bloom_add(uint8_t *bitmap,
               size_t bitmap_bits,
               uint8_t num_hashes,
               const char *data,
               size_t len) {

  uint128 hash = CityHash128(data, len);
  for (int n = 0; n < num_hashes; n++)
      set_bit(bitmap , nth_hash(n, hash.first, hash.second, bitmap_bits));
}

void bloom_add_str_i(uint8_t *bitmap,
               size_t bitmap_size,
               uint8_t num_hashes,
               const char *str) {

    int key_len = strlen(str);
    char *key = (char *)alloca(key_len);
    str_to_lower(key, str);
    bloom_add(bitmap, bitmap_size, num_hashes, key, key_len);
}

void bloom_add_str(uint8_t *bitmap,
               size_t bitmap_size,
               uint8_t num_hashes,
               const char *str) {
    bloom_add(bitmap, bitmap_size, num_hashes, str, strlen(str));
}

bool bloom_possibly_contains(uint8_t *bitmap,
                             size_t bitmap_bits,
                             uint8_t num_hashes,
                             const char *data,
                             size_t len) {

    uint128 hash = CityHash128(data, len);
    for (int n = 0; n < num_hashes; n++)
        if (!get_bit(bitmap, nth_hash(n, hash.first, hash.second, bitmap_bits)))
            return false;
    return true;
}

bool bloom_possibly_contains_str_i(uint8_t *bitmap,
                                   size_t bitmap_bits,
                                   uint8_t num_hashes,
                                   const char *str) {

    int key_len = strlen(str);
    char *key = (char *)alloca(key_len);
    str_to_lower(key, str);

    return bloom_possibly_contains(bitmap,
                                   bitmap_bits,
                                   num_hashes,
                                   key,
                                   key_len);
}

bool bloom_possibly_contains_str(uint8_t *bitmap,
                                 size_t bitmap_bits,
                                 uint8_t num_hashes,
                                 const char *str) {

    return bloom_possibly_contains(bitmap,
                                   bitmap_bits,
                                   num_hashes,
                                   str,
                                   strlen(str));
}
