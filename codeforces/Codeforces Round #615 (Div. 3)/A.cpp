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
        ll n, a, b, c;
        cin >> a >> b >> c >> n;
        ll k = (n + a + b + c) / 3;
        ll res = (n + a + b + c) % 3;
        if (res % 3 == 0)
        {
            if (k - a >= 0 && k - b >= 0 && k - c >= 0)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
