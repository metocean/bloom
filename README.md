# gbloom
This is an attempt to make a bloom filter that works the same in:  
* C library
* Python module
* Lua / OpenResty
  
Currently using the bloom filter is using google's CityHash.  
  
The Python implementation is using Cython to keep the filter running fast.

## Speed tests:  
  
Parameters used:  
* 320 entries  
* hash / k = 20  
* m / bits = 1100  
* i7-4790 CPU @ 3.60GHz  
  
Results:  
* C: 6,000,000 contains / second.
* Python: 180,000 contains / second.
