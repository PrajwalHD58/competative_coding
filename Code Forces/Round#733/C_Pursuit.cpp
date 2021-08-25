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

void solve()
{
    ll n;
    cin>>n;
    ll *a=new ll [n];
    ll *b=new ll [n];
    REP(i,0,n)
    {
        cin>>a[i];
    }
    REP(i,0,n)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int num=n-(n/4);
    ll sa=0,sb=0;
    RREP(i,n-1,n-num-1)
    {
        sa+=a[i];
        sb+=b[i];
    }
    if(sa>=sb)
    {
        cout<<"0\n";
        return;
    }
    int last=(n/4),first=(n/4)-1;
    int ans=0;
    while(sa<sb)
    {  
        
        n++;
        int temp=n-(n/4);
        if(temp==num)
        {
            sa+=(100-a[last]);
            last++;
        }
        else
        {
            sa+=100;
            if(first>=0)
                sb+=(b[first]),first--;            
        }
        num=temp;
        ans++;
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