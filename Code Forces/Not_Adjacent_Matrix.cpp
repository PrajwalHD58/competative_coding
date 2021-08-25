#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<"1 \n";
    else if(n==2)
        cout<<"-1 \n";
    else if(n==3)
    {
        cout<<"2 9 7 \n";
        cout<<"4 6 3 \n";
        cout<<"1 8 5 \n";
    }  
    else
    {
        int curr=1,it=0,d;
        if(n%2==0)
            d=((n*n)/2)+1;
        else
            d=((n*n)/2)+2;
        REP(i,0,n)
        {
            REP(i,0,n)
            {
               if(it%2==0)
               {
                   cout<<curr<<" ";
                   curr++;
               }
               else
               {
                   cout<<d<<" ";
                   d++;
               }
               it++;                    
            }
            cout<<" \n";
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}