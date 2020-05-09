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

void infect(bool a[], bool infected[], int len, int x)
{
    if (a[x] == 0)
    {
        return;
    }
    else
    {
        if (infected[x] == 0)
        {
            infected[x] = 1;
            if (x > 0)
            {
                infect(a, infected, len, x - 1);
                if (x > 1)
                {
                    infect(a, infected, len, x - 2);
                }
            }
            if (x < len - 1)
            {
                infect(a, infected, len, x + 1);
                if (x < len - 2)
                {
                    infect(a, infected, len, x + 2);
                }
            }
        }
    }
}

int main()
{
    fast();
    test(t)
    {
        int n, val;
        cin >> n;
        int len = 20;
        bool a[len] = {};
        for (int i = 0; i < n; ++i)
        {
            cin >> val;
            a[val] = 1;
        }

        // for (auto x : a)
        // {
        //     cout << x << " ";
        // }

        vector<int> num_infected;
        for (int i = 0; i < len; ++i)
        {

            if (a[i] == 1)
            {

                bool infected[len] = {};
                infect(a, infected, len, i);
                num_infected.push_back(count(infected, infected + len, 1));
            }
        }
        auto result = minmax_element(num_infected.begin(), num_infected.end());
        cout << *result.first << " " << *result.second << "\n";
    }
    return 0;
}