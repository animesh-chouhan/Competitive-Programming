#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define N 10

using namespace std;

const int NIL=-1;
int memo[N+1];

void init()
{
    for(int i=0;i<N+1;i++)
    {
        memo[i]=NIL;
    }
}

int price_max(int n,int price[])
{
    if(n<2)
    {
        memo[n]=price[n];
    }
    else
    {
        int val,max;
        vector<int> v;
        for(int i=1;i<n+1;i++)
        {
            val=price[i]+price_max(n-i,price);
            v.push_back(val);
        }
        max=*max_element(v.begin(),v.end());
        memo[n]=max;
    }   
    return memo[n];
}

int main()
{
    init();
    int n;
    cin>>n;
    int price[]={0,1,5,8,9,10,17,17,20,24,30};

    cout<<"Max="<<price_max(n,price)<<"\n";
    
    for(auto x:memo)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
