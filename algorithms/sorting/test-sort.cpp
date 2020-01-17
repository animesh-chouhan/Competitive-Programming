#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define T 1000
#define N 10000
#define VAL 30000

int main()
{
    srand (time(NULL));
    cout<<T<<"\n";
    for(int i=0;i<T;++i)
    {
        int n=rand()%N+1;
        cout<<n<<"\n";
        int arr[n];
        for(int j=0;j<n-1;++j)
        {
            int x=rand()%VAL+1;
            arr[j]=x;
            cout<<x<<" ";
        }
        arr[n-1]=rand()%VAL+1;
        cout<<arr[n-1]<<"\n";

        sort(arr,arr+n);
        for(int j=0;j<n-1;++j)
        {
            cout<<arr[j]<<" ";
        }
        cout<<arr[n-1]<<"\n";
    }
<<<<<<< HEAD
=======
    cout<<"Done!"<<"\n";
>>>>>>> 7096f118fd10542f68b8dd7c29dac961285d27d9
    return 0;
}