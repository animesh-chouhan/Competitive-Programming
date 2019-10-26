#include <iostream>
#include <bits/stdc++.h> 
#define ll long long

using namespace std;

int price_max(int n,int price[])
{
    if(n<2)
    {
        return price[n];
    }
    else
    {
        int val;
        vector<int> v;
        for(int i=1;i<n+1;i++)
        {
            val=price[i]+price_max(n-i,price);
            v.push_back(val);
        }
        return *max_element(v.begin(),v.end());
    }   
}

int main()
{
    int n;
    cin>>n;
    int price[]={0,1,5,8,9,10,17,17,20,24,30};

    cout<<price_max(n,price);
    cout<<endl;
    return 0;
}
