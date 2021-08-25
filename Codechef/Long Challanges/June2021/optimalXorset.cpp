#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int dp[n+1];
    dp[0]=0;
    for(int i=0;i<=n;i++)
    {
        if(i<k)
        {
            dp[i]=max(dp[i-1]^i,dp[i-1]);
        }
    }
    return 0;
}