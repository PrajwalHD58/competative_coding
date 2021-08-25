#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll lim=n+1;
    ll dp[lim]={ 0 };
    for(ll i=0;i<(1<<n);i++)
    {
        ll ss=0,in=0;
        for(ll j=0;j<n;j++)
        {
            if(i==0 && j==0)
              break;
            if(i & (1<<j))
            {
                in++;
               ss=ss^arr[j];
            }
        }
        dp[in]=dp[in]+ss;
    }
     
    for(ll i=1;i<lim;i++)
        dp[i]=dp[i]+dp[i-1];
    ll q;
    cin>>q;
    while (q--)
    {
        ll m;
        cin>>m;
        cout<<dp[m]% 998244353<<""<<endl;
    }
    return 0; 
}