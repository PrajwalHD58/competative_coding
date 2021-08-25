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

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll *arr=new ll[n];
    REP(i,0,n)
        cin>>arr[i];
    ll i=0,m=0,kk=k;
    while(kk&&i<n)
    {
        if(kk>=arr[i])
        {
            kk=kk-arr[i];
            m+=arr[i];
            arr[i]=0;
            i++;
        }
        else{
            arr[i]=arr[i]-kk;
            m+=kk;
            kk=0;
        }
    }
    arr[n-1]+=m;
    REP(i,0,n)
    cout<<arr[i]<<"  ";
    cout<<endl;


}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}