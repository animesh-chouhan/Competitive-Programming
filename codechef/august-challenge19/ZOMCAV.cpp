#include <iostream>
#include <algorithm>

using namespace std;
#define lli long long int

void print(lli arr[], lli n){
    for(int i=0; i<n; i++) cout<<arr[i];
    cout<<"\n";
}

int main(){
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        lli c[n], h[n];
        for(int i=0; i<n; i++) cin>>c[i];
        for(int i=0; i<n; i++) cin>>h[i];
        lli l[n]={};
        for(int i=1; i<=n; i++){
            lli left = ((i-c[i-1])>=1)?(i-c[i-1]):1;
            lli right = ((i+c[i-1])<=n)?(i+c[i-1]):n;
            for(int j=left; j<=right; j++){
                l[j-1]++;
            }
        }
        // sort(h, h+n);
        // sort(l, l+n);
        // print(h, n);
        // print(l, n);

        lli sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            sum1+=h[i];
            sum2+=l[i];
        }
        if(sum1!=sum2) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";

    }
    return 0;
}