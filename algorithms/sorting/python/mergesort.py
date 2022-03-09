import random


def merge(arr, l, m, r):
    n1 = m-l+1
    n2 = r-m

    a1 = []
    a2 = []

    for i in range(n1):
        a1.append(arr[i])

    for i in range(n2):
        a2.append(arr[m+1+i])

    a1.append(10**10)
    a2.append(10**10)

    i = 0
    j = 0

    for k in range(l, r):
        if a1[i] <= a2[j]:
            arr[k] = a1[i]
            i += 1
        else:
            arr[k] = a2[j]
            j += 1


# a = [5, 8, 10, 11, 18, 1, 8, 8, 12]
# merge(a, 0, 4, 8)
# print(a)


def merge_sort(arr, l, r):
    # print(arr)
    if l < r:
        m = (r+l)//2
        merge_sort(arr, l, m)
        merge_sort(arr, m+1, r)
        merge(arr, l, m, r)


a = []

for _ in range(10):
    a.append(random.randint(1, 20))

print(a)
merge_sort(a, 0, len(a) - 1)
print(a)
