#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
         
struct edge
{
    ll a;
    ll b;
    ll c;
    ll d;
};

bool BFS(map<ll,list<ll>> adj, ll src, ll  dest, ll v,
         ll pred[], ll dist[])
{
    // a queue to maintain queue of vertices whose
    // adjacency list is to be scanned as per normal
    // DFS algorithm
    list<ll> queue;
 
    // boolean array visited[] which stores the
    // information whether ith vertex is reached
    // at least once in the Breadth first search
    bool visited[v];
 
    // initially all vertices are unvisited
    // so v[i] for all i is false
    // and as no path is yet constructed
    // dist[i] for all i set to infinity
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
 
    // now source is first to be visited and
    // distance from source to itself should be 0
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
 
    // standard BFS algorithm
    while (!queue.empty()) {
        ll u = queue.front();
        queue.pop_front();
        for (ll i:adj[u]) {
            if (visited[i] == false) {
                visited[i] = true;
                dist[i] = dist[u] + 1;
                pred[i] = u;
                queue.push_back(i);
 
                // We stop BFS when we find
                // destination.
                if (i == dest)
                    return true;
            }
        }
    }
 
    return false;
}
 
void printShortestDistance(map<ll,list<ll>> adj , ll s,
                           ll dest, ll v)
{
    // predecessor[i] array stores predecessor of
    // i and distance array stores distance of i
    // from s
    ll pred[v], dist[v];

    
 
    if (BFS(adj, s, dest, v, pred, dist) == false) {
        // cout << "Given source and destination"
            //  << " are not connected";
        cout<<"-1"<<endl;
        return;
    }
 
    // vector path stores the shortest path
    vector<ll> path;
    ll crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
  
        crawl = pred[crawl];
    }
 
    // distance from source is in distance array
    cout << " "<< dist[dest]<<endl;
 
    // printing path from source to destination
    // cout << "\nPath is::\n";
    // for (int i = path.size() - 1; i >= 0; i--)
    //     cout << path[i] << " ";
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
        ll n, m,x,y;
        cin>>n>>m>>x>>y;
        vector<edge> gf;
        REP(i,0,m)
        {
            edge e;
            ll t1,t2,t3,t4;
            cin>>t1>>t2>>t3>>t4;
            e.a=t1;
            e.b=t2;
            e.c=t3;
            e.d=t4;
            
            gf.push_back(e);
        }
        map<ll,list<ll>> graph;
        REP(i,0,m)
        {
            REP(j,gf[i].a,(gf[i].b)+1)
            {
                REP(k,gf[i].c,(gf[i].d)+1)
                {
                    graph[j].push_back(k);
                }
            }
        }
        // REP(i,1,n+1 )
        // {  
        //     cout<<i<<"  ->";
        //     for(int j: graph[i])
        //     {
        //         cout<<"  "<<j;
        //     }
        //     cout<<endl;
        // }
        if(x==y)
        {
            cout<<"0"<<endl;
            continue;
        }
        printShortestDistance(graph, x, y, n);

    }
    return 0;
} 