def  make():
    con = []
    for i in range(1,10001):
        for k in str(i):
            i += int(k)
        if i < 10001:
            con.append(i)
        else:
            pass
    return set(con)

def myPrint(num):
    for i in sorted(num):
        print(i)

def is_selfnum():
    con = make()
    num = set(range(1,10001))
    self = num - con
    myPrint(self)

is_selfnum()