#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

#define fast() ios_base::sync_with_stdio(false);
#define test(t) \
    ll t;       \
    cin >> t;   \
    while (t--)
#define pp pair<ll, ll>

using namespace std;

const ll N = 100005;
const int mod = 1000000007;
const long long int inf = 1e10 + 5;

int main()
{
    fast();

    ll  n, a, b, c, d, e, f;
    test(t)
    {
        cin >> n >> a;
        ll s = 2 * pow(10ll, n) + a;
        cout << s << endl;
        cin >> b;
        ll c = pow(10ll,n) - b;
        cout << c << endl;
        cin >> d;
        ll e = pow(10ll,n) - d;
        cout << e << endl;
        cin >> f;
        if (f == -1)
            break;
    }
    return 0;
}