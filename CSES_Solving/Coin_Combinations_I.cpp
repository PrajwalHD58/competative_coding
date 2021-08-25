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

int findpw(int *arr,int n,int sum)
{
    int dp[sum+1];
    dp[0]=1;
    REP(i,1,sum+1)
    {
        dp[i]=0;
        REP(j,0,n)
        {
            if((i-arr[j])>=0)
                dp[i]=(dp[i]%mod+dp[i-arr[j]]%mod)%mod;
            else 
                break;
        }
    }
    return dp[sum];
}
void solve()
{
    int n,x;
    cin>>n>>x;
    int *arr=new int[n];
    REP(i,0,n)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<findpw(arr,n,x)<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);

solve();

return 0;
}