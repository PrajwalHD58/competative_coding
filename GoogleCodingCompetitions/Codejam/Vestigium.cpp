#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

struct ans
{
    ll a;
    ll b;
    ll c;
};
ans solve1(ll **arr,ll n)
{
    ans d;
    d.a=0;
    d.b=0;
    d.c=0;
    REP(i,0,n)
    {
        d.a+=arr[i][i];
        set<ll> a1;
        set<ll> a2;
        REP(j,0,n)
        {
            a1.insert(arr[i][j]);
            a2.insert(arr[j][i]);
        }
        if(a1.size()!=n)
        d.b++;
        if(a2.size()!=n)
        d.c++;
    }    
     return d;
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
        int n;
        cin>>n;
        //ll arr[n][n];
        ll** arr=new ll *[n];  //Dynamic allocation of 2-D array.
        for(int i=0;i<n;i++)
        {
          arr[i]=new ll [n];
          for(int j=0;j<n;j++)
               cin>>arr[i][j];

        }
        
        ans sol;
        
        
            sol.a=0;
            sol.b=0;
            sol.c=0;
    
        sol=solve1(arr,n);
        
        cout<<"Case #"<<T-t<<": "<<sol.a<<"  "<<sol.b<<" "<<sol.c<<" "<<endl;
    }
    return 0;
}