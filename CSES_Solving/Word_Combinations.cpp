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
#define D(a) cout<<#a<<"[ "<<a<<"  ]\n";

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n;
    string s;
    cin>>s;
    cin>>n;
    string *arr=new string[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        D(arr[i])
    } 
    int *dp=new int[sz(s)+1];
    dp[0]=1;
    REP(i,1,sz(s)+1)
    {
        dp[i]=0;
        string temp=s.substr(0,i);
        REP(j,0,n)
        {
            if(sz(temp)>=sz(arr[j]))
            {
                D(temp),
                string temp2=temp.substr(0,sz(arr[j])+1);
                if(temp==arr[j] && i>sz(arr[j]))
                {
                    dp[i]=(dp[i]%mod+dp[i-sz(arr[j])]%mod)%mod;
                }
            }
        }
        D(dp[i])
    }
    cout<<dp[sz(s)-1]<<" \n";
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
//start here
solve();
return 0;
}