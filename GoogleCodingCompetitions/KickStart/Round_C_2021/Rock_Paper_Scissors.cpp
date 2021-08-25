#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) cout<<"Case #"<<T<<": ";
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve(ll x)
{
    ll w,e;
    cin>>w>>e;
    char ans[60];
    ans[0]='S';
    ll ns=1,nr=0,np=0;
    REP(i,1,60)
    {
        float tempmax=max(max(ns,nr),np);
        if(tempmax==ns)
        {
            ans[i]='P';
            np++;
        }
        else if(tempmax==nr)
        {
            ans[i]='S';
            ns++;
        }
        else 
        {
            ans[i]='R';
            nr++;
        }

    }
    REP(i,0,60)
        cout<<ans[i]<<"";
    cout<<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll t,x;
    ll T=1;
    cin>>t>>x;
    while(t--)
    {
        google(T);
        solve(x);
        T++;
    }
    return 0;
}