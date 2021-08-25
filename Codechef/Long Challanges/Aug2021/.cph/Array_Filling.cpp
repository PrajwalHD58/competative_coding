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

ll gcd(ll a,ll b)
{
     if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    pair<ll,ll> *arr=new pair<ll,ll>[m];
    ll ans;
    REP(i,0,m)
    {
        ll u,v;
        cin>>u>>v;
        arr[i]=mp(u,v);
    }
    sort(arr,arr+m);
    ans=arr[m-1].first*(n-(n/(arr[m-1].second)));
   
    ll prevlcm=arr[m-1].second;
    RREP(i,m-2,-1)
    {
       
        ll currgcd=gcd(prevlcm,arr[i].second);
       
        ll lcm=(prevlcm*arr[i].second)/currgcd;
       
        ll part=(n/prevlcm)-(n/lcm);
        
        ans+=part*arr[i].first;
        prevlcm=lcm;
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
solve();
}
return 0;
}