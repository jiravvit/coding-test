import sys

n = int(sys.stdin.readline())
str = sys.stdin.readline()

sum = 0
for i in range(n):
    sum += int(str[i])

print(sum)