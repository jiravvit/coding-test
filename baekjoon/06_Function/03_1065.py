import sys

def hansu(n):
    cnt = 0
    for i in range(1,n+1):
        if i < 100:
            cnt += 1
        else:
            i = str(i)
            if int(i[1])-int(i[0])==int(i[2])-int(i[1]):
                #print(i, ',',int(i[1])-int(i[0]))
                cnt += 1
    return cnt

n = int(sys.stdin.readline())
print(hansu(n))