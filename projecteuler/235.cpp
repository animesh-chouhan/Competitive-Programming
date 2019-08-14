#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define lli long long int

double calc(double l, double r, lli a, lli d, lli n, lli x)
{
    double mid = (l+r)/2;
    // double val = 0;
    // double mult =1;
    // for(int i=0; i<n; i++){
    //     lli coeff = a - i*d;
    //     val+=coeff*mult;
    //     // mult*=mid;
    // }

    double diff = (d*(pow(mid, n-1)-1)/(mid-1) + (a-n*d)*pow(mid, n) - (a-d))/(mid-1) + x;
    if(abs(diff)<0.001) 
        return mid;
    if(diff>0)
        return calc(mid, r, a, d, n, x);
    return calc(l, mid, a, d, n, x);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    lli q,a,d,n;
    double x;
    cin>>q;
    while(q--){
        cin>>a>>d>>n>>x;
        printf("%.12f",calc(1, 1.002, a, d, n ,x));
    }
    return 0;
}
