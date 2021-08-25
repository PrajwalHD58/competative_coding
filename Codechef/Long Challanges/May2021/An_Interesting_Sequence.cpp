#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


vector<ll> findDivisor(ll n)
{
    vector<ll> ans;
    REP(i,2,sqrt(n)+1)
    {
        if(n%i==0)
        {
            if((n/i)==i)
                ans.push_back(i);
            else
            {
                ans.push_back(i);
                ans.push_back((n/i));
            }
        }
    }
    return ans;
}

void solve()
{
    ll n,k;
    cin>>k; 
    
       
    ll ans=0;
    ans+=4*k+1;
    ll lmt[2*k];
    REP(i,0,2*k)
        lmt[i]=1;
    lmt[0]=0;
    vector<ll> res=findDivisor(ans);
    sort(res.begin(),res.end()); 
    if(res.size()==0)
        ans+=2*k-1;
    else{
        REP(i,0,res.size())
        {
            ll it=res[i]/2;
            while(it<(2*k))
            {
                lmt[it]=res[i];
                it+=res[i];
            }
        }
        REP(i,1,2*k)
        {
            ans+=lmt[i];
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
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}