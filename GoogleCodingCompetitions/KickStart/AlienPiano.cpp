#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
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

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll ans=0;
    REP(i,0,n)
    {
        if(i%4==3)
        {
            if(i+1<n)
            {
                if(arr[i]<arr[i+1])
                {
                    ans++;
                }
            }
        }
        else
        {
            if(i+1<n)
             {
                if(arr[i]>arr[i+1])
                {
                    ans++;
                }
            }
           
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
    ll T=1;
    cin>>t;
    while(t--)
    {
        ll ans;
        cout<<"Case #"<<T<<": ";
        solve();
        T++;
    }
    return 0;
}