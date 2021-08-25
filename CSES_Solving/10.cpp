#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i*=5)
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    REP(i,5,n+1)
    {
      ans+=n/i;       
    }
    cout<<ans<<""<<endl;
    return 0;
}