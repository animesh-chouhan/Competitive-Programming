#include <iostream>

using namespace std;


int main()
{
    float a[] = {0.6, 1, 2, 32};

    for(auto x:a)
        x=1;

    for(auto x:a)
        cout<<x<<" ";


    
    return 0;
}