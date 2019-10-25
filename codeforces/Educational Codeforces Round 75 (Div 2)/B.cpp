#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{

    // for(int i=0;i<10;i++)
    //     cout<<i;
    // cout<<"\n";
    // for(int i=0;i<10;++i)
    //     cout<<i;
    // cout<<"\n";

    int a[10];
    for(int i=0;i<10;++i)
        a[i]=i;

    vector<int> v(a,a+10);
    for(auto x:v)
        x=2;

    for(auto it=v.rbegin();it!=v.rend();++it)
    {
        cout<<*it;

    }

    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<*it;
        *it=2;
    }
    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<*it;
    }

    return 0;
}
