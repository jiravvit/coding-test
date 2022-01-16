import sys

str = sys.stdin.readline()
abc = 'abcdefghijklmnopqrstuvwxyz'

f = []
for i in abc:
    f.append(str.find(i))

for i in f:
    print(i, end=' ')
