t = int(input())

for _ in range(t):
    n = 7
    b = [int(i) for i in input().split()]
    a1 = b[0]
    a2 = b[1]
    a3 = b[-1] - a1 - a2
    print(a1, a2, a3)
