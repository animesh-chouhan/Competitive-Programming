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
        int n;
        cin >> n;
        int a[n];
        int count[n] = {};

        int var;
        for (int i = 0; i < n; ++i)
        {
            cin >> var;
            a[i] = var;
            count[var - 1]++;
        }

        int l1 = 0, l2;
        for (auto x : count)
        {
            if (x == 2)
            {
                l1++;
            }
            else
            {
                break;
            }
        }
        l2 = n - l1;
        // cout << l1 << l2 << "\n";

        bool check[n] = {};

        for (int i = 0; i < l1; ++i)
        {
            check[a[i] - 1] = 1;
        }
        for (int i = l1; i < n; ++i)
        {
            check[l1 + a[i] - 1] = 1;
        }
        int total1 = accumulate(check, check + n, 0);
        // print(check);

        for (auto &x : check)
        {
            x = 0;
        }

        // print(check);
        for (int i = 0; i < l2; ++i)
        {
            check[a[i] - 1] = 1;
        }
        for (int i = l2; i < n; ++i)
        {
            check[l2 + a[i] - 1] = 1;
        }
        int total2 = accumulate(check, check + n, 0);
        // print(check);

        if (total1 == n && total2 == n && l1 != l2)
        {
            cout << 2 << "\n";
        }
        else if ((total1 == n || total2 == n) || l1 == l2)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }

        if (total1 == n)
        {
            cout << l1 << " " << l2 << "\n";
        }

        if (total2 == n && l1 != l2)
        {
            cout << l2 << " " << l1 << "\n";
        }
    }
    return 0;
}
