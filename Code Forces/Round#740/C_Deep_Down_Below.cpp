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
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first==b.first)
        return a.first>b.first;
    return a.first<b.first;
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<ll>> v(n);
    vector<pair<ll,ll>> arr; 
    REP(i,0,n)
    {
        ll it,maxm=0,ind=0;
        cin>>it;
        REP(j,0,it)
        {
            ll inp;
            cin>>inp;
            v[i].push_back(i);
            if((inp-j+1)>maxm)
            {
                maxm=inp-j+1;
                ind=j;
            }
        }
        
        arr.push_back(mp(maxm,it));
    }
    sort(arr.begin(),arr.end(),compare);
    ll ans=arr[0].first,prev=arr[0].first;
    
    REP(i,0,sz(arr))
    {
       
        if(prev>=arr[i].first)
        {
            prev+=arr[i].second;
        }
        else
        {
            ans+=(arr[i].first-prev);
            prev=arr[i].first+arr[i].second;
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