#include<bits/stdc++.h>
#include<bits/extc++.h>
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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> g(n+1);
    REP(i,0,n)
    {
        cin>>g[i+1];
    }
    vector<vector<pair<ll,ll>>> arr(n+1),dp(n+1);
    REP(i,0,m)
    {
        ll u,v,d;
        cin>>u>>v>>d;
        arr[u].push_back(make_pair(i,d));
        arr[v].push_back(make_pair(i,d));
    }
    dp[0].push_back(make_pair(0,0));
    for(ll i=1;i<=n;i++)
    {
        vector<pair<ll,ll>> temp;
        temp.insert(temp.end(),dp[i-1].begin(),dp[i-1].end());
        ll curr=0,mask=0;
        set<ll> open;
        for(ll j=i;j>=1;j--)
        {
            curr+=g[j];
            mask^=1LL<<j;
            for(auto xyz:arr[j])
            {
                if(open.count(xyz.first))
                    curr+=xyz.second;
                else 
                    open.insert(xyz.first);
            }
            if(j>1)
            {
                for(auto xyzj:dp[j-2])
                {
                    temp.push_back(make_pair(xyzj.first+curr,mask^xyzj.second));
                }
            }
            else{
                temp.push_back(make_pair(curr,mask));
            }
        }
        sort(temp.rbegin(),temp.rend());
        set<ll> sel;
        ll filled=0;
        for(ll j=0;j<temp.size()&&filled<k;j++)
        {
            if(sel.count(temp[j].second))
                continue;
            dp[i].push_back(temp[j]);
            filled++;
            sel.insert(temp[j].second);
        }
    }
    REP(i,0,k)
    {
        cout<<dp[n][i].first<<" ";
    }
    cout<<endl;
}

int main(){
   
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);


int t;
cin>>t;
while(t--){
   solve();
}
 return 0;
}