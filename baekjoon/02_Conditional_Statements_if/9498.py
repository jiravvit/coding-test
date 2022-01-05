score = input()
score = int(score)

if 90 <= score and score <= 100:
    print("A")
elif 80 <= score and score <= 89:
    print("B")
elif 70 <= score and score <= 79:
    print("C")
elif 60 <= score and score <= 69:
    print("D")
else:
    print("F")
