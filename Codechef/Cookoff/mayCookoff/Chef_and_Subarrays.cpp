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
    ll n,k,ans=0;
    cin>>n>>k;
    ll arr[n];
    REP(i,0,n)
        cin>>arr[i];
    for (int i = 0; i < k; i++)
    {
        map<int, int> mp;
        int count = 0;
        for (int j = i; j < n; j += k)
        {
            mp[arr[j]]++;
            count = max(count, mp[arr[j]]);
        }
        ans += count;
    }
    cout<<n-ans<<" \n";
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