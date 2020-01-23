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
        ll n, x, y;
        cin >> n;
        vector<pair<ll, ll>> graph;
        graph.push_back(make_pair(0, 0));
        for (int i = 0; i < n; ++i)
        {
            cin >> x >> y;
            graph.push_back(make_pair(x, y));
        }
        sort(graph.begin(), graph.end());

        bool flag = true;
        string ans;
        for (int i = 1; i <= n; ++i)
        {
            ll r = graph[i].first - graph[i - 1].first;
            ll u = graph[i].second - graph[i - 1].second;
            if (r >= 0 && u >= 0)
            {
                if (r > 0)
                    ans += string(r, 'R');
                if (u > 0)
                    ans += string(u, 'U');
            }
            else
            {
                flag = false;
                cout << "NO"
                     << "\n";
                break;
            }
        }
        if (flag)
            cout << "YES"
                 << "\n"
                 << ans << "\n";
    }
    return 0;
}
