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
    int **arr=new int*[n];
    REP(i,0,n)
    {
        arr[i]=new int[5];
        REP(j,0,5)
        {
            cin>>arr[i][j];
        }
    }
   int sup=0;
   REP(i,1,n)
   {
        int s1=0,s2=0;
        REP(j,0,5)
        {
            if(arr[i][j]<arr[sup][j])
                s2++;
            if(arr[i][j]>arr[sup][j])
                s1++;
        }
        if(s2>3 || s1<3)
            sup=i;
   }
   REP(i,0,n)
   {
        if(i==sup)
            continue;
        int s1=0,s2=0;
        REP(j,0,5)
        {
            if(arr[i][j]<arr[sup][j])
                s2++;
            if(arr[i][j]>arr[sup][j])
                s1++;
        }
        if(s2>3 || s1<3)
        {
            cout<<"-1 \n";
            return;
        }
   }
   cout<<sup+1<<" \n";
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