#include <iostream>
#include <array>

using namespace std;


template <class T>
void swap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<"Swapped a="<<a<<"\nSwapped b=";
}

int main()
{
    int a=10;
    int b= 20;

    swap1(a, b);

    array <int,10>::iterator it1;
}