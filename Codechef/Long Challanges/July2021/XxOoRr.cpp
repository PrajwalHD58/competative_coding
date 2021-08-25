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
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 1e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    int *seq=new int[32];
    REP(i,0,32)
        seq[i]=0;
    
    REP(i,0,n)
    {
        while(arr[i]!=0)
        {
            int temp=log2(arr[i]);
            seq[temp]++;
            int twokapow=pow(2,temp);
            arr[i]=arr[i]-twokapow;
        }
    }
    ll ans=0;
    REP(i,0,32)
    {
        if(seq[i]!=0)
        {
        
            if(seq[i]%k==0)
                ans+=(seq[i]/k);
            else
                ans+=((seq[i]/k)+1);
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