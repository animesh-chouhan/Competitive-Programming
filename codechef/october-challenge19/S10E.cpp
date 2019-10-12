#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(i<5)
            {
                if(arr[i]==*min_element(arr,arr+i+1))
                {
                    // cout<<i<<"\n";
                    count++;
                }
                    
            }
            else
            {
                if(arr[i]==*min_element(arr+i-5, arr+i+1))
                {
                    // cout<<i<<"\n";
                    count++;
                }
            }
        }
	    cout<<count<<endl;
	}
	
	return 0;
}