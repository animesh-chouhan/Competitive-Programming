#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> first={1, 2, 3, 4};
    // first.assign(7, 100);

    first.insert(first.begin()+2, 5, 2);
    auto it1 = first.begin() + 1;
    for (auto x : first)
        cout << x << " ";
    cout<<"\n";

    vector<int> second;
    second.assign(first.begin() + 1, first.begin() + 2);
    cout<<second.size()<<"\n";
    for (auto x : second)
        cout << x << " ";
    cout<<"\n";
}