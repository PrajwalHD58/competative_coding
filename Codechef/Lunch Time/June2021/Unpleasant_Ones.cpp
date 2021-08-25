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
#define D(a) cout<<#a<<"[ "<<a<<"]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

pair<int,int> decToBinary(int n)
{
    
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
       binaryNum[i]=n%2;
        n = n / 2;
        i++;
    }
    //binaryNum.push_back((char)(n%2+48));
   return make_pair(binaryNum[i-1],binaryNum[0]);
}

void solve()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    vi v1,v2,v3,v4;
    REP(i,0,n)
    {
        cin>>arr[i];
        auto s=decToBinary(arr[i]);
        //D(s.first) D(s.second)
       
        if(s.first==0 && s.second==1)
            v2.push_back(arr[i]);
        if(s.first==1 && s.second==0)
            v3.push_back(arr[i]);
        if(s.first==1 && s.second==1)
            v4.push_back(arr[i]);
    }
   
    int m=sz(v3),k=sz(v4),o=sz(v2); 
    int it=max(max(k,m),o);
    REP(i,0,m)
        cout<<v3[i]<<" ";
    REP(i,0,o)
        cout<<v2[i]<<" ";
    REP(i,0,k)
        cout<<v4[i]<<" ";
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