year = input()
year = int(year)

if not year%4:
    if year%100:
        print("1")
    elif not year%400:
        print("1")
    else:
        print("0")
else:
    print("0")