import sys

n = int(sys.stdin.readline())
data = list(map(int, sys.stdin.readline().split())) # list

# int
max = data[0]
min = data[0]

for d in data:
    if max < d:
        max = d
    elif d < min:
        min = d
    else:
        pass

print(min, max)