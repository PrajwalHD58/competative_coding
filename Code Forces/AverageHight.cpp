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
    vector<ll> v1;
    vector<ll> v2;
    REP(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
           v1.push_back(arr[i]);
        else
           v2.push_back(arr[i]);
    }
    for(int i=0;i<v1.size();i++)
       cout<<v1[i]<<" ";
    REP(i,0,v2.size())
        cout<<v2[i]<<" ";
    cout<<endl;
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