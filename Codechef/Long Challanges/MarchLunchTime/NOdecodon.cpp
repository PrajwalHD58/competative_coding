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
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


void solve()
{
    map<int,pair<char,list<int>>> graph;
    ll n,l,m;
    cin>>n>>m>>l;
    string s;
    cin>>s;
    char arr[n];
    REP(i,0,m)
    {
        cin>>arr[i];
    }
    vector<vector<ll>> v(n);
    REP(i,0,m)
    {
        v[i].resize(2);
        REP(j,0,2)
        {
            cin>>v[i][j];
        }
    }
     

    
    
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