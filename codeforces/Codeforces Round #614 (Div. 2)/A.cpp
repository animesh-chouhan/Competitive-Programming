#include <bits/stdc++.h>

typedef int ll;
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
const long long int inf = 1e10 + 5;

int main()
{
    fast();
    test(t)
    {
        ll n, s, k;
        cin >> n >> s >> k;

        set<ll> a;
        ll tmp;
        for (int i = 0; i < k; ++i)
        {
            cin >> tmp;
            a.insert(tmp - s);
        }

        for (auto x : a)
            cout << x << " ";

        cout << "\n";
        // for (set<int>::iterator it = a.begin(); it != a.end(); ++it)
        // {
        //     if (*it != (it - a.begin()))
        //     {
        //         cout << i << "\n";
        //         break;
        //     }
        // }
    }
    return 0;
}
