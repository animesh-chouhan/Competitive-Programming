#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,g,b;
        cin>>r>>g>>b;
        ll a[3];
        a[0]=r;
        a[1]=g;
        a[2]=b;
        sort(a,a+3);
        ll y=(a[2]+a[0]-a[1])/2;
        ll x=a[0]-y;
        if(x<0)
        {
            x=0;
            y=a[0];
        }
        cout<<a[0]+min(a[1]-x,a[2]-y)<<"\n";
    }
    return 0;
}
