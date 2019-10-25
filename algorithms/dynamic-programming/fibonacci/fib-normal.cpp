#include <iostream>
#include <bits/stdc++.h> 
#define int long long

using namespace std;

int fib(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}

#undef int
int main()
{
#define int long long
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}
