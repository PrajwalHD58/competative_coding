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
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void addEdge(vector<int> adj[],int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> graph[n+1];
     int u,v;
    while(m--)
    {
        cin>>u>>v;
        addEdge(graph,u,v);
    }
    int q,which;
    cin>>q;
    while(q--)
    {
        cin>>which;
        if(which==1)
        {
            cin>>u>>v;
            addEdge(graph,u,v);
        }
        else if(which==2)
        {
            cin>>u>>v;
            vector<int>::iterator new_end;
            new_end=remove(graph[u].begin(),graph[u].end(),v);
            new_end=remove(graph[v].begin(),graph[v].end(),u);
        }
        else
        {
            REP(i,0,n+1)
            {
                if(sz(graph[i])==0)
                    continue;
                bool flag=true;
                REP(j,0,sz(graph[i]))
                {
                    if(graph[i][j]<i)
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    REP(j,0,sz(graph[i]))
                    {
                        vector<int>::iterator new_end;
                        new_end=remove(graph[graph[i][j]].begin(),graph[graph[i][j]].end(),i);
                    } 
                }
            }
        }
    }
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