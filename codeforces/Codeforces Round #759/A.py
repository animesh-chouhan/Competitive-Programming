t = int(input())

for _ in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]

    l = 1
    die = False
    for i in range(n-1):
        if a[i] == 1:
            if a[i+1] == 0:
                l += 1
            else:
                l += 5
        if a[i] == 0:
            if a[i+1] == 0:
                die = True
                break
            else:
                l += 0

    if die:
        print(-1)
    else:
        if a[-1] == 1:
            print(l+1)
        else:
            print(l)
