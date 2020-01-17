#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long

using namespace std;

/*
10 4
2 5 3 6

1 0 1 1 1 3 3 5 8 10 17 
17
*/

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<ll> memo;

void init(int n,int c_size)
{
    memo.resize(n+1,-1);
    memo[0]=1;
}

int ways(int n, vector<long> c)
{
    int c_size = (int)c.size();

    if(memo[n]==-1)
    {
        for(int i=1;i<=n;++i)
        {
            int val=0;
            for(int j=0;j<c_size;++j)
            {
                if(i-c[j]>=0)
                    val+=ways(i-c[j],c);
            }
            memo[i]=val;
        }
    }
    return memo[n];
}

long getWays(int n, vector<long> c) 
{
    ways(n,c);
    for(auto x:memo)
        printf("%lld ",x);
    printf("\n%lld\n",memo[n]);
    return memo[n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split(rtrim(c_temp_temp));

    vector<long> c(m);

    for (int i = 0; i < m; i++) {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    // Print the number of ways of making change for 'n' units using 
    // coins having the values given by 'c'
    int c_size = (int)c.size();
    init(n,c_size);
    long ways = getWays(n, c);

    fout << ways << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
