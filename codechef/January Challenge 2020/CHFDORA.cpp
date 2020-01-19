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
const long long int inf = 1e10 + 5;

int main()
{
    fast();
    test(t)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
                // a[i][j] = rand() % 10 + 1;
                // cout << a[i][j] << " ";
            }
            // cout << "\n";
        }

        ll count = n * m;
        for (int l = 3; l <= min(n, m); l += 2) //l=length
        {
            for (int i = l / 2; i < n - l / 2; ++i)
            {
                for (int j = l / 2; j < m - l / 2; ++j)
                {
                    // cout << a[i][j] << " ";
                    bool flag = true;
                    for (int k = 1; k <= l / 2; ++k)
                    {
                        if (a[i + k][j] != a[i - k][j] || a[i][j + k] != a[i][j - k])
                        {
                            flag = false;
                            break;
                        }
                    }

                    if (flag)
                    {
                        // cout << "Found " << i << " " << j << '\n';
                        count++;
                    }
                }
                // cout << "\n";
            }
        }
        cout << count << "\n";
    }
    return 0;
}