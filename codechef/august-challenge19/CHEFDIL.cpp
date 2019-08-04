#include <iostream>
#include <string.h> 

using namespace std;

#define lli long long int 

void printstring(string str){
    int l = str.length();
    for(int i=0; i<l; i++) cout<<str[i];
}

bool game(string str){
    int l = str.length();
    // cout<<l<<"\n";
    // bool flag1 = true;
    // for(int i=0; i<l; i++) if(str[i]==1) flag1 = false;
    // if(flag1==true) return true;
    if(str=="1"){
        // cout<<"yes\n";
        return true;
    }
    if(str=="0"){
        // cout<<"no\n";
        return false;
    }

    for(int i=0; i<l; i++){
        if(str[i]=='1'){
            if(i-1>=0) str[i-1] = (str[i-1]=='1') ?'0':'1';
            if(i+1<l)  str[i+1] = (str[i+1]=='1') ?'0':'1';
            // printstring(str.substr(0,i));cout<<" ";printstring(str.substr(i+1, l-i-1));cout<<"\n";
            printstring(str);cout<<"\n";
            bool a=game(str.substr(0,i));
            bool b=game(str.substr(i+1, l-i-1));
            return a&&b;
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
