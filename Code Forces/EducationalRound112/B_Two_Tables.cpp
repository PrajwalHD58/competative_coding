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
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll W,H,x1,x2,y1,y2,w,h;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    ll sl=abs(x2-x1);
    ll sb=abs(y2-y1);
    ll area1=sl*H;
    ll area2=sb*W;
    ll tablearea=w*h;
    double Number=0.0;
    if(tablearea>area1 && tablearea>area2)
    {
        printf("-1\n");
        return;
    }
    ll x1gap=min(x1,x2)*h;
     ll x2gap=max(x1,x2)*h;
      ll y1gap=min(y1,y2)*w;
       ll y2gap=H-max(y1,y2)*w;
    
    if(tablearea<x1gap || tablearea<x2gap ||tablearea<y2gap ||tablearea<y1gap)
    {
        printf("%.9lf\n",Number);
        return;
    }
    Number=min(abs(x1gap-tablearea),min(abs(x2gap-tablearea),min(abs(y1gap-tablearea),abs(y2gap-tablearea))));
    double ans=Number/4;
    printf("%.9lf\n",ans);
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