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
    ll n,t,val;
    cin>>n>>t;
    string seq;
    cin>>seq;

    for(int i=0;i<t;++i)
    {
        for(int j=0;j<n-1;++j)
        {
            if(seq[j]=='B'&& seq[j+1]=='G')
            {
                seq[j]='G';
                seq[j+1]='B';
                ++j;
            }
        }
    }
    cout<<seq<<"\n";
    return 0;
}
