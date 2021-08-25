#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
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
    ll arr[4],a[4];
    REP(i,0,4)
    {
        cin>>arr[i];
        a[i]=arr[i];
    }
    sort(arr,arr+4);
    if(arr[3]==a[2] || arr[3]==a[3])
    {
        if(arr[2]==a[0] || arr[2]==a[1])
        {
            cout<<"YES\n";
            return;
        }
    }
    if(arr[3]==a[1] || arr[3]==a[0])
    {
        if(arr[2]==a[2] || arr[2]==a[3])
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
    solve();
    }
    return 0;
    }