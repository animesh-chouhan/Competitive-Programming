#include <iostream>
#include <string>

using namespace std;

#define lli long long int 

string func(string num, lli len){
    string temp=num;
    for(int i=0;i<len;i++){
        if(num[i+1]==num[i]) temp[i+1]='0';
    }
    return temp;
}

int func(lli num){
    lli temp=0;
    while(num){
        if(num%10==(num/10)%10) temp=10*temp;
        else temp=temp + 10*(num%10); 
        num/=10;
    }
    return temp;
}

// int main(){
//     lli t,nl,nr;
//     string l,r;
//     cin>>t;
//     while(t--){
//         cin>>nl>>l;
//         cin>>nr>>r;
//         lli ll = stoi(l),rr = stoi(r);
//         lli sum=0;
//         cout<<func(222001180);
//         // for(lli i=ll;i<rr;i++){
//         //     sum+=
//         // }

//     }
//     return 0;
// }

int main(){
    while(1){
        lli num;
        cin>>num;
        cout<<func(num)<<"\n";
    }
}