import sys

data = []
for i in range(3):
    data.append(int(sys.stdin.readline()))

tmp = str(data[0]*data[1]*data[2])

for i in range(10):
    print(tmp.count(str(i)))
