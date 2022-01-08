import sys

c = int(sys.stdin.readline())

avg = 0
cnt = 0
for i in range(c):
    data = list(map(int, sys.stdin.readline().split()))
    for idx in range(1,data[0]+1):
        avg += data[idx]
    avg /= data[0]
    for idx in range(1,data[0]+1):
        if data[idx] > avg:
            cnt += 1
    print("{:.3f}%".format(cnt/data[0]*100))
    cnt = 0
    avg = 0