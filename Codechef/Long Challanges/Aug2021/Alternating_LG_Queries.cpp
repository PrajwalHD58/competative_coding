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
#define D(a) cout<<#a<<"["<<a<<"]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve()
{
    ll n,q;
    cin>>n>>q;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,q)
    {
        int which;
        cin>>which;
        if(which==1)
        {
            ll l,r;
            cin>>l>>r;
            ll prev=arr[r];
            r--;
            while(l<=r)
            {
                if((r-l)%2==0)
                {
                    ll lcm=(prev*arr[r])/gcd(prev,arr[r]);
                    D(lcm);
                    prev=lcm;
                }
                else
                {
                    prev=gcd(prev,arr[r]);
                    D(prev)
                }
                r--;
            }
            cout<<prev<<" \n";
        }
        else
        {
            ll l,r;
            cin>>l>>r;
            ll prev=arr[r];
            r--;
            while(l<r)
            {
                if((r-l)%2==1)
                {
                    ll lcm=prev*arr[r]/gcd(prev,arr[r]);
                    prev=lcm;
                }
                else
                {
                    prev=gcd(prev,arr[r]);
                }
                r--;
            }
            cout<<prev<<" \n";
        }
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