#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)


int main()
{
    ll t;

    cin>>t;
    ll T;
    T=t;
    while(t--)
    {
        ll n;
        cin>>n;
        string arr[n+1][2];
        REP(i,0,n+1)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        ll ans=0;
        REP(i,1,n)
        {
            string a,b;
            a=arr[i][0]+arr[i][1];
            b=arr[i-1][0]+arr[i-1][0];
            if(a<b)
            {
                ans++;
                //cout<<arr[i]<<" \n";
                arr[i][0]=a;
                arr[i][1]="";
                arr[i-1][0]=b;
                arr[i-1][1]="";
            }
                
            
        }
        cout<<"Case #"<<T-t<<": "<<ans<<endl;
    }
    return 0;
}