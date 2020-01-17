#include <iostream>
#include <string>

using namespace std;

void print(string str)
{
    cout<<str<<"\n";
}


int main()
{
    string s0 = "";
    string s1 = "Hello";
    string s2 = s1;
    string s3(s2);
    string s4(s3, 1, 4);
    string s5("hello world", 8);
    string s6(5, '&');

    print(s0);
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);

}