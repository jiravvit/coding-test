import sys

n = int(sys.stdin.readline())
data = list(map(int,sys.stdin.readline().split()))
max = max(data)

sum = 0
for d in data:
    d = d/max*100
    sum += d

print(sum/n)