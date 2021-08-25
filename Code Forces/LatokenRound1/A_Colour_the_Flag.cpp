#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<a<<

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    char arr2[n][m];
    char arr3[n][m];
    bool flag1=true,flag2=true;
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cin>>arr[i][j];
        }
    }
    REP(i,0,n)
    {
        if(i%2==0)
        {
            REP(j,0,m)
            {
                if(j%2==0)
                {
                    arr2[i][j]='R';
                     arr3[i][j]='W';
                }
                else
                {
                    arr2[i][j]='W';
                    arr3[i][j]='R';
                }
            }
        }
        else
        {
            REP(j,0,m)
            {
                if(j%2==0)
                {
                    arr2[i][j]='W';
                    arr3[i][j]='R';
                }
                else
                {
                    arr2[i][j]='R';
                    arr3[i][j]='W';
                }
            }
        }
        REP(j,0,m)
        {
            if(arr[i][j]==arr2[i][j] || arr[i][j]=='.')
            {
                
            }
            else
            {
                flag1=false;
            }
            if(arr[i][j]==arr3[i][j] || arr[i][j]=='.')
            {
                
            }
            else
            {
                flag2=false;
            }
        }
    }
    if(flag1)
    {
        cout<<"YES\n";
        REP(i,0,n)
        {
            REP(j,0,m)
                cout<<arr2[i][j]<<"";
            cout<<endl;
        }
    }
    else if(flag2)
    {
        cout<<"YES\n";
        REP(i,0,n)
        {
            REP(j,0,m)
                cout<<arr3[i][j]<<"";
            cout<<endl;
        }
    }
    else
        cout<<"NO\n";
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