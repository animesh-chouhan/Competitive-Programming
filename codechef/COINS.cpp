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

#include <iostream>

using namespace std;
#define NIL -1

// int main(){
//     for(long long int i=0; i<500; i++){
//         int sum = i/2 + i/3 + i/4;
//         cout<<i<<" "<<(i-sum)<<endl;
//     }
//     return 0;
// }

long long int calc(long long int n, long long int *lookup){
    if(lookup[n]==NIL){
            long long int sum = n/2 + n/3 + n/4;
            // cout<<n<<" "<<sum<<" "<<(sum>=n)<<endl;
            if(sum>=n){
                long long int val =  calc(n/2, lookup)+calc(n/3, lookup)+calc(n/4, lookup);
                lookup[n] = val;
                return val;
            }
            else{
                lookup[n] = n;
                return n;
            }
    }
    else return lookup[n];
}

int main(){
    long long int N;
    while(1){
        cin>>N;
        if(N==0){
            cout<<0<<endl;
            continue;
        }
        long long int *lookup = new long long int[N+1];
        for(int i=0; i<=N; i++) lookup[i]=NIL;
        long long int max = calc(N, lookup);
        cout<<max<<endl;
        // for(int i=0; i<=N; i++) cout<<lookup[i]<<endl;
    }
    
    return 0;
}