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
vector<string> s;


void solve()
{
    string str;
    cin>>str;
    vector<int> seq(26);
    REP(i,0,26)
        seq[i]=0;
    REP(i,0,sz(str))
    {
       
        seq[(int)str[i]-97]=i+1;
    }
    if(seq[0]==0)
    {
        cout<<"NO\n";
            return;
    }
    int l=seq[0],r=seq[0];
    REP(i,1,str.size())
    {
        if(seq[i]==0)
        {
            cout<<"NO\n";
            return;
        }
        if(seq[i]==l-1)
        {
            l--;
        }
        else if(seq[i]==r+1)
        {
            r++;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    if(l<0 && r>str.size())
    {
        cout<<"NO\n";
            return;
    }
    else
        cout<<"YES\n";
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