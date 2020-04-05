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
        int n,x;
        cin>>n>>x;
        int a[201] = {};

        int val;
        for(int i=0;i<n;++i)
        {
            cin>>val;
            a[val-1]=1;
        }

        int l=x;
        for(int i=0;i<201;++i)
        {
            if(l<1)
                break;

            if(a[i]==0)
            {
                a[i]=1;
                l--;
            }
        }

        for(int i=0;i<201;++i)
        {
            if(a[i]==0)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
