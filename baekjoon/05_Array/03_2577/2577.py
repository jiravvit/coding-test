import sys

data = []
for i in range(3):
    data.append(int(sys.stdin.readline()))

tmp = str(data[0]*data[1]*data[2])

cnt = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in range(len(tmp)):
    if tmp[i] == '0': 
        cnt[0] += 1
    elif tmp[i] == '1':
        cnt[1] += 1
    elif tmp[i] == '2':
        cnt[2] += 1
    elif tmp[i] == '3':
        cnt[3] += 1
    elif tmp[i] == '4':
        cnt[4] += 1
    elif tmp[i] == '5':
        cnt[5] += 1
    elif tmp[i] == '6':
        cnt[6] += 1
    elif tmp[i] == '7':
        cnt[7] += 1
    elif tmp[i] == '8':
        cnt[8] += 1
    elif tmp[i] == '9':
        cnt[9] += 1

for i in range(10):
    print(cnt[i])