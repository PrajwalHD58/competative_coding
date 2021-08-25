#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define RALL(x) rbegin(x), rend(x)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

vector<ll> adj[N],sv,v;
vector<pair<ll,ll>> val;

void dfs(ll n,int l=-1)
{
    for(auto x:adj[n])
    {
        if(x==l) continue;
        dfs(x,n);
    }
    val.clear();
    for(auto x:adj[n])
    {
        if(x!=l) val.push_back(make_pair(sv[x],x));
    }
    sort(RALL(val));
    int t=1;
    for(auto id : val) v[id.second]=t++;
    for(auto x: adj[n])
    {
        if(x!=l)
           sv[n]+=v[x]*sv[x];
    } 
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    sv.assign(n,1),v.assign(n,0);
    REP(i,0,n)
        vector<ll>().swap(adj[i]);
    
    REP(i,0,n-1)
    {
        ll u,v;
        cin>>u>>v;
        --u;--v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    cout<<sv[0]%mod*x%mod<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}