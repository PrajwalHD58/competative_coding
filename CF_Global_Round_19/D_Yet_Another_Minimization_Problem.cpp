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

ll getsum(vector<ll> a, vector<ll> b)
{
    ll ans1, ans2, ans3;
    int n = sz(a);
    REP(i, 0, n)
    {
        ans1 += (a[i]) * (a[i]);
    }
    REP(i, 0, n)
    {
        ans2 += (b[i]) * (b[i]);
    }
    REP(i, 0, n)
    {
        ans3 += ((a[i] + b[i]) * (a[i] + b[i]));
    }
    ll ans = (n - 2) * ans3 + ans2 + ans1;

    return ans;
}

void solve()
{
    
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