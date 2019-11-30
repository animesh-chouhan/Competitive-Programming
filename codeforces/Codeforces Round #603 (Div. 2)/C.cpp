#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t;
    float n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v;
        for(int i=0;i<=sqrt(n);++i)
        {
            v.push_back(i);
        }
        if(n/v.back!=v.back)
            v.push_back(n/v.)
        cout<<n<<"\n";
    }
    return 0;
}

