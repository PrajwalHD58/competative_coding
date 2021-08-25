#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<a<<

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

ll pair_sum(ll arr[], ll size, ll x){
   ll arr_0 = 0;
   ll arr_1 = size-1;
   ll count = 0;
   while(arr_0 < arr_1){
      if (arr[arr_0] + arr[arr_1] < x){
         count = count + (arr_1 - arr_0);
         arr_0++;
      }
      else{
         arr_1--;
      }
   }
   return count;
}

ll findPairs(ll arr[],ll n,ll x)
{
    sort(arr,arr+n);
    ll l = 0, r = n-1;
    ll result = 0;
 
    while (l < r)
    {
        // If current left and current
        // right have sum smaller than x,
        // the all elements from l+1 to r
        // form a pair with current l.
        if (arr[l] + arr[r] < x)
        {
            result += (r - l);
            l++;
        }
 
        // Move to smaller value
        else
            r--;
    }
 
    return result;
}
 
void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll ans,ans2;
    ans=findPairs(arr,n,r+1);
    ans2=findPairs(arr,n,l);
    cout<<ans-ans2<<" \n";
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