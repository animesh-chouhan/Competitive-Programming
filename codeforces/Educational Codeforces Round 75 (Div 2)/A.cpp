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
        string str;
        cin>>str;
        set<char> s;
        int i=0;

        while(i<str.size())
        {
            if(i+1<str.size()&&str[i+1]==str[i])
            {
                i+=2;
            }
            else
            {
                s.insert(str[i]);
                i+=1;
            }
        }
        for(auto x:s)
            cout<<x;
        cout<<"\n";
    }
    return 0;
}
