#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double rec(int n){
    if(n==0||n==1) return 0;
    return log(n) + rec(n-1);
}


int main(){
    cout<<rec(3)<<endl;
    return 0;
}