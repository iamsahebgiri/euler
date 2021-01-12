a, b, s = 0, 1, 0
while(a < 4000000):
    if a % 2 == 0:
        s += a
        print(s)
    a,b = b, a+b

# 4613732
