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

const int N = 1e6 +1 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
// vector<int> dp;

// int possibleWays(int n)
// {
//     int ans=0;
//     if(dp[n]!=-1)
//         return dp[n];
//     if(n==0)
//         return 1;
//     else if(n<0)
//         return 0;
//     else
//     {
//         REP(i,1,7)
//         {
//             int temp=possibleWays(n-i);
//             ans+=temp;
//         }
//         dp[n]=ans;
//     }
//     return ans;
// }

int pw(int n)
{
    int dp[n+1];
    dp[0]=1;
    REP(i,1,n+1)
    {
        dp[i]=0;
        REP(j,1,7)
        {
            if((i-j)>=0)
                dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
            else
                break;
        }
    }
    return dp[n]%mod;
}

void solve()
{
    int n;
    cin>>n;
    cout<<pw(n)<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
// ll t;
// ll T=1;
// cin>>t;
// while(t--)
// {
    solve();
return 0;
}