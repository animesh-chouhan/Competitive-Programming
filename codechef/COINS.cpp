//Fucking while(cin>>n) leading to TLE


/*
    DYNAMIC PROGRAMMING
    Soln:
    #include<bits/stdc++.h>
    using namespace std;
    #define lli long long int
    lli func(lli n,lli *a)
    {
        if(n==0 || n==1)
            return n;
        if(a[n]!=0)
            return a[n];

        a[n]=max(n,func(n/2,a)+func(n/3,a)+func(n/4,a));
        return a[n];
    }
    int main()
    {
        lli n;
        while(cin>>n){
                lli *a =new lli[n+1];
                cout<<func(n,a)<<endl;
            }
    }
*/
// int main()
// {
//     for(int i=0; i<30; i++)
//     {
//         int cond = i - (i/2+i/3+i/4);
//         cout<<i<<" "<<cond<<"\n";

//     }
// }

#include <iostream>

using namespace std;
#define lli long long int

lli calc(lli n, lli* lookup){
    if(n<12) return n;
    // for(int i=0; i<=n; i++) cout<<lookup[i]<<"\n";
    // cout<<"\n";
    if(lookup[n]!=0)
        return lookup[n];
    lookup[n] = calc(n/2, lookup)+calc(n/3, lookup)+calc(n/4, lookup);
    return lookup[n];
}

int main(){
    lli n;
     
    while(cin>>n){
        lli *lookup=new lli [n+1];
        // for(int i=0; i<=n; i++) lookup[i]=-1;
        // for(int i=0; i<=n; i++) cout<<lookup[i];
        cout<<calc(n, lookup)<<"\n";
    }
    
    return 0;
}




// #include <iostream>
// using namespace std;

// long long int  rec_fun(long long int *arr,long long int n)
// {
//     if(n==0)return 0;
//     if(arr[n]!=0)return arr[n];
//     arr[n]=max(n,rec_fun(arr,n/2)+rec_fun(arr,n/3)+rec_fun(arr,n/4));
//     return arr[n];
// }
// int main()
// {
//     long long int n;
//     while(cin>>n)
//     {
//         long long int *arr=new long long int [n+1];
//         cout<<rec_fun(arr,n)<<endl;
//     }
//      return 0;
// }