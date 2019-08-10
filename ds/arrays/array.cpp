#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

// array declaration 

void printing(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}

#define N 20

int a;

void printarray(int arr[], int n)
{
        for (int i = 0; i < n; i++)
                cout << arr[i]<<" ";
        cout << "\n";
}

int main(){
    // int a[N] = {};
    // for(int i=0; i<N; i++) cout<<a[i]<<endl;
    // for(int elem:a) cout<<elem<<endl;
    int num;cout<<num<<" "<<&num<<"\n";
    int * p;cout<<p<<" "<<&p<<" "<<*p<<"\n";
    p = &num;cout<<p<<" "<<&p<<" "<<*p<<"\n";
    num = 10;cout<<p<<" "<<&p<<" "<<*p<<"\n";

    int*q = &num;
    cout<<q<<" "<<&q<<" "<<*q<<"\n";

    int* r = new int(3);
    cout<<r<<" "<<&r<<" "<<*r<<"\n";

    cout<<a;

    int arr1[] = {1, 9, 4, 5, 2, 13, 11};
    int l =sizeof(arr1)/sizeof(arr1[0]);
    printarray(arr1, l);
    sort(arr1, arr1+l);
    printarray(arr1, l);

    sort(arr1, arr1+l, greater<int>());
    printarray(arr1, l);

    int a[] = {14, 21, 23, 42, 35};

    array<int, 5> myarr; 
    myarr[0]=1;
    auto it1 = myarr.front();
    cout<<it1<<endl;

}