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
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    ll *edges=new ll[n+1];
    ll sum=0;
    REP(i,0,n)
    {
        cin>>arr[i];
        if(i==0)
            edges[i]=arr[i];
        else
            edges[i]=abs(arr[i]-arr[i-1]);
        sum+=edges[i];
    }
    edges[n]=arr[n-1];
    sum+=edges[n];
    if(n==1)
    {
        cout<<sum/2<<"\n";
        return;
    }
    ll gap=0;
    REP(i,0,n)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            {
                gap+=abs(arr[i]-arr[i+1]);
            }
        }
        else if(i==n-1)
        {
            if(arr[i]>arr[i-1])
            {
                gap+=abs(arr[i]-arr[i-1]);
            }
        }
        else if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
            gap+=min(arr[i]-arr[i-1],arr[i]-arr[i+1]);
        }
       
    }
   cout<<sum-gap<<" \n";
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