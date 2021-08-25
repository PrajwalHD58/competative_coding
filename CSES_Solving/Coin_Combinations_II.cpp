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

bool dp[N];

int coincomb2(int *arr,int n,int ts)
{
    int dp[ts+1]={0};
    dp[0]=1;
    REP(i,0,n)
    {
        REP(j,1,ts+1)
        {
            if(j-arr[i]>=0)
            {
                dp[j]=(dp[j]+dp[j-arr[i]])%mod;
            }
        }
    }
    return dp[ts];
}

void solve()
{
   
    int n,sum;
    cin>>n>>sum;
    int *arr=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<coincomb2(arr,n,sum)<<" \n";
}

int main()
{
   
    solve();
    return 0;
}