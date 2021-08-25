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

void solve()
{
    ll n;
    cin>>n;
    ll *arr1=new ll[n];
    ll *arr2=new ll[n];
    REP(i,0,n)
    {
        cin>>arr1[i];
    }
    REP(i,0,n)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    ll ans=INT_MAX;
    if(arr1[n-1]>=arr2[n-1])
    {
        REP(i,0,n)
        {
            if((arr2[i]+arr1[n-1])<ans)
                ans=arr2[i]+arr1[n-1];
        }
    }
    else
    {
        REP(i,0,n)
        {
            if((arr1[i]+arr2[n-1])<ans)
                ans=arr1[i]+arr2[n-1];
        }
    }
    cout<<ans<<" "<<endl;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}