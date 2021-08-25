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
    int n,m,k,I=-1,J=-1;
    cin>>k>>n>>m;
    int *mono=new int[n];
    int *poly=new int[m];
    REP(i,0,n)
    {
        cin>>mono[i];
    }
    REP(i,0,m)
    {
        cin>>poly[i];
    }
    vi ans;
    int l=0,r=0;
    while(l<n && r<m)
    {
        bool f1=false,f2=false;
        if(mono[l]==0)
        {
            f1=true;
            while(mono[l]==0 && l<n)
            {
                k++;
                l++;
                ans.push_back(0);
            }
        }
        if(poly[r]==0)
        {
            f2=true;
            while(poly[r]==0 && r<m)
            {
                k++;
                r++;
                ans.push_back(0);
            }
        }
        if(l<n && mono[l]!=0 && !f1)
        {
            if(mono[l]<=k)
            {
                ans.push_back(mono[l]);
                l++;
            }
            else 
            {
                cout<<"-1\n";
                return;
            }
        }
        if(poly[r]!=0 && r<m && !f2)
        {
            if(poly[r]<=k)
            {
                ans.push_back(poly[r]);
                r++;
            }
            else 
            {
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<l<<" "<<r<<" ";
    REP(i,0,sz(ans))
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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