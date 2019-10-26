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
        set<int> a;

        for(int i=0;i<n;i++)
        {
            cin>>val;
            a.insert(val);
        }
        if(n!=a.size())
        {
            cout<<-1<<"\n";    
        }
        else
        {   
            vector<int> b;
            for(auto x:a)
            {
                b.push_back(x);
            }
            int step=n/4;
            for(int i=step;i<n;i+=step)
            {
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
