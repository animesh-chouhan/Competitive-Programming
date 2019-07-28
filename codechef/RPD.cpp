#include <iostream>
#include <string>

using namespace std;

int main(){
    int T, N;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        int a[N];
        for(int i=0; i<N; i++){
          cin>>a[i];
        }
        int summax=0;
        int product; 
        //main code
        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                // string product = to_string(a[i] * a[j]);
                // // cout<<product<<endl;
                // int sum=0;
                // for(int k=0; k<product.size(); k++){
                //     sum+=(int)product[k]-48;
                //     // cout<<sum<<endl;
                // }
                int sum=0;
                product = a[i] * a[j];
                while(product){
                    sum+=product%10;
                    product=product/10;
                }
                if(sum>summax) summax = sum;
            }
        }
        cout<<summax<<endl;
    }
    return 0;
}
