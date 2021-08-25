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

const int N = 2e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,k,r=0;
    cin>>n>>k;
    unordered_map<int,pii> freq;
    int *arr=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        freq[arr[i]].first++;
    }
    for(auto x:freq)
    {
        if(x.second.first>=k)
            x.second.second=k;
        else if(x.second.first>=0)
            r+=x.second.first;
    }
 
    D(r)
    r-=(r%k);
    int it=1;
    REP(i,0,n)
    {
        if(freq[arr[i]].first>=k)
        {
            if(freq[arr[i]].second>0)
            {
                cout<<freq[arr[i]].second<<" ";
                freq[arr[i]].second--;
            }
            else
            {
                 cout<<"0 ";
            }
        }
        else
        {
            if(r>0)
            {
                cout<<it<<" ";
                if(it==k)
                    it=1;
                else
                    it++;
                
                r--;
            }
            else
            {
                cout<<"0 ";
            }
        }
    }
    cout<<" \n";
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