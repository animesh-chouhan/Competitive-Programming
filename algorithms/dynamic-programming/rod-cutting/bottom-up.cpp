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
    memo[0]=0;
    memo[1]=1;
}

int price_max(int n,int price[])
{
    if(n>1)
    {   
        int val;
        for(int i=2;i<=n;i++)
        {   
            vector<int> v;
            for(int j=1;j<=i;j++)
            {
                v.push_back(price[j]+memo[i-j]);
            }
            val=*max_element(v.begin(),v.end());
            memo[i]=val;
        }
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
