t = int(input())

for _ in range(t):
    n = int(input())
    a = [i for i in input().split()]

    s = ""
    s += a[0][0]
    for i in range(1, n-2):
        if a[i][0] == a[i-1][1]:
            s += a[i][0]
        else:
            s += a[i-1][1] + a[i][0]

    s += a[-1][1]
    if len(s) < n:
        s += "a"

    print(s)
