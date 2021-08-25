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

int count_same_digit(int R)
{
    int ans=1,num=10,flag=0;
    if(R<=9)
        return R;
    
    REP(i,0,9)
    {
        num+=pow(10,i);
        REP(i,1,10)
        {
            if(num*i+i<=R)
            {
                ans++;
            }
            else
            {
                flag=1;
                break;
            }
            if(flag)
                break;
        }
    }
    return ans;
    
}

void solve()
{
    ll n;
    cin>>n; 
    int ans;
    ans=count_same_digit(n);
    cout<<ans<<" \n"; 
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
