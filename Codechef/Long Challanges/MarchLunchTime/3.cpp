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
    ll ans[n]={0};
    REP(i,0,n)
    {
        cin>>arr[i];
    } 
   
    REP(i,0,n-1)
    {
        REP(j,i+1,n)
        {
            if(arr[j]==arr[i])
            {
                ans[i]++;
                ans[j]++;
                
            }
            else if(arr[i]<arr[j])
            {
                break;
            }
        }

    }
    REP(i,0,n)
    {
        cout<<ans[i]<<"  ";
    }
    cout<<endl;
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