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
#define D(a) cout<<#a<<"[ "<<a<<"]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


void solve(ll *pow2)
{
    ll n;
    cin>>n;
    ll m=n;
    vi v(10,0);
    ll ans=INT_MAX;
    while(m>0)
    {
        v[m%10]++;
        m/=10;
    }
    REP(i,0,33)
    {
        vi v2(10,0);
        ll temp=pow2[i],tempans=0;
        if(temp==0)
        {
            v2[0]++;
        }
        while(temp>0)
        {
            v2[temp%10]++;
            temp/=10;
        }
        REP(j,0,10)
        {
           
            tempans+=abs(v[j]-v2[j]);
            
        }
        D(tempans)
        ans=min(ans,tempans);
    }
    cout<<ans<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
ll t;
ll T=1;
cin>>t;

ll pow2[33];
pow2[0]=0;
pow2[1]=2;
REP(i,2,33)
{
    pow2[i]=pow2[i-1]*2;
}
while(t--)
{
solve(pow2);
}
return 0;
}