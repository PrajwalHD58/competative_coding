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

pii findepth(vector<vector<int>> &v,int node,vector<pii> &ans)
{
    if(v[node].size()==0)
    {
        ans[node].first=1;
        ans[node].second=1;
        return make_pair(1,1);
    }

    pii temp;
    int maxm=INT_MIN,sum=0;
    for(int i=0;i<v[node].size();i++)
    {
        temp=findepth(v,v[node][i],ans);
        maxm=max(maxm,temp.first);
        sum+=temp.second;
    }
    ans[node].first=maxm+1;
    ans[node].second=sum+1;
    return make_pair(maxm+1,sum+1);
}

 
void solve()
{
    int n,k;
    cin>>n>>k;
    
    vector<vector<int>> v(n+1);
    REP(i,0,n-1)
    {
        int inp1,inp2;
        cin>>inp1>>inp2;
        v[inp1].push_back(inp2);
    }
    if(k==1)
    {
        cout<<"1\n";
        return;
    }

    vector<pii> ans(n+1);
    pii maxheight;
    maxheight=findepth(v,1,ans);
     REP(i,0,ans.size())
    {
        cout<<ans[i].first<<" "<<ans[i].second<<" \n";
    }
    // sort(ans.rbegin(),ans.rend());
   
    // if(k<=ans[0])
    // {
    //     cout<<"2\n";
    //     return;
    // }
    // int cnt=0;
    // while(k>0)
    // {
    //     k=k-ans[cnt];
    //     cnt++;
    // }
    // cout<<cnt<<" \n";

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