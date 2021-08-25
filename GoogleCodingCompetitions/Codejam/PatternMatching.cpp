#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

string solve(ll n,string *arr)
{
    string big="";
    string sol="";
    REP(i,0,n)
    {
        if(big.size()<arr[i].size())
        {
            big=arr[i];
        }
    }
    char ref;
    int refi=0;
    REP(i,0,n)
    {
        
        REP(j,0,arr[i].size())
        {
            if(arr[i][j]!='*' && big[j]!='*')
            {
                if(arr[i][j]!=big[j])
                {
                   sol="*";
                   return sol;
                }
            }
            if(big[j]=='*')
            {
                ref=arr[i][j];
                refi=j;
            }
        }
    }
    REP
    if(ref!='*')
    {
        
        return big;
    }
    big[refi]=ref;
    return big;
}


int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    
    cin>>t;
    ll T=t;
    while(t--)
    {
       ll n;
       cin>>n;
       string *arr=new string[n];
       REP(i,0,n)
       {
           cin>>arr[i];
       }
       cout<<"Case #"<<T-t<<": "<<solve(n,arr)<<endl;
    }
    return 0;
}