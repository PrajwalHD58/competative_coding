#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll ans=1;
    REP(i,1,n+1)
      ans=2*ans%((int)1e9+7);
    cout<<ans<<""<<endl;
    return 0;
}