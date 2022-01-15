data = [] # list
for i in range(9):
    data.append(int(input()))

max = data[0] # int
cnt = 1

for d in data:
    if max < d:
        max = d
    else:
        pass

for d in data:
    if d == max:
        break
    else:
        cnt += 1

print(max)
print(cnt)