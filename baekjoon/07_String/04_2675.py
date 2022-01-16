import sys

n = int(sys.stdin.readline())

for i in range(n): 
    r, str = sys.stdin.readline().split()
    text = ''
    for i in str:
        text += int(r) * i
    print(text)