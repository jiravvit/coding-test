import sys

def isGroup(str):
    i = 0
    for i in range(len(str)-1):
        if str[i] != str[i+1]:
            newStr = str[i+1:]
            if newStr.count(str[i]) > 0:
                return False
    return True


n = int(sys.stdin.readline())
cnt = 0

for i in range(n):
    str = input()
    if isGroup(str):
        cnt += 1

print(cnt)

