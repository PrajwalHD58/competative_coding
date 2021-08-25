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
    int *arr=new int[m];
    REP(i,0,m)
        cin>>arr[i];
    int it=0,naxs=0;
    REP(i,1,m)
    {
        if(arr[i]==arr[i-1])
            it++;
        else
        {
            naxs=max(naxs,it);
            it=0;
        }
    }
    if(naxs==0)
    {
        
    }
    cout<<m-naxs<<" \n";
    
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