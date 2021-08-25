#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)


int main()
{
    ll t;
    cin>>t;
    ll T=t;
    while(t--)
    {
        ll ans=0,n,b;
        cin>>n>>b;
        ll *arr=new ll[n];
        REP(i,0,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        REP(i,0,n)
        {
            if(b-arr[i]>=0)
            {
               ans++;
               b-=arr[i];
            }
            else
            {
                break;
            }
        }
        cout<<"Case #"<<T-t+1<<":"<<ans<<endl;
    }
    return 0;
}