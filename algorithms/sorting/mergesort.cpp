#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

template <class T>
void print(pair<T *, int> p)
{
    T *arr = p.first;
    int n = p.second;
    cout << "[";
    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[n - 1] << "]\n";
}

template <class T>
pair<T *, int> merge(pair<T *, int> p1, pair<T *, int> p2)
{
    int l = p1.second + p2.second;
    int *arr = new T[l];
    pair<T *, int> ret(arr, l);

    T *it1 = p1.first;
    T *it2 = p2.first;
    for (int i = 0; i < l; i++)
    {
        // cout << *it1 << " " << *it2 << "\n";
        if (it1 < p1.first + p1.second && it2 < p2.first + p2.second)
        {
            if (*it1 > *it2)
            {
                arr[i] = *it2;
                it2++;
            }
            else
            {
                arr[i] = *it1;
                it1++;
            }
        }
        else if (it1 >= p1.first + p1.second)
        {
            arr[i] = *it2;
            it2++;
        }
        else if (it2 >= p2.first + p2.second)
        {
            arr[i] = *it1;
            it1++;
        }
    }

    return ret;
}

template <class T>
pair<T *, int> mergesort(pair<T *, int> p, bool desc = false)
{
    if (p.second == 1)
        return p;

    int mid = p.second / 2;
    pair<T *, int> p1(p.first, mid);
    pair<T *, int> p2(p.first + mid, p.second - mid);

    return merge(mergesort(p1), mergesort(p2));
}

// mergesort driver
int main()
{
    // float arr[] = {6.2, 2.2, 0.5, 3.1, 2.4, 9.7, 1, 8};
    int arr[] = {3, 1, 5, 6, 2, 8, 7, 4};
    pair<int *, int> p(arr, 8);
    print(p);
    print(mergesort(p));
    // print(p);
}

// merge tester
// int main()
// {
//     int arr1[] = {1, 2, 5, 7};
//     int arr2[] = {3, 4, 6, 9, 11};
//     pair<int *, int> p1 = make_pair(arr1, 4);
//     pair<int *, int> p2 = make_pair(arr2, 5);
//     print(p1);
//     print(p2);
//     pair<int *, int> p = merge(p1, p2);
//     print(p);
// }