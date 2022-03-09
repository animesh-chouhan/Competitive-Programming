t = int(input())

for _ in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]

    k = 0
    while(1):
        x = a[-1]
        l = []
        r = []
        for i in a:
            if i <= x:
                l.append(i)
            else:
                r.append(i)
        b = l + r
        same = True
        for i, j in zip(a, b):
            if i != j:
                same = False

        if same:
            break
        else:
            k += 1
            a = b

    print(k)
