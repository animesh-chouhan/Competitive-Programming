#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int main()
{
    ll t,n;
    string val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int> m;
        vector<string> v;
        for(int i=0;i<n;++i)
        {
            cin>>val;
            v.push_back(val);
        }
        for(auto x:v)
        {
            m.insert(make_pair(x,0));
        }
        for(auto x:v)
        {
            m[x]++;
        }
        int changes=0;
        for(auto it=m.begin();it!=m.end();++it)
        {
            int count=it->second;
            if(count>1)
                changes+=count-1;
        }
        cout<<changes<<"\n";
        for(auto it=m.begin();it!=m.end();++it)
        {
            int count=it->second;
            if(count==1)
                cout<<it->first<<"\n";
            else if(count>1)
            {
                cout<<it->first<<"\n";
                string temp=it->first;
                string base(temp,0,3);
                // cout<<base<<"\n";
                int last=(int)(temp[3]-'0');
                // cout<<last<<" ";
                int a=0;
                while(count>1)
                {
                    if(a!=last)
                    {
                        cout<<base+to_string(a)<<"\n";
                        count--;
                    }
                    a++;
                }
            }
            // cout<<it->first<<" "<<it->second<<"\n";
        }
        
    }
    return 0;
}
