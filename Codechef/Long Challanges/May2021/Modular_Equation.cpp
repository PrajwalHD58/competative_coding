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

const int N = 1e5;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;



void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    vector<ll> res(n+1,1);
    REP(i,2,n+1)
    {
        ll temp=m%i;
        ans+=res[temp];
        for(int j=temp;j<=n;j+=i)
        {
            res[j]++;
        }
    }
    
    cout<<ans<<" \n";
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