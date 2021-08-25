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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    REP(i,0,n)
        cin>>a[i];
    ll dp[31]={0};
    REP(i,0,n)
    {
        REP(j,0,31)
        {
            ll x=1<<j;
            if(a[i]&x)
            {
                dp[j]+=1;
            }
        }
    }
    ll ans=0;
    REP(i,0,31)
    {
        ll x=1<<i;
        if(dp[i])
             ans+=x;
    }
    cout<<ans<<" "<<endl;
    REP(i,0,q)
    {
        ll ind,v;
        cin>>ind>>v;
        REP(j,0,31)
        {
            ll x=1<<j;
            if(a[ind-1]&x)
            {
                dp[j]-=1;
            } 
        }
        REP(j,0,31)
        {
            ll x=1<<j;
            if(v&x)
            {
                dp[j]+=1;
            }

        }
        a[ind-1]=v;
        ll ans=0;
        REP(j,0,31)
        {
            ll x=1<<j;
            if(dp[j]>0)
                ans+=x;
        }
        cout<<ans<<" "<<endl;
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