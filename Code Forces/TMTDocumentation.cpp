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
    string s;
    cin>>s;
    ll tn=0,mn=0;
    ll arr[n];
    REP(i,0,n)
    {
        if(s[i]=='T')
        {
            tn++;
        }
        else{
            mn++;
        }
    }
    if(tn!=2*mn)
    {
        cout<<"NO"<<endl;
        return ;
    }
   
    RREP(i,n-1,-1)
    {
        int f1=0,f2=0;
        
        if(s[i]=='M')
        {
            REP(j,i+1,n)
            {
                if(s[j]=='T')
                {
                    s[j]='A';
                    f1=1;
                    break;
                }
            }
            RREP(j,i-1,-1)
            {
                if(s[j]=='T')
                {
                    s[j]='A';
                    f2=1;
                    break;
                }
            }
            if(f1==0 || f2==0)
            {
                cout<<"NO"<<endl;
                return;
            }
        
        }
    }
    cout<<"YES"<<endl;
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