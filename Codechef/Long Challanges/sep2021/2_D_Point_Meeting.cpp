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
    int n;
    cin>>n;
    ll *arrx=new ll[n];
    ll *arry=new ll[n];
    REP(i,0,n)
        cin>>arrx[i];
    REP(i,0,n)
        cin>>arry[i];

   
    ll ans=INT64_MAX;

    

   
    REP(i,0,n)
    {
        ll temp=0;
        ll currx=arrx[i],curry=arry[i];
        REP(j,0,n)
        {
            if(arrx[j]==currx && arry[j]==curry)
                continue;
            ll diff1=abs(currx-arrx[j]);
            ll diff2=abs(curry-arry[j]);
            if(currx==arrx[j] || curry==arry[j] || diff1==diff2)
            {
                temp+=1;
            }
            else
            {
                temp+=2;
            }
        }
        ans=min(ans,temp);
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
    while(t--)
    {
        solve();
    }
    return 0;
}