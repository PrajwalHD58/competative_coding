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

int minCoins(int *arr,int sum,int n)
{
    
    int ans=INT_MAX;
    if(sum==0)
        return 0;
    if(sum<0)
        return -1;
    else
    {
        int temp=0;
        REP(i,0,n)
        {
            temp=minCoins(arr,sum-arr[i],n);
            if(temp!=-1)
            {
                ans=min(ans,temp);
            }
        }
    }
    if(ans==INT_MAX)
        return -1;
    return ans+1;
}
void solve()
{
    int n,ts;
    cin>>n>>ts;
    int *arr=new int[n];
    REP(i,0,n)
        cin>>arr[i];
    //cout<<minCoins(arr,ts,n)<<" \n";
    int dp[ts+1];
         dp[0]=0;
    REP(i,1,ts+1)
    {
        dp[i]=-1;
        int temp=INT_MAX;
        REP(j,0,n)
        {
            if(i-arr[j]>=0)
            {
                if(dp[i-arr[j]]!=-1)
                    temp=min(temp,dp[i-arr[j]]);
            }
        }
        if(temp!=INT_MAX)
            dp[i]=(temp+1);
    }
    //REP(i,0,ts+1)
    cout<< dp[ts]<<" \n";

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
        solve();
    
    return 0;
}