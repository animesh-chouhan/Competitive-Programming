#include <iostream>
#include <bits/stdc++.h> 
#define lli long long int 

using namespace std;

int main() 
{
    lli t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
        lli val;
        vector<lli> arr;
        vector<lli> aux;
        aux.push_back(0);

        for(int i=0;i<n;i++)
        {
            cin>>val;
            arr.push_back(val);
        }
            

        lli max=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {   
            if(aux.front()>i)
                break;
            if(arr[i]%max==0&&arr[i]!=max)
                continue;
            // cout<<max<<endl;

            lli count=0;
            for(int j=i-1;j>=0;j--)
            {   
                if(arr[j]%arr[i]==0)
                {
                    count++;
                }
                    
                if(count>aux.front())
                {   
                    max = arr[i];
                    aux.push_back(count);
                    push_heap(aux.begin(),aux.end());
                }
            }
        }
        cout<<aux.front()<<endl;
    }
    return 0;
}