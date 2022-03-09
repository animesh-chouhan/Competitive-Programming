<<<<<<< HEAD
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

=======
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

#define fast() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define test(t) ll t;cin>>t;while(t--)
#define pp pair<ll,ll>

using namespace std;

const ll N = 100005;
const int mod = 1000000007;
const long long int inf = 1e10+5;

>>>>>>> 7096f118fd10542f68b8dd7c29dac961285d27d9
int partition(int* arr,int p,int r)
{
    int tmp,piv=arr[r];
    int j=p;
    for(int i=p;i<r;++i)
    {
        if(arr[i]<=piv)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            ++j;
        }
    }
    arr[r]=arr[j];
    arr[j]=piv;
    return j;
}

void quicksort(int* arr,int p,int r)
{
    if(p<r)
    {
        int piv=partition(arr,p,r);
        quicksort(arr,p,piv-1);
        quicksort(arr,piv+1,r);
    }
}

int main()
{
    // int arr[]={2,8,7,1,3,5,6,4};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // quicksort(arr,0,n-1);

    // for(int i=0;i<n;++i)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
<<<<<<< HEAD
=======
    fast();
>>>>>>> 7096f118fd10542f68b8dd7c29dac961285d27d9
    
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],chk[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        quicksort(arr,0,n-1);
        for(int i=0;i<n;++i)
        {
            cin>>chk[i];
            if(chk[i]!=arr[i])
            {
                cout<<"Fuck You!!"<<endl;
                return -1;
            }
<<<<<<< HEAD
                
=======
            else
            {
                cout<<".";
            }      
>>>>>>> 7096f118fd10542f68b8dd7c29dac961285d27d9
        }
        cout<<".";
    }
    cout<<"\n"<<"Fuckin Yes!!"<<"\n";
    return 0;
}