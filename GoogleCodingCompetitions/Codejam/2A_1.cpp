#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
const ll hrs=(1/12)*1e10;
const ll mint=1e10;
const ll sec=6*1e9;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<(b/ mint)%360<<" "<<(c/sec)%360<<" ";

}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;
    ll T=t;
    while(t--)
    {
        
        cout<<"Case #"<<T-t<<": ";
        solve();
    }
    return 0;
}