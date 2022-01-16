from audioop import reverse
import sys

a,b = sys.stdin.readline().split()
ra = int(a[::-1])
rb = int(b[::-1])

if ra > rb:
    print(ra)
else:
    print(rb)
