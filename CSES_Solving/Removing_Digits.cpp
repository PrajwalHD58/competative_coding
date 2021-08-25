#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

ll findminSteps(int n,ll *dp)
{
   
    if(n<10)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    ll ans=INT_MAX,m=n;
    while(m>0)
    {
        ll dig=m%10;
        if(dig!=0)
        ans=min(ans,findminSteps(n-dig,dp));
        m/=10;
    }
    dp[n]=ans+1;
    return ans+1;
}

void solve()
{
    int n;
    cin>>n;
    if(n<10)
    {
        cout<<"1\n";
        return;
    }
    ll dp[n+1];
    REP(i,0,10)
        dp[i]=0;
    REP(i,10,n+1)
        dp[i]=-1;
    ll ans=findminSteps(n,dp);
    cout<<ans<<"\n";
}

int main()
{
   
    solve();
    return 0;
}