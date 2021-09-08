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
    int n;
    cin>>n;
    ll *A=new ll[n];
    ll *B=new ll[n-1];
    REP(i,0,n)
        cin>>A[i];
    REP(i,0,n-1)
        cin>>B[i];

    sort(A,A+n);
    sort(B,B+n-1);
    vi v1,v2;

    for(int i=0;i<n-1;i++)
    {
        v1.push_back(B[i]-A[i]);
       // D(B[i]-A[i])
        v2.push_back(B[i]-A[i+1]);
        //D(B[i]-A[i+1])
    }
    
    ll ans1=INT_MAX,ans2=INT_MAX;
    int it=1;

    if(v1[0]>0)
    {
        while(v1[it]==v1[it-1] && it<n-1)
        {
            it++;
        }
        if(it==n-1)
        {
            ans1=v1[it-1];
        }
        else
        {
            int temp=v1[it-1];
            while(v2[it]==temp && it<n-1)
            {
                it++;
            }
            if(it==n-1)
            {
                ans1=temp;
            }
        }
    }
    it=1;
    if(v2[0]>0)
    {
        while(v2[it]==v2[it-1] && it<n-1)
        {
            it++;
        }
        if(it==n-1)
        {
            ans2=v2[it-1];
        }
        else
        {
            int temp=v2[it-1];
            while(v1[it]==temp && it<n-1)
            {
                it++;
            }
            if(it==n-1)
            {
                ans2=temp;
            }
        }
    }
    cout<<min(ans1,ans2)<<" \n";
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