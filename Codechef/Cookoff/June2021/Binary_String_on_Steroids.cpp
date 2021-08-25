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
#define D(a) cout<<#a<<"["<<a<<"]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

int maxRepeating(vi &arr)
{

    int maxm= arr[0], result = 0,maxcnt=0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] ==maxm)
        {
            result ++;
        }
        else
        {
            if(maxcnt<result)
            {
                maxm=arr[i-1];
                result=0;
            }
        }
    }
    return maxm;
}

void solve()
{
    int n,c1=0,c0=0,cnt=1;
    cin>>n;
    string arr;
    cin>>arr;
    vi v;
    REP(i,0,n)
    {
        if(arr[i]=='0')
        {
            c0++;
            cnt++;
        }
        else
        {
            c1++;
            v.push_back(cnt);
            cnt=1;
        }
    }
    v[0]=v[0]+cnt-1;
  
    bool flag=true;
    REP(i,1,v.size())
    {
        
        if(v[i]!=v[0])
        {
            flag=false;
        }
    }
    if(c1==0 )
    {
        cout<<"1\n";
        return;
    }
    else if(c0==0 || flag || c1==1)
    {
        cout<<"0\n";
        return;
    }
    int maxans=min(c1-1,c0);
    sort(all(v));
   
    int maxcnt,ans=0,rans=0;
    maxcnt=maxRepeating(v);
    if(n%maxcnt==0)
    {
        REP(i,0,v.size())
        {
            if(v[i]!=maxcnt)
            {
                ans+=v[i];
            }
        }
    }
    if(ans!=0)
    ans/=maxcnt;
    cout<<min(maxans,ans)<<" \n";
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