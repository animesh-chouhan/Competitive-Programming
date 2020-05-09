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
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s.insert(a[i]);
            count[a[i] - 1]++;
        }

        int max_count = *max_element(count, count + n);
        // int max_count = count[max_count_index];
        // cout << max_count << s.size() << "\n";

        int len = s.size();
        if (len == max_count + 1)
        {
            cout << max_count << "\n";
        }
        else if (max_count == len)
        {
            cout << len - 1 << "\n";
        }
        else if (max_count > len)
        {
            cout << len << "\n";
        }
        else
        {
            cout << max_count << "\n";
        }
    }
    return 0;
}
