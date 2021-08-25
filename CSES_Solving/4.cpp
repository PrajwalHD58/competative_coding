#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll ans=0;
    REP(i,1,n)
    {
        ll subans=0;
        if(arr[i]<arr[i-1])
        {
         subans=arr[i-1]-arr[i];
         arr[i]=arr[i-1];
        }
    
          ans+=subans;
    }
    cout<<ans<<""<<endl;
    return 0;
}