#include <iostream>

using namespace std;

#define lli long long int 

int main(){
    lli t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long double cond2 = ((long double)n/k)/k;
        lli cond1 = cond2;
        // cout<<cond1<<" "<<cond2;
        if(cond2-cond1==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}