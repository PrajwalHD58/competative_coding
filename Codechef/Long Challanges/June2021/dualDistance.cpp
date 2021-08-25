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
#define D(a) cout<<#a<<"["<<a<<"]";

const int N = 1e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

const int maxN = 20;
int level[N] , LCA[N][maxN+1];
 
 
void dfs(int node , int lvl , int par,vector<int> ar[])
{
	level[node] = lvl;
	LCA[node][0] = par;
 
	for(int child : ar[node])
	if(child != par)
	{
		dfs(child , lvl+1 , node, ar);
	}
}
 
 
void init(int n,vector<int> ar[])
{ 
	dfs(1 , 0 , -1,ar);
 
	for(int i=1;i<=maxN;i++)
	{
		for(int j=1;j<=n;j++)
		if(LCA[j][i-1] != -1)
		{
			int par = LCA[j][i-1];
			LCA[j][i] = LCA[par][i-1];
		}
	}
}
 
int getLCA(int a , int b)
{
	if(level[b] < level[a]) swap(a , b);
 
	int d = level[b] - level[a];
 
	while(d > 0)
	{
		int i = log2(d);
		b = LCA[b][i];
 
		d -= 1 << i;
	}
 
	if(a == b) return a;
 
	for(int i=maxN;i>=0;i--)
	if(LCA[a][i] != -1 && (LCA[a][i] != LCA[b][i]))
	{
		a = LCA[a][i] , b = LCA[b][i];
	}
 
	return LCA[a][0];
}
 
 
int getDist(int a , int b)
{
	int lca = getLCA(a , b);
	return level[a] + level[b] - 2*level[lca];
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
   
    int t;
    cin>>t;
    while(t--)
    {
        int n ,a , b , q;
        cin>>n>>q;

        vector<int> ar[n+1];

        for(int i=1;i<n;i++)
            cin>>a>>b , ar[a].pb(b), ar[b].pb(a);
        
        int arr[q][2];
        REP(i,0,q)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }

        for(int i=0;i<=n;i++)
        {
            level[i]=0;
            for(int j=0;j<=maxN;j++)
               LCA[i][j] = -1;
        }
        init(n,ar);

        int **dist=new int*[n+1];
      
        REP(i,1,n+1)
        {
            dist[i]=new int[n+1];
            REP(j,1,i+1)
            {
                if(i==j)
                    dist[i][j]=0;
                else{
                    int x=getDist(i,j);
                    dist[i][j]=x;
                    dist[j][i]=x;
                }
            }
        }
        
        REP(i,0,q)
        {
            ll ans=0;
            REP(j,1,n+1)
            {
                ans+=min(dist[arr[i][0]][j],dist[arr[i][1]][j]);
            }
            cout<<ans<<" \n";
        }
      
    }
    return 0;
}