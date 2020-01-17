#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;


int main()
{
    ll q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        ll val=ceil(log(n)/log(3));
        ll num=pow(3,val);
        ll tmp,ans;
        for(int i=val-1;i>=0;i--)
        {
            if(num==n){tmp=n;break;}

            tmp=num-2*pow(3,i);
            if(tmp==n)
                break;
            else if(tmp>n)
                num=tmp;   
        }
        cout<<num<<endl;
    }
    return 0;
}

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n>0)
//     {
//         v.push_back(n%3);
//         n/=3;
//     }
//     for(auto x:v)
//         cout<<x<<" ";
//     return 0;
// }