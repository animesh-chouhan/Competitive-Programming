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
    ll n;
    cin >> n;

    ld sum = 0;
    for (ld i = 1; i <= n; ++i)
    {
        sum += 1 / i;
    }

    cout << fixed;
    cout << setprecision(8);
    cout << sum << "\n";
    return 0;
}
