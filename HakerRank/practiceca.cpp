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


void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        ll inp;
        cin>>arr[i];
    }
    pair<ll,ll> v[n-2];

    ll leftmax=arr[0],rightmax=arr[n-1];
    REP(i,1,n-1)
    {
        if(leftmax<=arr[i])
        {
            v[i-1].first=-1;
            leftmax=max(leftmax,arr[i]);
            continue;
        }
        v[i-1].first=leftmax;
        leftmax=max(leftmax,arr[i]);
    }
    RREP(i,n-2,0)
    {
        if(rightmax<=arr[i])
        {
            v[i-1].second=-1;
            rightmax=max(rightmax,arr[i]);
            continue;
        }
        v[i-1].second=rightmax;
        rightmax=max(rightmax,arr[i]);
    }

    ll ans=INT64_MIN,ind=0;
    REP(i,0,n-2)
    {
        
        if(v[i].first==-1 || v[i].second==-1)
            continue;
        if(ans<(arr[i+1]+v[i].first+v[i].second))
        {
            ans=arr[i+1]+v[i].first+v[i].second;
            ind=i+1;
        }
    }
    if(ans==INT64_MIN)
    {
        cout<<"-1";
        return;
    }
    cout<<ind<<" \n";
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