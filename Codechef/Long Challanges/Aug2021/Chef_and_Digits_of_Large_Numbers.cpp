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
// 9        
// 89       
// 802      
// 7115     
// 62017    
// 528263   
// 4322794  
// 33283708
// 12498629  
void solve()
{
    ll n,ans=0;
    cin>>n;
    ll fact[10],tens[9];
    tens[0]=0;
    tens[1]=9 ;
    tens[2]=89;
    tens[3]=802;
    tens[4]=7115;
    tens[5]=62017;
    tens[6]=528263;
    tens[7]=4322794 ;
    tens[8]=33283708;

    fact[0]=1;
    REP(i,1,10)
    {
        fact[i]=fact[i-1]*i;
    }
    REP(i,1,n+1)
    {
        ll it=i,rep=0,mul=1;
        while(it>0)
        {
            mul*=(it%10);
            it/=10;
            rep++;
        }
        if(fact[rep]<=mul)
        {
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