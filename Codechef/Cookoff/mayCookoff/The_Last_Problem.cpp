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

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
ll dp[1001][1001];

void solve()
{
    ll x1,x2,y1,y2,ans=0;
    cin>>x1>>y1>>x2>>y2;
    REP(i,x1-1,x2)
    {
        // cout<<dp[i][y1-1]<<" ";
        ans+=dp[i][y1-1];
    }
    REP(i,y1,y2)
    {
        // cout<<dp[x2-1][i]<<" ";
        ans+=dp[x2-1][i];
    }
    cout<<ans<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    dp[0][0]=1;
    REP(i,0,1001)
    {
        ll infact=i+1;
        if(i!=0)
            dp[i][0]=dp[i-1][0]+(i+1);
        // cout<<dp[i][0]<<" ";
        REP(j,1,1001)
        {
            dp[i][j]=dp[i][j-1]+(infact);
            infact++;
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;
    }
   
    ll t;

    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}