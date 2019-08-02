#include <iostream>
#include <string.h> 

using namespace std;

#define lli long long int 

bool game(string str){
    int l = str.length();
    bool flag1 = true;
    for(int i=0; i<l; i++) if(str[i]==1) flag1 = false;
    if(flag1==true) return true;
    else{
        for(int i=0; i<l; i++){
        if(str[i]==1){
            bool flag2 = game(str.substr(0,i)) && game(str.substr(i+1, l-i-1));
            }
        }
    }
}


int main(){
    lli t;
    cin>>t;
    while(t--){
        string str;
        getline (cin, str); 
        if(game(str)) cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;
        
    }
    return 0;
}