#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

ll n;

void solve(ll *arr)
{
    ll x,k;
    cin>>x>>k;
    ll step=0,ans=0;
    REP(i,x-1,n)
    {
        if(arr[i]<=k)
        {
            ans+=arr[i]*step;
            k=k-arr[i];
            arr[i]=0;
        }
        else if(arr[i]>k)
        {
            ans+=step*k;
            k=0;
            arr[i]=arr[i]-k;
        }
        if(k==0)
          break;
        step++;
    }
    cout<<ans<<" "<<endl;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
     cin>>arr[i];
     ll q;
     cin>>q;
    while(q--)
    {
        solve(arr);
    }
    return 0;
}