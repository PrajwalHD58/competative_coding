#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll *arr=new ll[n];
        REP(i,0,n)
        {
            cin>>arr[i];
        }

        long long ans=(n*(n-1))/2,ansn=0;
        ll temp=arr[0];
        ll it=1;
        REP(i,1,n+1)
        {
            if(temp==arr[i])
            {
               it+=1;
            }  
            else{
                //cout<<it<<endl;
                ansn=ansn+it*(it-1)/2;
                it=1;
                temp=arr[i];
            }
            
 
         }
        ans=ans-ansn;
        cout<<ans<<" "<<endl; 
        
    }
    return 0;
}