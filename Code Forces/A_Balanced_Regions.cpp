#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> w;
    REP(i,0,n)
    {
        ll inp;
        cin>>inp;
        w.push_back(inp);
    }
    ll k;
    cin>>k;
    vector<ll> u(k);
    REP(i,0,k)
    {
        ll inp;
        cin>>inp;
        u.push_back(inp);
    }
    ll m;
    cin>>m;
    vector<vector<ll>> v1,v2;
    REP(i,0,m)
    {
        ll t1,t2;
        cin>>t1>>t2;
        //v1[t1].push_back(t2);
        // v2[t2].push_back(t1);
    }
    cout<<"0\n";
      cout<<"0\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll t;
    ll T=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}