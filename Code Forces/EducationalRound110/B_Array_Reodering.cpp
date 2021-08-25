#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve()
{
    int n;
    cin>>n;
    vector<int> odd,even;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        if(inp%2==0)
            even.pb(inp);
        else
        {
            if(inp!=1)
            odd.push_back(inp);
        }
    }
    ll ans,m,k;
    m=(int)even.size();
    ans=m*n-(m*(m+1)/2);
    for(int i=0;i<odd.size();i++)
    {
        for(int j=i+1;j<odd.size();j++)
        {
            if(gcd(odd[i],2*odd[j])>1)
                ans++;
        }
    }
    cout<<ans<<" \n";
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