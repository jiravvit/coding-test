import sys

n = int(sys.stdin.readline())
data = list(map(int, sys.stdin.readline().split())) # list

print(min(data), max(data))