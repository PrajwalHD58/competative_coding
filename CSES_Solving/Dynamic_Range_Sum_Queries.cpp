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
    int n,q;
    cin>>n>>q;
    int *arr=new int[n];
    REP(i,0,n)
        cin>>arr[i];
    int len=sqrt(n)+1;
    vector<ll> part(len+1,0);
    REP(i,0,n)
    {
        part[i/len]+=arr[i];
    }
    while(q--)
    {
        int which,l=0,r=0;
        ll ans=0;
        cin>>which>>l>>r;
        
        if(which==2)
        {   
            l--;
            r--;
            for(int i=l;i<=r;)
            {
                if(i%len==0 && i+len<=r)
                    ans+=part[i/len],i+=len;
                else
                    ans+=arr[i],i++;
            }
            cout<<ans<<" \n";
        }
        else
        {
            l--;
            arr[l]=r;
            int ind=l/len;
            part[l/len]=0;
            REP(i,ind*len,ind*len+len)
                part[l/len]+=arr[i];
    
        }
    }
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);

solve();

return 0;
}