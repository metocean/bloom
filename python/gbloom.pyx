from cpython cimport bool
from libc.string cimport memset, memcpy
from libc.stdlib cimport malloc, free
from libc.stdio cimport printf
from libc.string cimport const_char


cdef extern from "bloom.h":
    void _bloom_add_str "bloom_add_str"(char *filter, size_t filter_bits, int num_hashes, const_char *str)
    int _bloom_contains_str "bloom_contains_str"(char *filter, size_t filter_bits, int num_hashes, const_char *str)


cdef class Bloom(object):

    cdef char* filter;
    cdef size_t filter_size;
    cdef size_t bits;
    cdef int num_hashes;

    def __cinit__(self, size_t bits, int num_hashes):
        self.bits = bits
        self.num_hashes = num_hashes
        self.filter_size = (bits / sizeof(char)) + 1
        self.filter = <char*> malloc(self.filter_size)
        if not self.filter:
            raise MemoryError()
        memset(self.filter, 0, self.filter_size)

    def __dealloc__(self):
        free(self.filter)

    def add(self, key):
        _bloom_add_str(self.filter, self.bits, self.num_hashes, key)

    def contains(self, key):
        return _bloom_contains_str(self.filter, self.bits, self.num_hashes, key)

    def prints(self):
        printf("filter: %s %lu\n", self.filter, self.filter_size)
