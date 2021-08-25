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
const int fa=500000;

#define size 500000

void factorial(vector<long long int> &fact)
{
    fact[0]=1;
    REP(i,1,size +1)
    {
        fact[i]=((i)*fact[i-1])%mod;
    }
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    vector<long long int> fact(size +1,0);
    factorial(fact);
    // cout<<fact[1550]%mod<<" ";
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        map <ll ,vector<ll>> ef;
        REP(i,0,n-1)
        {
            ll x,y;
              cin>>x>>y;
            ef[x].push_back(y);
            ef[y].push_back(x);
        }  
        if(n<=10)
        {
            vector <ll,list<ll>> a;

            for(ll i:ef[n ])
        }
    return 0;
}
