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
#define D(a) cout<<#a<<a<<

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool compare(pii a,pii b)
{
    return a.first<b.first;
}
void solve()
{
    int n;
    cin>>n;
    vector<pii> v;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        v.push_back(make_pair(inp,i+1));
    }
    sort(v.begin(),v.end(),compare);
    int x=max(v[0].second,v[n-1].second);
    int y=n-min(v[0].second,v[n-1].second)+1;
    int ans1=min(v[0].second,v[n-1].second)+n-x+1;
    int ans=min(min(x,y),ans1);
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
        solve();
    }
    return 0;
}