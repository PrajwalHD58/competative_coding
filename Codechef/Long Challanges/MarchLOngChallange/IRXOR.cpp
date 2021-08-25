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

struct item
{
    ll a,b;
};

item highestPowerof2(ll n) 
{ 
    item rt;
    memset(&rt, 0, sizeof(item));
    ll p = (ll)log2(n)+1; 
    if((ll)pow(2, p)==n)
    {
        rt.a=(ll)pow(2,p+1);
        rt.b=(ll)pow(2,p);
        return rt;
    }
          
    rt.a=(ll)pow(2,p);
    rt.b=(ll)pow(2,p-1);
    return rt;
}


ll maxProduct(ll c,item n)
{
    ll max;
    //memset(&max, 0, sizeof(item));
    max=(n.b-1)*(n.a-(c-n.b+1));
    return max;

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
        ll c;
        cin>>c;
        if(c==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        item hp=highestPowerof2(c);
        ll ans=maxProduct(c,hp);
        cout<<ans<<""<<endl;
        //cout<<"Case #"<<T-t<<":"<<endl;
    }
    return 0;
}