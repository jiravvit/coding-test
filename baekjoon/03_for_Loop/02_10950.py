import sys

n = int(sys.stdin.readline())
re = [] # list

for i in range(n):
    a,b = map(int, sys.stdin.readline().split())
    re.append(a+b)

for i in range(n):
    print(re[i])