x = input()
y = input()

x = int(x)
y = int(y)

if x > 0 and y > 0:
    print("1")
elif x > 0 and y < 0:
    print("4")
elif x < 0 and y > 0:
    print("2")
elif x < 0 and y < 0:
    print("3")
else:
    pass