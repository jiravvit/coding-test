str = input()

time = 0
for s in str:
    if 'A' <= s and s <= 'C':
        time += 1
    elif 'D' <= s and s <= 'F':
        time += 2
    elif 'G' <= s and s <= 'I':
        time += 3
    elif 'J' <= s and s <= 'L':
        time += 4
    elif 'M' <= s and s <= 'O':
        time += 5
    elif 'P' <= s and s <= 'S':
        time += 6
    elif 'T' <= s and s <= 'V':
        time += 7
    elif 'W' <= s and s <= 'Z':
        time += 8

print(time+len(str)*2)
