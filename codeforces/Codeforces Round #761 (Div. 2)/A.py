from itertools import permutations

t = int(input())

for _ in range(t):
    s = input()
    t = input()

    perm = permutations(list(s))
    sorted_perm = []
    for i in list(perm):
        p = "".join(i)
        sorted_perm.append(p)

    sorted_perm.sort()
    print(sorted_perm)
    for i in sorted_perm:
        if t not in i:
            print(i)
            break
