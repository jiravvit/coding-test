import sys

data = []
for i in range(2):
    data.append(map(int, sys.stdin.readline()))
for i in range(2):
    print(type(data[i]))

data = []
for i in range(2):
    data.append(int(sys.stdin.readline()))
for i in range(2):
    print(type(data[i]))