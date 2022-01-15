import sys

h,m = map(int,sys.stdin.readline().split())

# 첫 입력 검증
if (h<0 or 23<h) or (m<0 or 60<m):
    sys.exit()

# 45분 빼고 출력
m = m-45
if m >= 0:
    print(h, m)
elif m < 0:
    m = m+60
    h = h-1
    if h < 0:
        print(23, m)
    else:
        print(h, m)