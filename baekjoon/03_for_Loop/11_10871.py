import sys

n,x = map(int, sys.stdin.readline().split())
data = list(map(int, sys.stdin.readline().split()))

for d in data:
    if d < x:
        print(d, end=' ')