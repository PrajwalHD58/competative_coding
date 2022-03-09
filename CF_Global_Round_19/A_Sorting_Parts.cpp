// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define REP(i, a, b) for (long long i = a; i < b; i++)
// #define RREP(i, a, b) for (long long i = a; i > b; i--)
// #define trav(a, x) for (auto &a : x)
// #define all(x) x.begin(), x.end()
// #define sz(x) (int)(x).size()
// #define pb push_back
// #define popb pop_back
// #define mp make_pair
// #define google(T) cout << 'Case #' << T << ': '
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<int, pii> piii;

// #define TRACE(ARG)        \
//     cout << #ARG << endl; \
//     ARG
// #define D(a) cout << #a << '[ ' << a << ' ]' << endl;

// const int N = 3e5 + 5;
// const int mod = 1e9 + 7;
// const ll inf = 1e18;
// const int SZ = 101;
// const double eps = 1e-9;

// void solve()
// {
//     int n;
//     cin>>n;
//     vi v(n),v2(n);
//     REP(i,0,n)
//     {
//         cin>>v[i];
//         v2[i]=v[i];
//     }
//     sort(all(v));
//     if(v2==v)
//     {
//         cout<<"NO\n";
//     }
//     else{
//         cout<<"YES\n";
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     ll t;
//     ll T = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

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

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    cin >> v[i];
    ll ans = 0;

    REP(i,0,n)
    {
        int no_0 = 0, oth = 0;
        REP(j,i,n)
        {
            if (v[j] == 0)
            {
                no_0++;
            }
            oth += (j - i + 1);
            oth += no_0;
        }
        ans += oth;
    }
    cout << ans << "\n";
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