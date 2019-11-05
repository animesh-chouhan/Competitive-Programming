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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],chk[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        insertion_sort1(arr,n);
        for(int i=0;i<n;++i)
        {
            cin>>chk[i];
            if(chk[i]!=arr[i])
            {
                cout<<"Fuck You!!"<<endl;
                return -1;
            }
                
        }
        cout<<".";
    }
    cout<<"\n"<<"Fuckin Yes!!"<<"\n";
    return 0;
}