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
#define D(a) cout<<#a"["<<a<<"]";

const int N = 1e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
vector<string> chefora;

ll createPalindrome(ll input, ll b, bool isOdd)
{
    ll n = input;
    ll palin = input;
 
    if (isOdd)
        n /= b;
 
    while (n > 0)
    {
        palin = palin * b + (n % b);
        n /= b;
    }
    return palin;
}
 
// Function to print decimal palindromic number
void generatePalindromes(int n)
{
    ll number;
    ll i = 1;
    while ((number = createPalindrome(i, 10, true)) < n)
    {
        chefora.push_back(to_string(number));
        i++;
    }
}

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
    // Update x if it is more than or
    // equal to p
    x = x % p;
    while (y > 0) {
        // If y is odd, multiply x
        // with the result
        if (y & 1)
        res = (res * x) % p;
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

void solve()
{
    int l,r;
    cin>>l>>r;
    ll ans=0,res;
    
    
    cout<<res<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll t;
    generatePalindromes(inf);
    sort(chefora.begin(),chefora.end());
    REP(i,0,chefora.size())
        cout<<chefora[i];
    ll T=1;
    cin>>t;
    while(t--)
    { 
        solve();
    }
    return 0;
}