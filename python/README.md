This is a python / Cython bloom using CityHash.  
  
To install either type ```make``` and ```make clean``` to install type ```python setup.py install```.  
  
example usage:  
```
import gbloom
from datetime import datetime


k=20
bits=1100*8
filter = gbloom.Bloom(bits, k)

filter.add('fish')
filter.add('dog')
filter.add('cat')
filter.add('person')
filter.add('plane')
filter.prints()

print filter.contains('dog')
print filter.contains('fish')
print filter.contains('cat')
print filter.contains('at')
```
