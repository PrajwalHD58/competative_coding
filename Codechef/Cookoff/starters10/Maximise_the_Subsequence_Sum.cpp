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
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    pii *arr2=new pii[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        arr2[i]=mp(arr[i],i);
    }
    sort(arr2,arr2+n);
    REP(i,0,k)
    {
        if(arr2[i].first<0)
        {
            arr[arr2[i].second]=abs(arr2[i].first);
        }
        else
            break;
    }
    ll sum=0;
    REP(i,0,n)
    {
        if(arr[i]>0)
            sum+=arr[i];
    }
    cout<<sum<<" \n";
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