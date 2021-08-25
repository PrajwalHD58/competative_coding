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

int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    if(a==b)
    {
        cout<<"0 0\n";
        return ;
    }
    if(abs(a-b)==gcd(a,b))
    {
        cout<<abs(a-b)<<" "<<"0\n";
        return;
    }
    ll t1,t2,t3,t4;
    t1=b-a;
    t2=b/t1;
    t3=a/t1;
    if((a-t3*t1)==(b-t2*t1))
    {

        cout<<t1<<" "<<min((a-t3*t1),(t1-(a-t3*t1)))<<" \n";
    }
    else
    {
        cout<<t1<<" "<<a<<" \n";
    }

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