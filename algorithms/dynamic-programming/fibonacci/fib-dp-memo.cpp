#include <iostream>
#include <bits/stdc++.h> 
#define int long long
#define N 10000

using namespace std;

const int NIL=-1;
int memo[N];

void init()
{
    for(int i=0;i<N;i++)
    {
        memo[i]=NIL;
    }
    memo[0]=1;
    memo[1]=1;
}

int fib(int n)
{
    if(memo[n]==NIL)
    {
        int val=fib(n-1)+fib(n-2);
        memo[n]=val;
        return memo[n];
    }
    else
    {
        return memo[n];
    }
}

#undef int
int main()
{   
#define int long long
    init();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<"\n";

    // for(int i=0;i<N;i++)
    //     cout<<memo[i]<<" ";
    // cout<<endl;

    return 0;
}