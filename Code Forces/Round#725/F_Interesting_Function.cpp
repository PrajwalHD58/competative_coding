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
#define D(a) cout<<#a<<"{"<<a<<"}";

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;



ll finddigitchange(ll i,ll dp[])
{
    ll ans=0,count=0;
    string s=to_string(i);
    RREP(i,(ll)s.size(),0)
    {
        ans=(ans+(ll)s[i-1]-48)*dp[i-1];
    }
    return ans;
}
void solve(ll dp[])
{
    ll l, r,ans;
    cin>>l>>r;
    ans=r-l+1;
    ll x=finddigitchange(r,dp);
    cout<<x<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
ll t;
ll T=1;
cin>>t;
ll dp[10];
dp[0]=1;
dp[1]=10;
REP(i,2,10)
{
    dp[i]=(ll)pow(10,i-1)*11;
    cout<<dp[i]<<" \n";
}
while(t--)
{
    solve(dp);
}
return 0;
}