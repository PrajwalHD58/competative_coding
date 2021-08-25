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

bool compare(pii a,pii b)
{
    return a.first<b.first;
}
void solve()
{
    int n,k,f;
    cin>>n>>k>>f;
    vector<pii> v;
    REP(i,0,n)
    {
        int inp1,inp2;
        cin>>inp1>>inp2;
        v.push_back(make_pair(inp1,inp2));
    }
    int rem=0;
    sort(v.begin(),v.end(),compare);
    int maxt=v[0].second;
    if(v[0].first>0)
        rem+=v[0].first;
    REP(i,1,n)
    {
        //cout<<v[i].first<<" ";
        if(maxt>=v[i].first)
        {
            maxt=max(maxt,v[i].second);
        }
        else
        {
            rem+=v[i].first-maxt;
            maxt=v[i].second;
        }
    }
    
    if(maxt<f)
        rem+=f-maxt;
    //cout<<maxt<<" "<<rem<<" ";
    if(rem>=k)
        cout<<"YES\n";
    else
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