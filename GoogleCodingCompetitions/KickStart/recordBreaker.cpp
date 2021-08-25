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
    ll N;
    cin>>N;
    ll arr[N];
    REP(i,0,N)
    {
        cin>>arr[i];
    }
    
    ll cur_max = -1;
	ll ans = 0;
	for (int i = 0; i < N; i++) {
			ans += arr[i] > cur_max && (i+1==N || arr[i] > arr[i+1]);
			cur_max = max(cur_max, arr[i]);
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