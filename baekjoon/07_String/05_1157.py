str = input().upper()
list = list(set(str))

cnt = []
find = []
for l in list:
    cnt.append(str.count(l))
    find.append(str.find(l))

if cnt.count(max(cnt)) > 1:
    print("?")
else:
    idx = cnt.index(max(cnt))
    print(list[idx])