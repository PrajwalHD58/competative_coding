#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


void solve()
{
    ll n,res=0;
    cin>>n;
    vector<ll> rem,ans;
    bool flag=false;
    REP(i,0,n)
    {
        ll inp;
        cin>>inp;
        if(inp<=0)
        {
            ans.push_back(inp);
        }
        else
            rem.push_back(inp);
    }
    if(ans.size()==0)
        res=1;
    else if(rem.size()==0)
    {
        res=ans.size();
        sort(ans.begin(),ans.end());
        int maxm=ans[(int)ans.size()-1];
        REP(i,1,n)
        {
           if(abs(ans[i]-ans[i-1])<maxm)
                res--;
        }
    }
    else{
        sort(rem.begin(),rem.end());
        sort(ans.begin(),ans.end());
        ans.push_back(rem[0]);
        int maxm=rem[0];
        res=ans.size();
        REP(i,0,ans.size())
        {
            if(abs(ans[i]-ans[i-1])<maxm)
            {
                res--;
                break;
            }
        }
    }
    cout<<res<<" \n";
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}