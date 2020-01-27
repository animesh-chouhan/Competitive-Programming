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
    vector<ll> v, ans;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            v.push_back(i);
    }

    ans.push_back(1);
    for (auto it = v.begin() + 1; it != v.end(); ++it)
    {
        if (*it % *(ans.end() - 1) == 0 && n % *it == 0)
            ans.push_back(*it);
    }

    for (int i = 0; i < ans.size(); ++i)
        cout << ans[ans.size() - i - 1] << " ";
    cout << "\n";
    return 0;
}
