import sys

data = []
for i in range(10):
    data.append(int(sys.stdin.readline()))

remain = []
for i in range(10):
    remain.append(data[i]%42)

remain = set(remain)
print(len(remain))