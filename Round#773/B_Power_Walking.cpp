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
    cin>>n;
    vector<int> v;
    map<int,int> mp;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        mp[inp]++;
    }
    for(auto i:mp)
    {
        v.push_back(i.second);
    }
    sort(v.begin(),v.end());
    int ans=0,it=0;
    int res=sz(v);
    REP(k,1,n+1)
    {
        if(k>res)
        {
            cout<<++res<<" ";
        }
        else{
            cout<<res<<" ";
        }
    }
    cout<<"\n";

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