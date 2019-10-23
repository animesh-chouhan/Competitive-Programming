
#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;



int main()
{
    ll t,a,b,c,count=0;
    cin>>t;
    while(t--)
    {   
        count=0;
        cin>>a>>b>>c;
        while(1)
        {   
            if(c-2>=0&&b-1>=0)
            {
                c-=2;
                b-=1;
                count+=3;
            }
            else if(b-2>=0&&a-1>=0)
            {
                b-=2;
                a-=1;
                count+=3;
            }
            else
            {
                break;
            } 
        }
        cout<<count<<"\n";
    }
    return 0;
}