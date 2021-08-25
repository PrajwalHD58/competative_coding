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
    int n,q;
    cin>>n>>q;
    int *arr=new int[n];
    REP(i,0,n)
        cin>>arr[i];
    sort(arr,arr+n);
    while(q--)
    {
        int t,count=0;
        bool flag=true;
        cin>>t;
        auto a=lower_bound(arr,arr+n,t)-arr;
        if(a<n && arr[a]==t)
         {
                cout<<"0\n";
            continue;
         }
        
        if(a%2==0)
            cout<<"POSITIVE \n";
        else
            cout<<"NEGATIVE \n";
        
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
