#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t,n,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<int> s;
        for(int i;i<n;++i)
        {
            cin>>val;
            s.insert(val);
        }
        cout<<n-int(s.size())-1;
    }
    return 0;
}
