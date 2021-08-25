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
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    ll d1,d2,d3,d4,mind,maxd;
    d1=abs(1-i)+abs(1-j);
    d2=abs(1-i)+abs(m-j);
    d3=abs(n-i)+abs(1-j);
    d4=abs(n-i)+abs(m-j);
    mind=min(min(d1,d2),min(d3,d4));
    maxd=max(max(d1,d2),max(d3,d4));
    if(maxd==d1)
    {
        cout<<"1 "<<"1 ";
        if(n==i && m==j)
        {
            
           cout<<"1 "<<"1 \n";
    
        }
        else
        {
            cout<<n<<" "<<m<<" \n";
        }
        return;

    }
    else if(maxd==d2)
    {
        cout<<"1 "<<m<<" ";
         if(n==i && 1==j)
        {
           
            cout<<"1 "<<m<<" \n";
           
        }
        else
        {
            cout<<n<<" "<<"1 \n";
        }
        return;
    }
    else if(maxd==d3)
    {
        cout<<n<<" "<<"1 ";
        if(1==i && m==j)
        {
            cout<<n<<" "<<"1 \n";
        }
        else
        {
            cout<<"1 "<<m<<" \n";
        }
        return;
    }
    else if(maxd==d4)
    {
        cout<<n<<" "<<m<<" ";
        if(1==i && 1==j)
        {
            cout<<n<<" "<<m<<" \n";
        }
        else
        {
            cout<<"1 "<<"1 \n";
        }
        return;
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