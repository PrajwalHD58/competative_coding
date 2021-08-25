#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"["<<a<<"]"<<"\n";

const int N = 4e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
vector<ll> adj[N];

ll pow_mod_k (ll a, ll b) {
    ll k=mod;
    ll result = 1 ;
    while (b--) {
       result *= a ;
       result %= k ;
    }
    return result ;
}

void DFS(ll node,bool flag[])
{
    flag[node]=true;
    for(ll nd:adj[node])
    {
        if(!flag[nd])
        DFS(nd,flag);
    }
}

void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>> v(2);
    REP(i,0,2)
    {
        REP(j,0,n)
        {
            ll inp;
            cin>>inp;
            v[i].push_back(inp);
        }
    }
    if(n==2 && n==3){
        cout<<"2\n";
        return;
    }
    ll ans=0,count=0;
   
    REP(i,0,n)
    {
        adj[v[0][i]].push_back(v[1][i]);
        adj[v[1][i]].push_back(v[0][i]);
    }
    bool flag[n+1];
    REP(i,0,n+1)
        flag[i]=false;
    REP(i,1,n+1)
    {

        if(!flag[i])
        {
            DFS(i,flag);
            count++;
        }
        
    }
    ans=pow_mod_k(2,count);
    cout<<ans<<" \n";
    REP(i,0,n+1)
    {
        adj[i].clear();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin .tie(0); 
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