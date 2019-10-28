#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll tmp;
    for(int i=0;i<n;++i)
    {
        a[i]=n+1-a[i];    
    }
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
