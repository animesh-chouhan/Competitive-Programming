#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

// int main()
// {
//     ll t,n;
//     cin>>t;
//     vector<int> v{0,0,1,0,2,0,2,2,1,6,0,5,0,2,6,5,4,0,5,3,0,3,2,9,0,4,9,3,6,14,0,6,3,5,15,0,5,3,5,2,17,0,6,11,
//                 0,3,8,0,3,3,1,42,0,5,15,20,0,4,32,0,3,11,18,0,4,7,0,3,7,3,2,31,0,6,31,3,6,3,2,8,33,0,9,56,0,3,
//                 8,7,19,0,5,37,0,3,8,8,1,46,0,6,23,0,3,9,21,0,4,42,56,25,0,5,21,8,18,52,0,6,18,4,13,0,5,11,62,0,4,7};
//     // cout<<v.size();
//     while(t--)
//     {
//         cin>>n;
//         int val=v[n-1];
//         cout<<count(v.begin(),v.begin()+n,val)<<"\n";
//     }
//     return 0;
// }

int main()
{
    const int n=129;
    vector<vector<int>> pos(n);
    vector<int> count1(n,0);
    vector<int> seq;

    seq.push_back(0);
    pos[0].push_back(1);
    for(int i=0;i<128;++i)
    {
        int last=seq.back();
        if(pos[last].size()<2)
        {   
            seq.push_back(0);
            pos[0].push_back(seq.size());
        }
            
        else
        {   
            int val=*(pos[last].end()-1)-*(pos[last].end()-2);
            seq.push_back(val);
            pos[val].push_back(seq.size());
        }
    }

    // for(auto x:seq)
    //     cout<<x<<",";
    // cout<<"\n";

    int t,p;
    cin>>t;

    while(t--)
    {
        cin>>p;
        int val=seq[p-1];
        cout<<count(seq.begin(),seq.begin()+p,val)<<"\n";
    }
    
    return 0;
}
