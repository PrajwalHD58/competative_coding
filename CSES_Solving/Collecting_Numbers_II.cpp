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
#define D(a) cout<<#a<<"["<<a<<"]\n";
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,m;
    cin>>n>>m;
    vi v;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
    int ans=0;
    int it=1;
    while(it<=n)
    {
        ans++;  
        REP(i,0,n)
        {
            if(v[i]==it)
             it++;
        }
    }
    REP(i,0,m)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        int temp=v[l];
        v[l]=v[r];
        v[r]=temp;
        
        cout<<ans<<" \n";
    }
   
    
}

int main()
{
   solve();
    return 0;
}