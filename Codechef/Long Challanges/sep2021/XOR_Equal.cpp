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
    int n,x;
    cin>>n>>x;
    int *arr=new int[n];
    int *arr2=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        arr2[i]=arr[i]^x;
    }
    map<int,int> mp;
    REP(i,0,n)
    {
        if(arr[i]==arr2[i])
        {
            if(mp.count(arr[i]))
            {
                mp[arr[i]]++;
            }
            else
                mp[arr[i]]=1;
        }
        else
        {
            if(mp.count(arr[i]))
            {
                mp[arr[i]]++;
            }
            else
                mp[arr[i]]=1;

            if(mp.count(arr2[i]))
            {
                mp[arr2[i]]++;
            }
            else
                mp[arr2[i]]=1;
        }
    }
    int ans=0;
    vi cnt;
    for(auto x:mp)
    {
        if(x.second>ans)
        {
            ans=x.second;
            cnt.clear();
            cnt.push_back(x.first);
        }
        else if(x.second==ans)
        {
            cnt.push_back(x.first);
        }
    }
    int index=0;
    vi ans2;
    REP(j,0,sz(cnt))
    {
        index=0;
        REP(i,0,n)
        {
            if(arr[i]!=cnt[j])
            {
                if(arr2[i]==cnt[j])
                {
                    index++;
                }
            }
        }
        ans2.push_back(index);
    }
    sort(ans2.begin(),ans2.end());
    cout<<ans<<" "<<ans2[0]<<" \n";
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