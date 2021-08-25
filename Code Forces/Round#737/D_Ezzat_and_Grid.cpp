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
    ll n,m,ans=0;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>> v(n+1);
    REP(i,0,m)
    {
        ll j,l,r;
        cin>>j>>l>>r;
        v[j].push_back(make_pair(l,r));
    }
    vector<ll> vans;
    REP(i,1,n)
    {
        if(sz(v[i])==0)
        {
            v.erase(i);
            vans.push_back(i);
            ans++;
            continue;
        }
        if(sz(v[i+1])==0)
            continue;
        bool flag=false;
        REP(j,0,sz(v[i]))
        {
            REP(k,0,sz(v[i+1]))
            {
                if((v[i][j].first<=v[i][k].first && v[i][j].second>=v[i][k].first) || (v[i][j].first<=v[i][k].second && v[i][j].second>=v[i][k].second))
                {
                    flag=true;
                    break;
                }
            }
        }
        if(!flag)
        {
            vans.push_back(i);
            ans++;
        }
    }
    if(v[n].size()==0)
    {
        ans++;
        vans.push_back(n);
    }
    cout<<ans<<" \n";
    REP(i,0,sz(vans))
        cout<<vans[i]<<" ";
    cout<<"\n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);

solve();

return 0;
}
