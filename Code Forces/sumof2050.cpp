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

ll numofdigits(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans++;
        n/=10;
    }
    return ans;
}

ll noofpowers(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ll minus=2050;
        ll i=numofdigits(n);
        REP(j,0,i-4)
        {
            minus*=10;
        }
        if((n-minus)>=0)
        {
            n=n-minus;
        }
        else{
            n=n-(minus/10);
        }
        ans++;
    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    if(n%2050!=0)
    {
        cout<<"-1"<<endl;
        return;
    }
    else{
        ll div=0,ans=0;
       
        ans=noofpowers(n);
        cout<<ans<<" "<<endl;
        return;
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