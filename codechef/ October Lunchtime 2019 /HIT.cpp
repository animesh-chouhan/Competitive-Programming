#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t,n,val,step;
    cin>>t;
    while(t--)
    {
        cin>>n;
        step=n/4;
        vector<int> a;

        for(int i=0;i<n;i++)
        {
            cin>>val;
            a.push_back(val);
        }
        sort(a.begin(),a.end());
        if(a[n/4]==a[n/4-1]||a[2*n/4]==a[2*n/4-1]||a[3*n/4]==a[3*n/4-1])
        {
            cout<<-1<<"\n";   
        }
        else
        {   
            for(int i=step;i<n;i+=step)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
