#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i, a, b) for (long long i = a; i < b; i++)
#define RREP(i, a, b) for (long long i = a; i > b; i--)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) cout << 'Case #' << T << ': '
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;

#define TRACE(ARG)        \
    cout << #ARG << endl; \
    ARG
#define D(a) cout << #a << '[ ' << a << ' ]' << endl;

const int N = 3e5 + 5;
const int mod = 1e9 + 7;
const ll inf = 1e18;
const int SZ = 101;
const double eps = 1e-9;

ll max_sum(vector<ll> a, ll k, ll x)
{
    ll mx = 0, sm = 0, ind = 0;
    REP(i, 0, sz(a))
    {
        sm = max(sm + a[i], a[i]);
        if (mx < sm)
        {
            mx = sm;
            ind = i-ind;
        }
    }
    return mx + min(ind + 1, k) * x;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n), pre(n, 0);
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    REP(i, 0, n + 1)
    {

        cout<< max_sum(v,i,x)<<" ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    ll T = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}