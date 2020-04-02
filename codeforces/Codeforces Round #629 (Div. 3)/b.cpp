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
    test(t)
    {
        ll n, k, l;
        cin >> n >> k;

        l = ceil(sqrt(2 * k + 0.25) - 0.5);
        ll num = 3 * pow(2, l - 1) - l * (l + 1) / 2 + k;

        // cout << num << '\n';
        bitset<18> x(num);
        string str = x.to_string();
        // cout << str << '\n';

        for (int i = 18 - n; i < 18; ++i)
        {
            if (str[i] == '0')
                cout << 'a';
            else
                cout << 'b';
        }
        cout << '\n';
    }
    return 0;
}
