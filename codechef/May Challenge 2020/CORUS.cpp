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
#define print(list)       \
    for (auto x : list)   \
    {                     \
        cout << x << " "; \
    }                     \
    cout << "\n";
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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int cnt[26] = {};
        for (auto x : s)
        {
            cnt[x - 'a']++;
        }

        for (int i = 0; i < q; ++i)
        {
            int c, ans = 0;
            cin >> c;
            for (auto x : cnt)
            {
                int residue = x - c;
                if (residue > 0)
                {
                    ans += residue;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}