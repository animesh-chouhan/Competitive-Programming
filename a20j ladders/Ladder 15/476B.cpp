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

long long C(int n, int r)
{
    if (r > n - r)
        r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for (i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main()
{
    fast();
    string a, b;
    cin >> a >> b;

    int a_plus = 0, a_minus = 0;
    int b_plus = 0, b_minus = 0, b_ques = 0;

    for (auto x : a)
    {
        if (x == '+')
            a_plus++;
        if (x == '-')
            a_minus++;
    }
    for (auto x : b)
    {
        if (x == '+')
            b_plus++;
        if (x == '-')
            b_minus++;
        if (x == '?')
            b_ques++;
    }

    // cout << b_plus << b_minus << b_ques << '\n';
    double ans;

    if (a.length() == b.length())
    {
        if (b_ques == 0)
        {
            if (a_plus == b_plus && a_minus == b_minus)
                ans = 1;
            else
            {
                ans = 0;
            }
        }

        else
        {
            int def_plus = a_plus - b_plus;
            int def_minus = a_minus - b_minus;

            // cout << def_minus << " " << def_plus << '\n';
            if (def_plus >= 0 && def_minus >= 0)
            {
                ans = C(b_ques, def_plus) / pow(2, b_ques);
            }
            else
            {
                ans = 0;
            }
        }
    }

    else
    {
        ans = 0;
    }

    cout << setprecision(10) << ans << '\n';
    return 0;
}
