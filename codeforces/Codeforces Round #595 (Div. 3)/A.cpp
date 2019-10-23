#include <iostream>
#include <bits/stdc++.h> 
#define ll int

using namespace std;

int main()
{
    int q,n,input;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<vector<int>> b;
        vector<int> v={a[0]};
        b.push_back(v);
        v.clear();

        for(int i=1;i<n;i++)
        {   
            bool flag=true;
            for(int j=0;j<b.size();j++)
            {
                if(find(b[j].begin(),b[j].end(),a[i]+1)==b[j].end()&&find(b[j].begin(),b[j].end(),a[i]-1)==b[j].end())
                {
                    b[j].push_back(a[i]);
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                v.push_back(a[i]);
                b.push_back(v);
                v.clear();
            }
        }
        // for(int i=0;i<b.size();i++)
        // {
        //     for(int j=0;j<b[i].size();j++)
        //         cout<<b[i][j]<<" ";
        //     cout<<"\n";
        // }


        cout<<b.size()<<endl;
    }
    return 0;
}
