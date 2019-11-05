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
        string a[n];
        int b[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            b[i]=stoi(a[i],nullptr,2);
        }
        int tmp=b[0];
        for(int i=1;i<n;++i)
        {
            tmp=tmp^b[i];
        }
        // cout<<tmp<<"\n";
        string s = bitset<15>(tmp).to_string();
        int count=0;
        for(auto x:s)
            if(x=='1')
                ++count;
        cout<<count<<"\n";
    }
    return 0;
}
