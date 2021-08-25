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

bool compare(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b)
{
    if(a.second.first==b.second.first)
        return a.second.second<b.second.second;
    return a.second.first<b.second.first;
    
}

void solve()
{
    ll n,inp ,ans=0;
    cin>>n;
    ll *arr=new ll[n];
    ll *arr2=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,n)
        cin>>arr2[i];

    
    vector<pair<ll,pair<ll,ll>>> v;
    REP(i,0,n)
    {
        v.push_back(mp(i+1,mp(arr[i],arr2[i])));
    }
    ll prevtime=0,margtime=0;

    sort(v.begin(),v.end(),compare);

    vector<pair<ll,ll>> vans;

    REP(i,0,n)
    {
        if(v[i].second.first+prevtime<=v[i].second.second)
        {
            prevtime=v[i].second.first+prevtime;
            margtime=v[i].second.second-prevtime; 
            ans++;
            vans.push_back(mp(v[i].second.second,i));
        }
        else if(v[i].second.second<v[i-1].second.second)
        {
            if(v[i].second.first+prevtime-margtime<=v[i].second.second)
            {
                prevtime=v[i].second.first+prevtime;
                margtime=v[i].second.second-prevtime; 
                ans++;
                vans.push_back(mp(v[i].second.second,i));
            }
        }
    }
    cout<<ans<<" \n";
    sort(vans.begin(),vans.end());
    prevtime=0;
    REP(i,0,sz(vans))
    {
        cout<<v[vans[i].second].first<<" "<<prevtime<<" "<<prevtime+v[vans[i].second].second.first<<" \n";
        prevtime+=v[vans[i].second].second.first;
    }
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

//  sort(v.begin(),v.end(),compare);
//     ll prev_time=0,ans=0,prev_index=-1;
//     stack<pair<ll,pair<ll,ll>>> ansv;
//     REP(i,0,n)
//     {
//         if(prev_time+v[i].second.second<=v[i].second.first)
//         {
//             ans++;
//             ansv.push(mp(v[i].first,mp(prev_time,prev_time+v[i].second.second)));
//             prev_time=prev_time+v[i].second.second;
//             prev_index=i;
//         }
//         else
//         {
//             if(prev_time>v[i].second.second)
//             {
//                 ansv.pop();
//                 prev_index=i;
//                 ansv.push(mp(i,mp(prev_time,prev_time+v[i].second.second)));
//             }
//         }
//     }  
//     cout<<ans<<" \n";
//     while(ansv.size()>0)
//     {
//         auto temp=ansv.top();
//         ansv.pop();
//         cout<<temp.first<<" "<<temp.second.first<<" "<<temp.second.second<<" \n";
//     }