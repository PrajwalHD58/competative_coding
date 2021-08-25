#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ;

typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n),ans(n);
    vector<pair< ll,pair<ll,ll> > > cv;
    REP(i,0,n)
    {
        v[i].resize(m);
        ans[i].resize(m);
        
        REP(j,0,m)
        {
            cin>>v[i][j];
            ans[i][j]=-1;
            cv.push_back(make_pair(v[i][j],make_pair(i,j)));
        }
    }
    sort(cv.begin(),cv.end());
    REP(i,0,m)
    {
        ans[cv[i].second.first][i]=cv[i].first;
    } 
    REP(i,m,m*n)
    {
        ll k=0;
        while(ans[cv[i].second.first][k]!=-1)
        {
            k++; 
        }
        ans[cv[i].second.first][k]=cv[i].first;
    }
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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