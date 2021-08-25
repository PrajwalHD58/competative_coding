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
    ll sum=0;
    sum=(n/4)*44;

    ll rem=n%4;

    if(n>=4)
    {
        if(rem==0)
        {
            sum+=16;
        }
        else if(rem==1)
        {
            sum+=32;
        }
        else if(rem==2)
        {
            sum+=44;
        }
        else if(rem==3)
        {
            sum+=55;
        }
    }
    else{
        if(n==1)
        {
            sum=20;
        }
        else if (n==2)
        {
            sum=36;
        }
        else if (n==3)
        {
            sum=51;
        }
    }
    cout<<sum<<" "<<endl;

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