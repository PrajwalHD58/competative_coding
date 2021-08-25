#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) printf('Case #%d: ', T)
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n;
    cin>>n;
    ll rorc=sqrt(n);
    if(rorc*rorc!=n)
    {
        rorc++;
    }
    ll lim=rorc*rorc;
    ll up=(rorc-1)*(rorc-1)+1;
    if(n>(lim-rorc+1))
    {
        cout<<rorc<<" "<<lim-n+1<<"\n";
    }
    else if(n<(lim-rorc+1))
    {
        cout<<n-up+1<<" "<<rorc<<" \n";
    }
    else
    {
        cout<<rorc<<" "<<rorc<<" \n";
    }
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