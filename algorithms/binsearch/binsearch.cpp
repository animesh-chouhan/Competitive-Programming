#include <iostream>

using namespace std;

template <class T>
T binarySearch(T *arr, int l, int r, T key)
{
    int mid = (l+r)/2;
    cout<<l<<" "<<mid<<" "<<r<<"\n";
    cout<<arr[mid]<<" "<<key<<"\n";

    if(arr[mid]==key)
        return mid;
    
    if(l>=r)
        return -1;

    if(arr[mid]>key)
        return binarySearch(arr, l , mid-1, key);
    else
        return binarySearch(arr, mid+1, r, key);
    
}

int main()
{
    int arr[] = {2, 3, 5, 6, 8, 9, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearch(arr, 0, n - 1, 1) << "\n";
}