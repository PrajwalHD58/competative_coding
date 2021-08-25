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

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

vector<int> findDivisor(int n)
{
    vi  v;
    REP(i,2,sqrt(n)+1)
    {
        if(n%i==0)
        {
            if(i*i==n)
                v.push_back(i);
            else 
                v.push_back(i),v.push_back(n/i);
        }
    }
    v.push_back(n);
    return v;
}

void solve()
{
    int n;
    ll sum=0;
    cin>>n;
    int *arr=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    bool flag=true;
    sort(arr,arr+n);
    ll ans=INT64_MAX;
    ll min_ans=sum-arr[n-1]+1;

    int it=arr[1];
    REP(i,2,n)
    {
        if(arr[i]%it!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        ans=((sum-arr[0])/it)+1;
    }
    vi div=findDivisor(arr[0]);
    sort(div.begin(),div.end());
    flag=false;
    RREP(i,div.size()-1,-1)
    {
        int ct=1,emp=0;
        REP(j,0,n)
        {
            if(arr[j]%div[i]==0)
                continue;
            if(arr[j]%div[i]!=0 && ct)
            {
                ct++;
                emp=arr[j];
                continue;
            }
            else
            {
                flag=true;
                break;
            }
        }
        ll tans;
        if(!flag)
        {
            tans=(sum-emp)/div[i];
            if(emp!=0)
            tans++;
            ans=min(ans,tans);
            return;
        }
    }
    cout<<min(ans,min_ans)<<" \n";
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