#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

ll noOfdigits(ll n)
{
    ll ans;
    while(n>0)
    {
        ans++;
        n/=10;
    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll ans=0;
    REP(I,0,n)
    {
        if(arr[I-1]>=arr[I])
        {
             
        }
    }
    
    cout<<ans<<" \n";
    
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