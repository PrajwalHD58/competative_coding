#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll *arr=new ll[n];
    vector<ll> v;
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll ans=(n+a);
    while(true)
    {
        
        ll x,y;
        x=ans-a;
        y=ans-b;
        if(arr[x]!=0)
        {
            x=0;
            arr[x]--;
        }
        if(arr[y]!=0)
        {
            y=0;
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;
    ll T=t;
    while(t--)
    {
        
        cout<<"Case #"<<T-t<<": ";
        solve();
    }
    return 0;
}