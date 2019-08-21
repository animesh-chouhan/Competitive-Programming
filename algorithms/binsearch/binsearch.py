def binarySearch(arr, l, r, key):
    mid = int((l+r)/2)
    print(l, mid, r)

    if(arr[mid] == key):
        print(arr[mid], key)
        return mid
    
    if(l==r):
        return -1

    if(arr[mid] > key):
        return binarySearch(arr, l, mid-1, key)
    else:
        return binarySearch(arr, mid+1, r, key)

def main():
    arr = [2, 3, 5, 6, 8, 9, 14]
    print(arr)
    print(binarySearch(arr, 0, len(arr)-1, 5))


if __name__ == "__main__":
    main()
