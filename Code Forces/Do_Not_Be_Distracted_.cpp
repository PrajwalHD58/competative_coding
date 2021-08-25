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
    bool arr[26],flag=true;
    memset(arr,0,sizeof(arr));
    REP(i,1,(int)s.size())
    {
        if(!(arr[(int)s[i]-65]))
        {
            if(s[i]!=s[i-1])
            {
                arr[(int)s[i-1]-65]=true;
            }
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES \n";
    else
        cout<<"NO \n";
     

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