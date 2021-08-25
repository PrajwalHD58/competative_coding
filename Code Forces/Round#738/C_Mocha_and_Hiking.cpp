#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) printf('Case #%d: ', T)
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void addEdge(vector<int> adj[],int u,int v)
{
adj[u].push_back(v);
// adj[v].push_back(u);
}

void dfs(int node,vector<bool> &v,vector<int> &visitedNode,vector<int> g[])
{
    if(v[node])
        return;
    v[node]=true;
    cout<<node<<" ";
    visitedNode.push_back(node);

    for(int i=0;i<g[node].size();i++)
    {
        dfs(g[node][i],v,visitedNode,g);
    }
}

void solve()
{
    ll n;
    cin>>n;
    vector<int> v;
    v.push_back(0);
    REP(i,1,n+1)
    {
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
    
    if(v[n]==0)
    {
        REP(i,1,n+2)
        {
            cout<<i<<" ";
        }
        cout<<" \n";
        return;
    }
    if(v[1]==1)
    {
        cout<<n+1<<" ";
        REP(i,1,n+1)
        {
            cout<<i<<" ";
        }
        cout<<" \n";
        return;
    }
       
    REP(i,1,n)
    {
        if(v[i]==0 && v[i+1]==1)
        {
            REP(j,1,i+1)
            {
                cout<<j<<" ";
            }
            cout<<n+1<<" ";
            REP(j,i+1,n+1)
            {  
                cout<<j<<" ";
            }
            cout<<" \n";
            return;
        }
    }      
    cout<<"-1\n";

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