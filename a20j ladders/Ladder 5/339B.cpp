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
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }

    int last = 1;
    ll sum = 0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= last)
        {
            sum += a[i] - last;
            last = a[i];
        }
        else
        {
            sum += n - last + a[i];
            last = a[i];
        }
    }
    cout << sum << "\n";
    return 0;
}
