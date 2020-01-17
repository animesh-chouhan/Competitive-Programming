#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1;
    list<int> l2(5, 100);

    for(auto x:l2) cout<<x<<" ";

    cout<<"\n"<<l1.empty()<<"\n";

    int a[] = {2, 1, 8, 9, 45, 12, 41, 67};
    l2.assign(a, a+8);

    for(auto x:l2) cout<<x<<" ";
    cout<<"\n";

    l2.front() = 59;
    l2.back() = 21;
    for(auto x:l2) cout<<x<<" ";
    cout<<"\n";

}