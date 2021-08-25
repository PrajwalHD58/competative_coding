#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;



ll size(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans++;
        n=n/10;
    }
    return ans;
}

void solve(ll *arr)
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll i1=0,i2=0;
    while(true)
    {
        i1=arr[c-1];
        if(size(i1)!=a)
        {
            
            i1=i1*10;
        }
        else
           break;
    }
    while(true)
    {
        i2=arr[c-1];
        if(size(i2)!=b)
        {
            i2=i2*10; 
        }
        else
           break;
    }
    cout<<i1<<" "<<i2<<" "<<endl;

}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll *arr=new ll[9];
    arr[0]=2;
    arr[1]=11;
    arr[2]=342;
    arr[3]=1693;
    arr[4]=10007;
    arr[5]=149459;
    arr[6]=1000003;
    arr[7]=10000019;
    arr[8]=102345689;
    ll t;
    cin>>t;
    while(t--)
    {
        solve(arr);
    }
    return 0;
}