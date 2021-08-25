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

void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
        cin>>arr[i];
    sort(arr,arr+n);
    vector<ll> v;
    REP(i,0,n/2)
    {
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    if(n%2==1)
       v.push_back(arr[n/2+1]);
    
    ll ans=0;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
        ans+=v[i+1]-v[i];
    }
    cout<<ans<<" "<<endl;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    
    solve();
    
    return 0;
}