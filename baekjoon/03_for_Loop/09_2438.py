import sys

n = int(sys.stdin.readline())

for i in range(1,n+1):
    for k in range(i):
        print('*', end='')
    print('')
    
