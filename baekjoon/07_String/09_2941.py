str = input()

croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=' ]

for cro in croatia:
    if cro in str:
        str = str.replace(cro, '.')

print(len(str))
