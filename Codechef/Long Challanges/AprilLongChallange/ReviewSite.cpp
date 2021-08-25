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
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    ll up1=0,dw1=0;
    ll up2=0,dw2=0;
    REP(i,0,n)
    {
        if(arr[i]==1)
           up1++;
        else if(arr[i]==2)
            dw1++;
        else{
            if(up1>=dw1)
                up1++;
            else if(up2>=dw2)
                up2++;
            else
                up1++;
        }
    }
    cout<<up1+up2<<" "<<endl;
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