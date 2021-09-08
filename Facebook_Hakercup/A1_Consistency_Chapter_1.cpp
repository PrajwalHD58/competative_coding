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
#define google(T) cout<<"Case #"<<T<<": ";
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    string s;
    cin>>s;
    vector<ll> v(26,0);
    ll hc=0,hv=0,cc=0,vc=0;
    REP(i,0,sz(s))
    {
        v[s[i]-'A']++;
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'  )
            vc++;
        else
            cc++;
    }
    
    REP(i,0,26)
    {
        if(i==0 || i==4 || i==8 || i==14 || i==20)
        {
            hv=max(hv,v[i]);
        }
        else
            hc=max(hc,v[i]);

    }
    ll ans1=(vc-hv)*2+cc;
    ll ans2=(cc-hc)*2+vc;
    cout<<min(ans1,ans2)<<" \n";
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
        google(T);
        solve();
        T++;
    }
    return 0;
}