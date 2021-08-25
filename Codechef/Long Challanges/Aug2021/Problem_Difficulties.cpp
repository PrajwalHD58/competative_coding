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
    int u;
   int *arr=new int[4];
    REP(i,0,4)
    {
        cin>>arr[i];
    }
    int ans=0,temp=0;
    if(arr[0]!=arr[1])
    {
        temp++;
        if(arr[2]!=arr[3])
            temp++;
    }
    ans=max(temp,ans);
    temp=0;
    if(arr[0]!=arr[2])
    {
        temp++;
        if(arr[1]!=arr[3])
            temp++;
    }
    ans=max(temp,ans);
    temp=0;
    if(arr[0]!=arr[3])
    {
        temp++;
        if(arr[2]!=arr[1])
            temp++;
    }
    ans=max(temp,ans);
    
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