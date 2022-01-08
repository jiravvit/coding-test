import sys

n = int(sys.stdin.readline())
data = []
for i in range(n):
    data.append(input())

score = 0
for d in data:
    tmp = list(d)
    for i in range(len(d)):
        if tmp[i] == 'O':
            if i > 0 and tmp[i-1] > 0:
                tmp[i] = tmp[i-1] + 1
            elif i == 0:
                tmp[0] = 1
            else:
                tmp[i] = 1
        else:
            tmp[i] = 0
    #print(tmp)
    for t in tmp:
        score += t
    print(score)
    score = 0