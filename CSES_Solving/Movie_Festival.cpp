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

bool compare(pii a,pii b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}
void solve()
{
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>> v;
    REP(i,0,n)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),compare);
    ll ans=0,maxt=0;
    REP(i,0,n)
    {
        if(maxt<=v[i].first)
        {
            ans++;
            maxt=v[i].second;
        }
    }
    cout<<ans<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}