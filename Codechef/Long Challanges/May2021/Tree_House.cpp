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

const int N = 3e5+1;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool compare(pair<ll ,pair<ll,pair<ll,ll>> >a ,pair<ll ,pair<ll,pair<ll,ll>> > b)
{
    if(a.second.first==b.second.first)
    {
        if(a.second.second.first==b.second.second.first)
            return a.second.second.second<b.second.second.second;
        return a.second.second.first>b.second.second.first;
    }
    return a.second.first>b.second.first;
} 

pair<ll,pair<ll,ll>> numberOfChildren(vector<vector<ll>> &v, ll x)
{
    pair<ll,pair<ll,ll>> ans;
    ans.second.first=0;
    ans.first=0;
    ans.second.second=-1;
    if(v[x].size()==0) 
        return ans;
    
    
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        ll temp=q.front();
        ans.second.second++;
        q.pop();
        ans.first+=v[temp].size();
        if(ans.second.first<=(ll)v[temp].size())
        {
            ans.second.first=(ll)v[temp].size();
            ans.second.second=q.top();
        }
        for(ll i: v[temp])
        {
            q.push(i);
        }
    }
    return ans;
    
} 
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<vector<ll> > tree(n+1);
    vector<ll> val(n+1);
    REP(i,1,n)
    {
        ll u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        //tree[v].push_back(u);
    }
    val[1]=1;
    REP(i,1,n+1)
    {
        vector<pair<ll,pair<ll,pair<ll,ll>>>> temp;
        for(ll j:tree[i])
        {
            temp.push_back(make_pair(j,numberOfChildren(tree,j)));
        }
        sort(temp.begin(),temp.end(),compare);
        ll it=1;
        for(auto j:temp)
        {
            cout<<j.first<<" "<<j.second.first<<" "<<j.second.second.first<<" "<<j.second.second.second<<" \n";
            val[j.first]=(it%mod)*(val[i]%mod);
            it++;
        }
    }
    // REP(i,0,n)
    //    cout<<val[i+1]<<" \n"

    ll ans=0;
    REP(i,1,n+1)
        ans=(ans%mod)+(val[i]%mod);
    ans=(ans%mod)*(x%mod);
    cout <<ans%mod<<" \n";
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