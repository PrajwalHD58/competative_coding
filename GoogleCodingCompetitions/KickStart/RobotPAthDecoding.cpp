#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void printIndex(string s)
{
    int x=1;
    int y=1;
    REP(i,0,s.length())
    {
        if(s[i]=='E')
        {
            y++;
            if(y<=0)
            {
                y=1000000000-y;
            }
        }
        else if(s[i]=='S')
        {
            x++;
            if(x<=0)
            {
                x=1000000000-x;
            }
        }
        else if(s[i]=='N')
        {
            x--;
            if(x<=0)
            {
                x=1000000000-x;
            }
        }
        else 
        {
            y--;
            if(y<=0)
            {
                y=1000000000-y;
            }
        }
    }
    cout<<x<<" "<<y<<" "<<endl;

}
void solve()
{
    

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
        ll ans;
        cout<<"Case #"<<T<<":";
        solve();
        T++;
    }
    return 0;
}