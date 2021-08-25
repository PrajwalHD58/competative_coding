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
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,k,x,count=1,num=0;
    cin>>n>>k>>x;
    ll *arr=new ll[n];
    REP(i,0,n)
        cin>>arr[i];
    sort(arr,arr+n);
    REP(i,1,n)
    {
        if((abs(arr[i]-arr[i-1]))>2*x)
        {
            count++;
        }
        else if((abs(arr[i]-arr[i-1]))>x && (abs(arr[i]-arr[i-1]))<=2*x && k==0)
        {
            count++;
        }
        else if((abs(arr[i]-arr[i-1]))>x && (abs(arr[i]-arr[i-1]))<=2*x && k!=0)
            num++;
    }
    if(num<=k)
    cout<<count<<" \n";
    else
    cout<<count+(num-k)-1<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
   
        solve();
    
    return 0;
}