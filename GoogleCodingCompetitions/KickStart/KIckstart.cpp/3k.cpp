#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

 
 bool isGood(ll **arr,ll r,ll c)
 {
     REP(i,0,r)
     {
         REP(j,0,c)
         {
              if(abs(arr[i][j]-arr[i][j+1])>1)
              {
                  return false;
              }
              if(abs(arr[i][j]-arr[i][j-1])>1)
              {
                  return false;
              }
              if(abs(arr[i][j]-arr[i-1][j])>1)
              {
                  return false;
              }
              if(abs(arr[i][j]-arr[i+1][j])>1)
              {
                  return false;
              }
         }
     }
     return true;
 }
void solve()
{
    ll r,c,ans=0;
    cin>>r>>c;
    ll **arr=new ll*[r];
    for(ll i=0;i<r;i++)
    {
        arr[i]=new ll[c];
    }
    REP(i,0,r)
    {
        REP(j,0,c)
        {
            cin>>arr[i][j];
        }
    }
    ll max=INT_MIN,x,y;
    REP(i,0,r)
    {
        REP(j,0,c)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                x=i;
                y=j;
            }
        }       
    }
    ll nmax=max;
    RREP(i,x,-1)
    {

        RREP(j,y,-1)
        {
            if(nmax-arr[i][j]>1)
            {
                arr[i][j]=nmax-1;
                ans+=nmax-arr[i][j];
            }
            nmax=arr[i][j];
        }
    }
    nmax=max;
    REP(i,x,r)
    {
        RREP(j,y,-1)
        {
            if(nmax-arr[i][j]>1)
            {
                arr[i][j]=nmax-1;
                ans+=nmax-arr[i][j];
            }
            nmax=arr[i][j];

        }
    }
    nmax=max;
    REP(i,x,r)
    {
        REP(j,y,c)
        {
            if(nmax-arr[i][j]>1)
            {
                arr[i][j]=nmax-1;
                ans+=nmax-arr[i][j];
            }
            nmax=arr[i][j];

        }
    }
    nmax=max;
    RREP(i,x,-1)
    {
        REP(j,y,c)
        {
            if(nmax-arr[i][j]>1)
            {
                arr[i][j]=nmax-1;
                ans+=nmax-arr[i][j];
            }
            nmax=arr[i][j];

        }
    }
    
    cout<<ans<<" "<<endl;
    
     

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
        ll ans;
        cout<<"Case #"<<T<<": ";
        solve();
        T++;
    }
    return 0;
}