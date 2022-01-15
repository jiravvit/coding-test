import sys

n = input()
cnt = 0
ori = n

if len(n)<2:
    n = '0'+n

while(True):
    if len(str(int(n[0])+int(n[1]))) < 2:
        n = n[1] + str(int(n[0])+int(n[1]))
    else:    
        n = n[1] + str(int(n[0])+int(n[1]))[1]
    cnt += 1
    if int(ori) == int(n): 
        print(cnt)
        break
