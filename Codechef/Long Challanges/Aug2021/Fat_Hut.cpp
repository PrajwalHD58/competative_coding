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
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,ans=0;
    cin>>n;
    vector<pair<ll,pair<ll,pair<ll,ll>>>> v;
    REP(i,0,n)
    {
        // A c L R
        ll a,c,l,r;
        cin>>a>>c>>l>>r;
        v.push_back(mp(c,mp(a,mp(l,r))));
        
    }
    sort(v.begin(),v.end());
    ll prevattr=INT_MAX;
    vector<bool> isChanged(n,false);
    REP(i,0,n)
    {
        if(v[i].second.first<=prevattr)
        {

            if(v[i].second.first==prevattr && v[i].first==v[i-1].first)
            {
                continue;
            }
            isChanged[i]=true;

            if(v[i].second.second.second>prevattr)
            {
                v[i].second.first=prevattr+1;
            }
            else
            {
                v[i].second.first=v[i].second.second.second;
                ll temp=v[i].second.second.second;
                ll it=i-1;
                while(temp<=v[it].second.first && it>=0)
                {
                    
                    if(temp==v[it].second.first)
                    {
                        if(v[it].first==v[it+1].first)
                        {
                            break;
                        }
                    }
                    if(temp<=v[it].second.second.first)
                    {
                        cout<<"-1\n";
                        return;
                    }
                    isChanged[it]=true;
                    v[it].second.first=min(v[it].second.second.second,temp-1);
                    temp= v[it].second.first;
                    it--;
                }
            }
        }
        prevattr=v[i].second.first;
    }
    cout<<" \n";
    REP(i,0,n)
    {
        if(isChanged[i])
            ans++;
        cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second.first<<" "<<v[i].second.second.second<<" \n";
    }
    cout<<ans<<" \n";
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