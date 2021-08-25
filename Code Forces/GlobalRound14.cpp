#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


bool compare(pii a,pii b)
{
    return (a.first<b.first);
}

void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll lc[l];
    ll rc[r];
    REP(i,0,l)
    {
        cin>>lc[i];
    }
    
    REP(i,0,r)
    {
        cin>>rc[i];
    }
    sort(lc,lc+l);
    sort(rc,rc+r);
    ll m=max(lc[l-1],rc[r-1]);
    int pair[m];
    REP(i,0,m)
    {
        pair[i]=0;
    }
    REP(i,0,l)
    {
        pair[lc[i]]++;
    }
    REP(i,0,r)
    {
        pair[rc[i]]--;
    }

}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}