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
        vector<string> a;

        for (int i = 0; i < 9; ++i)
        {
            string str;
            cin >> str;
            a.push_back(str);
        }

        a[0][1] = a[0][0];
        a[1][4] = a[1][3];
        a[2][7] = a[2][6];
        a[3][1] = a[3][0];
        a[4][4] = a[4][3];
        a[5][7] = a[5][6];
        a[6][1] = a[6][0];
        a[7][4] = a[7][3];
        a[8][7] = a[8][6];

        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
