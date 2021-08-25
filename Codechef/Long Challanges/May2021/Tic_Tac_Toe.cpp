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

void solve()
{
    bool flag=false,f1=0,f2=0;
    int arr[3][3],on=0,xn=0;
    REP(i,0,3)
    {
        REP(j,0,3)
        {
            char data;
            cin>>data;
            if(data=='X')
            {
                arr[i][j]=1;
                xn++;
            }
            else if(data=='O')
            {
                arr[i][j]=2;
                on++;
            }
            else{
                arr[i][j]=0;
                flag=true;
            }

        }
    }
    int wo=0,wx=0;
    if(arr[0][0]*arr[0][1]*arr[0][2]==1) 
        wx++;
    if( arr[1][0]*arr[1][1]*arr[1][2]==1 )
        wx++;
    if( arr[2][0]*arr[2][1]*arr[2][2]==1) 
        wx++;
    if( arr[0][0]*arr[1][0]*arr[2][0]==1 )
        wx++;
    if( arr[0][1]*arr[1][1]*arr[2][1]==1)
        wx++;
    if( arr[0][2]*arr[1][2]*arr[2][2]==1 )
        wx++;
    if(arr[0][0]*arr[1][1]*arr[2][2]==1 )
        wx++;f1=true;
    if(arr[2][0]*arr[1][1]*arr[0][2]==1)
        wx++;f2=true;
    if(arr[0][0]*arr[0][1]*arr[0][2]==8) 
        wo++;
    if( arr[1][0]*arr[1][1]*arr[1][2]==8)
        wo++;
    if( arr[2][0]*arr[2][1]*arr[2][2]==8) 
        wo++;
    if( arr[0][0]*arr[1][0]*arr[2][0]==8 )
        wo++;
    if( arr[0][1]*arr[1][1]*arr[2][1]==8)
        wo++;
    if( arr[0][2]*arr[1][2]*arr[2][2]==8 )
        wo++;
    if(arr[0][0]*arr[1][1]*arr[2][2]==8 )
        wo++;
    if(arr[2][0]*arr[1][1]*arr[0][2]==8)
        wo++;
    
    if(xn<on) cout<<"3 \n";
    else if(xn-1>on) cout<<"3 \n";
    else if(xn>on && wx==1 && wo==0) cout<<"1 \n";
    else if(xn==on && wx==0 && wo==1 ) cout<<"1 \n";
    else if(!flag && wx+wo==0) cout<<"1 \n";
    else if(!flag && wx==2) cout<<"1 \n";
    else if(flag && wx+wo==0) cout<<"2 \n";
    else cout<<"3 \n";
    
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