#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include "bloom.h"
#include "city.h"

static inline uint64_t nth_hash(uint8_t n,
                                uint64_t hash_a,
                                uint64_t hash_b,
                                uint64_t filter_bits) {
    return (hash_a + n * hash_b) % filter_bits;
}

static inline void set_bit(char *array, uint64_t index) {
    array[index/8] |= 1 << (index % 8);
}

static inline bool get_bit(char *array, int index) {
    return 1 & (array[index/8] >> (index % 8));
}

static inline void str_to_lower(char *dest, const char *src) {
    while (*src) {
        *dest = tolower(*src);
        dest++;
        src++;
    }
}

void bloom_add(char *filter,
               size_t filter_bit_count,
               int num_hashes,
               const char *data,
               size_t len) {

  uint128 hash = CityHash128(data, len);
  for (int n = 0; n < num_hashes; n++)
      set_bit(filter , nth_hash(n, hash.first, hash.second, filter_bit_count));
}

void bloom_add_str_i(char *filter,
                     size_t filter_bit_count,
                     int num_hashes,
                     const char *str) {

    int key_len = strlen(str);
    char *key = alloca(key_len);
    str_to_lower(key, str);
    bloom_add(filter, filter_bit_count, num_hashes, key, key_len);
}

void bloom_add_str(char *filter,
                   size_t filter_bit_count,
                   int num_hashes,
                   const char *str) {
    bloom_add(filter, filter_bit_count, num_hashes, str, strlen(str));
}

bool bloom_contains(char *filter,
                             size_t filter_bit_count,
                             int num_hashes,
                             const char *data,
                             size_t len) {

    uint128 hash = CityHash128(data, len);
    for (int n = 0; n < num_hashes; n++)
        if (!get_bit(filter, nth_hash(n, hash.first, hash.second, filter_bit_count)))
            return false;
    return true;
}

bool bloom_contains_str(char *filter,
                                 size_t filter_bit_count,
                                 int num_hashes,
                                 const char *str) {

    return bloom_contains(filter,
                                   filter_bit_count,
                                   num_hashes,
                                   str,
                                   strlen(str));
}

bool bloom_contains_str_i(char *filter,
                                   size_t filter_bit_count,
                                   int num_hashes,
                                   const char *str){

    int key_len = strlen(str);
    char *key = alloca(key_len);
    str_to_lower(key, str);

    return bloom_contains(filter,
                                   filter_bit_count,
                                   num_hashes,
                                   key,
                                   key_len);
}
