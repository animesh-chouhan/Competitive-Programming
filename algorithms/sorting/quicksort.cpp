#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

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
                
        }
        cout<<".";
    }
    cout<<"\n"<<"Fuckin Yes!!"<<"\n";
    return 0;
}