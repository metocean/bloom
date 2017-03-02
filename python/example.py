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

count = 100000
s = datetime.now()
for i in range(0, count):
    filter.contains('fish')
    filter.contains('dog')
    filter.contains('cat')
    filter.contains('person')
    filter.contains('plane')
td = datetime.now() - s
taken = float(td.seconds) + (float(td.microseconds) / 1000000)
print taken / (count * 5)

