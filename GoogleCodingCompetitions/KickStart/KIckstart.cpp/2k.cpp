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
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll r,c;
    cin>>r>>c;
    vector <vector<ll>> v(r);
    REP(i,0,r)
    {
        v[i].resize(c);
        REP(j,0,c)
        {
            cin>>v[i][j];
        }
    }
    ll ans=0;
    REP(i,0,r)
    {
        REP(j,0,c)
        {
            ll x=i,y=j,ra=0,ca=0;
            if(v[i][j+1]==1 && v[i+1][j]==1 &&(v[i-1][j]==0 || v[i][j-1]==0) )
            {
                while(v[x][y]==1 && x<r)
                {
                    ra++;
                    x++;
                }
                
                while(v[x][y]==1 && y<c)
                {
                    ca++;
                    y++;
                }
            }
            else if(v[i][j-1]==1 && v[i+1][j]==1 &&(v[i-1][j]==0 || v[i][j+1]==0) )
            {
                while(v[x][y]==1 && x<r)
                {
                    ra++;
                    x++;
                }
                
                while(v[x][y]==1 &&  y>=0)
                {
                    ca++;
                    y--;
                }
            }
            else if(v[i-1][j]==1 && v[i][j-1]==1 &&(v[i+1][j]==0 || v[i][j+1]==0) )
            {
                while(v[x][y]==1 && x>=0)
                {
                    ra++;
                    x--;
                }
                
                while(v[x][y]==1 && y>=0)
                {
                    ca++;
                    y--;
                }
            }
            else if(v[i-1][j]==1 && v[i][j+1]==1 &&(v[i+1][j]==0 || v[i][j-1]==0) )
            {
                while(v[x][y]==1 && x>=0)
                {
                    ra++;
                    x--;
                }
                
                while(v[x][y]==1 && y<c)
                {
                    ca++;
                    y++;
                }
            }
            if(ra>1 && ca>1)
            {
                if(ra>ca)
                {
                    if(ca*2==ra)
                    {
                        ans++;
                    }
                }
                else{
                    if(ca==ra*2)
                    {
                        ans++;
                    }
                }
            }
            
            
            
        }
    }
    cout<<ans<<" "<<endl;

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
        ll ans;
        cout<<"Case #"<<T<<": ";
        solve();
        T++;
    }
    return 0;
}