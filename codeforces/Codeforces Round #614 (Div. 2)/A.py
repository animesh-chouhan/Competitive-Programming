T = int(input())

for t in range(T):
    n, s, k = map(int, input().split())
    c = list(map(int, input().split()))

    for i in range(0, n):
        if s-i >= 1 and (s-i not in c):
            print(i)
            break
        if s+i <= n and (s+i not in c):
            print(i)
            break
