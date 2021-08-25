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

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int m;
    cin>>m;
    int arr[2][m];
    REP(i,0,2)
    {
        
        REP(j,0,m)
        {
           cin>>arr[i][j];
        }
    }
    ll sumarr[4][m+2];
    sumarr[0][0]=0;
    sumarr[0][m+1]=0;
     sumarr[1][0]=0;
    sumarr[1][m+1]=0;
     sumarr[2][0]=0;
    sumarr[2][m+1]=0;
     sumarr[3][0]=0;
    sumarr[3][m+1]=0;

    REP(j,0,m)
    {
        sumarr[0][j+1]=arr[0][j]+sumarr[0][j];
        sumarr[1][j+1]=arr[1][j]+sumarr[1][j];
    }
    RREP(j,m-1,-1)
    {
        sumarr[2][j+1]=arr[0][j]+sumarr[2][j+2];
        sumarr[3][j+1]=arr[1][j]+sumarr[3][j+2];
    }
    ll maxal=0,maxbob=INT64_MAX;
    REP(i,1,m+1)
    {
        maxbob=min(maxbob,max(sumarr[1][i-1],sumarr[2][i+1]));
    }
    cout<<maxbob<<" \n";
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