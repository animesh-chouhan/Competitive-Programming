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
        ll n, s, k;
        cin >> n >> s >> k;

        ll tmp;
        vector<ll> c;
        for (int i = 0; i < k; ++i)
        {
            cin >> tmp;
            c.push_back(tmp);
        }

        for (int i = 0; i <= k; ++i)
        {
            if (s - i >= 1 && find(c.begin(), c.end(), s - i) == c.end())
            {
                cout << i << "\n";
                break;
            }
            if (s + i <= n && find(c.begin(), c.end(), s + i) == c.end())
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
