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
        ll n, r;
        cin >> n;

        r = sqrt(n);
        vector<ll> v;
        for (int i = 2; i <= r; ++i)
        {
            if (n % i == 0)
                v.push_back(i);
        }
        if (v.size() < 3)
            cout << "NO"
                 << "\n";
        else
        {
            cout << "YES"
                 << "\n";
            for (auto x : v)
            {
                ll d = n / (x * v[0]);
                ll r = n % (x * v[0]);
                if (r == 0 && d != x && d != v[0] && x != v[0])
                {
                    cout << v[0] << " " << x << " " << n / (v[0] * x) << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}
