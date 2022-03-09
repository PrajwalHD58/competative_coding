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

bool check(vector<int> v)
{
    for (int i = 2; i < sz(v); i++)
    {
        // cout<<v[i]<<"\n";
        if (v[i] == v[i - 1] + v[i - 2])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int it = n - 1;
    for (int i = 1; i <= n; i++)
    {
        it = n;
        cout << i << " ";
        while (it)
        {
            if (it != i)
            {
                cout << it << " ";
            }
            it--;
        }
        cout << "\n";
    }
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