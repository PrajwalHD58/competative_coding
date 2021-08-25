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
    int n,m;
    cin>>n>>m;
    int *direction=new int[n];
    int *destination=new int[m];
    int *custdirec=new int[n];
    memset(custdirec,INT_MAX,sizeof(custdirec));
    REP(i,0,n)
        cin>>direction[i];
    REP(i,0,m)
        cin>>destination[i];
    REP(i,0,n)
    {
        int it=0;
        if(direction[i]=1)
        {
            REP(j,i,n)
            {
                custdirec[j]=min(custdirec[j],it);
                it++;
            }
        }
        else if(direction[i]=2)
        {
            RREP(j,i,-1)
            {
                custdirec[j]=min(custdirec[j],it);
                it++;
            }
        }
    }  
    REP(i,0,m)
    {
        int ans=custdirec[destination[i]];
        if(ans==INT_MAX)
            cout<<"-1\n";
        else
            cout<<ans<<" \n";
    }
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