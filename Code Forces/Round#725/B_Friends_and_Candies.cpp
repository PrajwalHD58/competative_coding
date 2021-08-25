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
#define D(a) cout<<#a<<a<<

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,sum=0;
    bool flag=true;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]!=arr[i-1] && i>0)
        {
            flag=false;
        }
    }
    if(n==1 || flag)
    {
        cout<<"0\n";
    }
    else if(sum%n!=0)
    {
        cout<<"-1\n";
    }
    else
    {
        int it=0;
        ll avg=sum/n;
        sort(arr,arr+n);
        RREP(i,n-1,-1)
        {
            if(arr[i]>avg)
                it++;
            else
                break;
        }
        cout<<it<<" \n";
    }
    return;
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