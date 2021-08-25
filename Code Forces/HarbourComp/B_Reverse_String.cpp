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

bool isPart(string s,string t,int spos,int tpos,bool isleft)
{
    if(tpos==sz(t))
    {
        
        return true;
    }
    bool ans;
    if(s[spos]==t[tpos])
    {
        if(spos==0 && isleft==false)
        {
            ans=isPart(s,t,spos+1,tpos+1,false);
        }
        else if(spos==sz(s)-1 )
        {
            ans=isPart(s,t,spos-1,tpos+1,true);
        }
        else
        {
            if(isleft==false)
                ans=(isPart(s,t,spos-1,tpos+1,true) || isPart(s,t,spos+1,tpos+1,false));
            else
                ans=isPart(s,t,spos-1,tpos+1,true);
        }
    }
    else
    {
        return false;
    }
    return ans;
}

void solve()
{
    string s,t;
    cin>>s>>t;
    REP(i,0,sz(s))
    {
        if(isPart(s,t,i,0,false))
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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