# bloom

A C bloom filter that also cotains C ports of the hashing algorithms CityHash and SpookyHash.  
  
I will add Lua and Python CFFI bindings to this project at some point.  
  
Example usage:
```
#include <stdio.h>
#include <string.h>
#include "bloom.h"

int main() {
    
    int k = 20;
    char filter[1100];
    memset(filter, 0, sizeof(filter));
    size_t bits = sizeof(filter) * 8;
    
    bloom_add_str(filter, bits, k, "Aardvark");
    bloom_add_str(filter, bits, k, "Bear");
    bloom_add_str(filter, bits, k, "Beaver");
    bloom_add_str(filter, bits, k, "Bee");
    
    printf("Dog: %d\n", bloom_possibly_contains_str(filter, bits, k, "Dog"));
    printf("Bear: %d\n", bloom_possibly_contains_str(filter, bits, k, "Bear"));
    printf("Bea: %d\n", bloom_possibly_contains_str(filter, bits, k, "Bea"));
}
```
output:
```
Dog: 0
Bear: 1
Bea: 0
```
