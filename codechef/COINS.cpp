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
#define lli long long int
#define NIL -1

lli calc(lli n, lli *lookup){
    if(lookup[n]==NIL){
            lli sum = n/2 + n/3 + n/4;
            // cout<<n<<" "<<sum<<" "<<(sum>=n)<<endl;
            if(sum>=n){
                lli val =  calc(n/2, lookup)+calc(n/3, lookup)+calc(n/4, lookup);
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
    lli N;
    while(1){
        cin>>N;
        if(N==0){
            cout<<0<<endl;
            continue;
        }
        lli *lookup = new lli[N+1];
        for(int i=0; i<=N; i++) lookup[i]=NIL;
        lli max = calc(N, lookup);
        cout<<max<<endl;
        // for(int i=0; i<=N; i++) cout<<lookup[i]<<endl;
    }
    
    return 0;
}