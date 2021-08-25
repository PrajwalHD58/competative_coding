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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to calculate all common divisors
// of two given numbers
// a, b --> input integer numbers
vector<ll> commDiv(ll n)
{
   
    vector<ll> v;
    // Count divisors of n.
    ll result = 0;
    for (ll i = 2; i <= sqrt(n); i++) {
        // if 'i' is factor of n
        if (n % i == 0) {
            // check if divisors are equal
            if (n / i == i)
                v.push_back(i); 
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    v.push_back(n);
    return v;
}

void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }

    vector<vector<ll>> factors;
    REP(i,1,n)
    {
        vector<ll> temp=commDiv(abs(arr[i]-arr[i-1]));
        factors.push_back(temp);
    }
    if(sz(factors)==1)
    {
        if(factors[0].size()>0)
            cout<<"2\n";
        else
            cout<<"1\n";
        return;
    }
    vector<ll> comfact;
    
    ll prev=0,ans=0,temp=0;

    REP(i,0,sz(factors)-1)
    {
        REP(j,0,sz(factors[i]))
        {
            comfact.push_back(factors[i][j]);
        }
        REP(k,i+1,sz(factors))
        {
            if(sz(comfact)>0)
            {
                REP(j,0,sz(comfact))
                {
                    auto it = find (factors[k].begin(), factors[k].end(), comfact[j]);
                    if(it==factors[k].end())
                    {
                        comfact.erase(comfact.begin() + j);
                    }
                }
                temp++;
            }
            else
            {
                break;
            }
        }
        ans=max(ans,temp);
        temp=0;
        comfact.clear();
    }
    cout<<ans+1<<" \n";
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