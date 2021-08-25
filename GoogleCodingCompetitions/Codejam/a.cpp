#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,k;
    cin>>n>>k;
    set<int> v;
    REP(i,0,n)
    {
        int data;
        cin>>data;
        v.insert(data);
    }
    vi s(v.begin(),v.end());
    sort(s.begin(),v.end());



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
        
        cout<<"Case #"<<T-t<<": ";
        solve();
    }
    return 0;
}