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
    string s;
    cin>>s;
    int a=0,b=0;
    int ans1=10,ans2=10;
    REP(i,0,sz(s))
    {
        if(i%2==0)
        {
            if(s[i]=='1' || s[i]=='?')
                a++;

            if(a+((9-i)/2)<b || (b+((10-i)/2))<a)
            {
                ans1=i+1;
                break;
            }
        }
        else
        {
            if(s[i]=='1')
                b++;
            
            if(a+((9-i)/2)<b || (b+((9-i)/2))<a)
            {
                ans1=i+1;
                break;
            }
        }
        
    }
    a=0,b=0;
    REP(i,0,sz(s))
    {
        if(i%2==0)
        {
            if(s[i]=='1' )
                a++;
            
            if(a+((9-i)/2)<b || (b+((10-i)/2))<a)
            {
                ans2=i+1;
                break;
            }
        }
        else
        {
            if(s[i]=='1' || s[i]=='?')
                b++;
            
            if(a+((9-i)/2)<b || (b+((10-i)/2))<a)
            {
                ans2=i+1;
                break;
            }
        }
        
    }
    cout<<min(ans1,ans2)<<" \n";

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