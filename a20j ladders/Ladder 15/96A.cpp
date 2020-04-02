#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define test(t) \
    ll t;       \
    cin >> t;   \
    while (t--)
#define pp pair<ll, ll>

using namespace std;

const ll N = 100005;
const int MOD = 1000000007;
const long long int INF = 1e10 + 5;

int main()
{
    fast();

    int count = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length() - 1; ++i)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == 6)
        {
            cout << "YES" << '\n';
            return 0;
        }
        // cout << count << '\n';
    }
    cout << "NO" << '\n';

    return 0;
}
