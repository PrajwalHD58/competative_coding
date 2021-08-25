#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int *arr=new int[k];
    int *ans=new int[n+m];
    memset(ans,0,sizeof(ans));
    REP(i,0,k)
    {
        cin>>arr[i];
        ans[arr[i]-1]++;
    }
    vi anss;
    REP(i,0,n)
    {
        if(ans[i]>1)
        anss.push_back(i+1);
    }
    cout<<anss.size()<<" ";
    if(anss.size()!=0)
    {
    REP(i,0,anss.size())
        cout<<anss[i]<<" ";
    }
    cout<<endl;
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