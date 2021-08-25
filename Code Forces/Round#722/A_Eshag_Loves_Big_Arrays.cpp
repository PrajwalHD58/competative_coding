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

bool isSame(vi arr)
{
    REP(i,1,arr.size())
    {
        if(arr[i]!=arr[i-1])
            return false; 
    }
    return true;
}
void solve()
{
    int n,ans=0,sum=0;
    cin>>n;
    vi arr;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        sum+=inp;
        arr.push_back(inp);
    }
    sort(arr.begin(),arr.end());
    while(!isSame(arr) && arr.size()!=0)
    {
        int avg=sum/(int)arr.size();
        vi v;
        REP(i,0,(int)arr.size())
        {
            if(arr[i]<=avg)
                v.push_back(arr[i]);
            else
                break;
        }
        arr.clear();
        sum=0;
        REP(i,0,(int)v.size())
        {
            sum+=v[i];
            arr.push_back(v[i]);
        }
    }
    cout<<n-arr.size()<<" \n";
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