#include <iostream>
#include <string.h>
#include <sstream> 

using namespace std;

#define lli long long int 

void printstring(string str){
    int l = str.length();
    for(int i=0; i<l; i++) cout<<str[i];
}

bool game(string str){
    int l = str.length();
    int num;
    stringstream(str)>>num;
    if(str=="1"||l==0){
        return true;
    }
    if(num==0){
        return false;
    }
    
    // cout<<l<<"\n";

    for(int i=0; i<l; i++){
        if(str[i]=='1'){
            if(i-1>=0) str[i-1] = (str[i-1]=='1') ?'0':'1';
            if(i+1<l)  str[i+1] = (str[i+1]=='1') ?'0':'1';
            // printstring(str.substr(0,i));cout<<"-";printstring(str.substr(i+1, l-i-1));cout<<"-"<<"\n";
            bool a =game(str.substr(0,i));
            bool b =game(str.substr(i+1, l-i-1));
            // cout<<"bool "<<(a&&b)<<"\n";
            return (a&&b);
        }
    }
    
}


int main(){
    lli t;
    cin>>t;
    cin>>ws;
    string str;
    while(t--){
        getline (cin, str); 
        if(game(str)) cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;
    }
    return 0;
}
