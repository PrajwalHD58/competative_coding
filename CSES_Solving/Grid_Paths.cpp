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

void solve()
{
    int n;
    cin>>n;
    char arr[n][n];
    REP(i,0,n)
    {
        REP(j,0,n)
            cin>>arr[i][j];
    }
    int dp[n][n];
    if(arr[0][0]=='.')
        dp[0][0]=1;
    else
    {
        cout<<"0\n";
        return;
    }
    REP(i,1,n )
    {
        if(arr[i][0]=='.')
            dp[i][0]=dp[i-1][0];
        else
            dp[i][0]=0;
    }
    REP(i,1,n)
    {
        if(arr[0][i]=='.')
            dp[0][i]=dp[0][i-1];
        else
            dp[0][i]=0;
    }
    REP(i,1,n)
    {
        REP(j,1,n)
        {
            if(arr[i][j]=='.')
            {
                dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    // REP(i,0,n)
    // {
    //     REP(j,0,n)
    //     {
            cout<<dp[n-1][n-1]<<" \n";
    //     }
    //     cout<<endl;
    // }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
   
        solve();
    
    return 0;
}