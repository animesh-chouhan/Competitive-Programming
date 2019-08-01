#include <iostream>

using namespace std;

// array declaration 

void printing(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}

#define N 20
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

    int array[10] = {2, 5, 10};
    printing(array);

}