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

void solve()
{
    ll n,r;
    cin>>n>>r;
    ll *A=new ll[n];
    ll *B=new ll[n];
    REP(i,0,n)
    {
        cin>>A[i];
    }
    REP(i,0,n)
    {
        cin>>B[i];
    }
    ll x=0,max=INT_MIN;

    REP(i,0,n-1)
    {
        x+=B[i];
        x-=(r*(A[i+1]-A[i]));
        if(x<0)
        {
            x=0;
        }
        if(max<x)
        max=x;
    }
    x+=B[n-1];
    if(max<x)
        max=x;
    cout<<max<<" "<<endl;;

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