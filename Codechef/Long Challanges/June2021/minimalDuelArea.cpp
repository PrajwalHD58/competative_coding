#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"{"<<a<<"}";

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n;
    TRACE(cin>>n;)
    
    vector<pair<ll,ll>> x,y;
    set<ll> s1,s2;
   
    REP(i,0,n)
    {
        ll inp1,inp2;
        cin>>inp1>>inp2;
        x.push_back(make_pair(inp1,inp2));
        y.push_back(make_pair(inp2,inp1));
        s1.insert(inp1);
        s2.insert(inp2);
    }
    
    vector<ll> v1,v2;
    sort(x.begin(),x.end());
    REP(i,0,n)
    {
        cout<<x[i].first<<" \n";
    }
    ll i=0,flag=false;
    while(i<n-1)
    {
        ll temp=x[i].second,j=i;
        if(x[i].first==x[i+1].first)
        {
            while(x[i].first==x[i+1].first && i<n-1)
            {
                if(i==n-2) flag=true;
                temp=max(temp,x[i+1].second);
                i++;
            }
        }
        i++;
        v1.push_back(temp);
    }
    if(!flag) v1.push_back((x[n-1].second));
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll t;
    ll T=1;
    TRACE(cin>>t;)
    while(t--)
    {
      solve();
    }
    return 0;
}