#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9  ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    vector<pii> arr;
    arr.push_back(make_pair(0,0));
    ll curr=1;
    ll prevdest=0;
    for(ll i=1;i<=N;i++)
    {
      arr.push_back(make_pair(i*i,i));
    }    
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        ll ans=0;
        auto it=lower_bound(arr.begin(),arr.end(),a);
        auto it2=lower_bound(arr.begin(),arr.end(),b);
        cout<<(*)
    }
    
    
    return 0;
}