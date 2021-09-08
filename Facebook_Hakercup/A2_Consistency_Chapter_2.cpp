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
#define google(T) cout<<"Case #"<<T<<": ";
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
int arr[26][26];

vector<int> dijkstraDist(vector<int> g[],int s)
{
    
    vector<int> dist(g.size());
 
    bool visited[g.size()];
    for (int i = 0; i < g.size(); i++) {
        visited[i] = false;
        path[i] = -1;
        dist[i] = inf;
    }
    dist[s] = 0;
    path[s] = -1;
    int current = s;
 
   
    unordered_set<int> sett;
    while (true) {
 
        
        visited[current] = true;
        for (int i = 0;
             i < g[current]->children.size();
             i++) {
            int v = g[current]->children[i].first;
            if (visited[v])
                continue;
            sett.insert(v);
            int alt= dist[current]+ g[current][i];
 
            if (alt < dist[v]) {
                dist[v] = alt;
                path[v] = current;
            }
        }
        sett.erase(current);
        if (sett.empty())
            break;
 
       
        int minDist = inf;
        int index = 0;
 
        for (int a: sett) {
            if (dist[a] < minDist) {
                minDist = dist[a];
                index = a;
            }
        }
        current = index;
    }
    return dist;
}

void solve()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    vector<int> v[26];
    REP(i,0,k)
    {
        string inp;
        cin>>inp;
        v[inp[0]-'A'].push_back(inp[1]-'A');
    }
    
    REP(i,0,26)
    {   
        REP(j,0,26)
        {
            if(i==j)
            {

            }
        
        }
    }
    REP(i,0,26)
    {
        vector<bool> isvisited(26,false);
        BFS(i,isvisited,v);
    }
    REP(i,0,26)
    {
        REP(j,0,26)
        {
            if(arr[i][j]!=-1)
            {
                cout<<(char)(65+i)<<" "<<(char)(65+j)<<" "<<arr[i][j]<<" \n";
            }
        }
       
    }
    ll ans=INT64_MAX;
    REP(i,0,26)
    {
        int consistance=i;
        ll temp=0;
        bool flag=false;
        REP(j,0,sz(s))
        {
            if((s[j]-'A')==consistance)
                continue;
            if(arr[s[j]-'A'][consistance]==INT_MAX)
            {
                flag=true;
                break;
            }
            else
            {
                temp+=(arr[s[j]-'A'][consistance]);
            }
        }
        if(!flag)
        {
            ans=min(ans,temp);
            flag=false;
        }
    }
    if(ans==INT64_MAX)
    {
        cout<<"-1\n";
        return;
    }
    cout<<ans<<" \n";
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
    google(T);
    solve();
    T++;
}
return 0;
}