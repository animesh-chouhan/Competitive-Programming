#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

template <class T>
void print(T arr[], int n)
{
    cout << "[";
    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[n - 1] << "]\n";
}

template <class T>
T insertion_sort1(T *arr, int n, bool desc=false)
{
    for (int i = 1; i < n; i++)
    {
        T key = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            bool compare;
            if(desc) 
                compare = arr[j] < key;
            else
                compare = arr[j] > key; 
        
            if (compare)
            {
                arr[j + 1] = arr[j];
                arr[j] = key;
            }
            

        }
    }
}

template <class T>
T insertion_sort2(T *arr, int n, bool desc=false)
{
    for (int i = 1; i < n; i++)
    {
        T key = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;  
        }
        arr[j+1] = key;
    }
}



int main()
{
    float arr[] = {6.2, 2.2, 0.5, 3.1, 2.4, 9.7, 1, 8};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print(arr, 8);
    insertion_sort2(arr, 8, true);
    print(arr, 8);
}