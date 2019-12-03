#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<ll> s;
        for(int i=0;i<=sqrt(n);++i)
        {
            s.insert(i);
        }
        for(auto x:s)
        {
            if(x)
                s.insert(n/x);
        }
        cout<<s.size()<<"\n";
        for(auto x:s)
            cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}

