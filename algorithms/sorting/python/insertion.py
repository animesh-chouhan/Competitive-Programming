import random


def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        # print(key, j)
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
        print(arr)

    return arr


a = []

for _ in range(5):
    a.append(random.randint(1, 20))

print(a)
print(insertion_sort(a))
