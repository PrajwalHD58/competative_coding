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

int editDist(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    //base cases
    if(s1==s2)
        return 0;
    if (m==0)
        return n;
    if(m==0)
        return m;
    REP(i,0,n+1)
    {
        REP(j,0,m+1)
        {
            if(i==0 )
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+1));
            }
        }
    }
    return dp[n][m];
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int n,m;
    n=s1.size();
    m=s2.size();
    cout<<editDist(s1,s2,n,m)<<" \n"; 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
    
    return 0;
}