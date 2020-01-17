#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t,n,k,val;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            a.push_back(val);
        }

        int count1=0,count2=0;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j])
                    count1++;
        vector<int> b(a);
        sort(b.begin(),b.end());
        set<int> s(b.begin(),b.end());
        
        // count2=n*(n-1)/2;
        for(auto it=s.begin();it!=s.end();it++)
        {
            count2+=distance(b.begin(),lower_bound(b.begin(),b.end(),*it));
        }

        if(k==1)
            cout<<count1<<"\n";
        else if(k==2)
            cout<<count2<<"\n";
        else
            cout<<k*count1+k*count2*(k-1)/2<<"\n";
    }
    return 0;
}