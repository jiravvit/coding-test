import sys

n = int(sys.stdin.readline())

for i in range(1, n+1):
    for j in range(n-i, 0, -1):
        print(' ', end='')
    for k in range(i):
        print('*', end='')
    print('')