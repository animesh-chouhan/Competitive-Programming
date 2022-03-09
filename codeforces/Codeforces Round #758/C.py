t = int(input())

for _ in range(t):
    n = int(input())
    a = [(i, int(num)) for i, num in enumerate(input().split())]
    b = [(i, int(num)) for i, num in enumerate(input().split())]

    a.sort(key=lambda x: x[1])
    b.sort(key=lambda x: x[1])
    print(a)
    print(b)
