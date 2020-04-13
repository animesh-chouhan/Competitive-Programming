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

bool dfs(int n, bool *(graph[n]), bool gender[])
{
}

int main()
{
    fast();
    test(t)
    {
        int n, inter;
        cin >> n >> inter;
        bool graph[n][n] = {};
        bool gender[n] = {};

        int x, y;
        for (int i = 0; i < inter; ++i)
        {
            cin >> x >> y;
            graph[x][y] = 1;
            graph[y][x] = 1;
        }

        dfs(n, graph, gender);
    }
    return 0;
}
