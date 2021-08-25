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
#define D(a) cout<<#a<<"["<<a<<"]\n";

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;



void solve()
{
    int n,m;
    cin>>n>>m;
    int *arr=new int[m];
    REP(i,0,m)
    {
        cin>>arr[i];
    }
    ll dp[n+1][m];
    REP(i,0,m)
    {
        dp[0][i]=1;
    }
    REP(i,1,n+1)
    {
        REP(j,0,m)
        {
            ll x = (i-arr[j] >= 0) ? dp[i - arr[j]][j] : 0;
 
            // Count of solutions excluding S[j]
            ll y = (j >= 1) ? dp[i][j - 1] : 0;
 
            // total count
            dp[i][j] = x + y;
        }
    }
    
    
    cout<<dp[n][m-1]<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
//start here
solve();
return 0;
}