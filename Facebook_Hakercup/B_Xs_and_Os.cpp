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
#define google(T) cout<<"Case #"<<T<<": ";
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

bool compare(pii a,pii b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}
void solve()
{
    int n;
    cin>>n;
    char **arr=new char*[n];
    REP(i,0,n)
    {
        arr[i]=new char[n];
        REP(j,0,n)
            cin>>arr[i][j];
    }
    ll ans=INT_MAX,sameelmn=0;
    vector<pii> vp;
    REP(i,0,n)
    {
        bool flag=false;
        pii p;
        int cnt=0;
        REP(j,0,n)
        {
            if(arr[i][j]=='O')
            {
                flag=true;
                break;
            }
            else if(arr[i][j]=='.')
            {
                if(cnt==0)
                {
                    p=mp(i,j);
                }
                cnt++;
            }
        }
        if(!flag)
        {
            if(cnt==1)
            {
                vp.push_back(p);
            
            }
            if(ans>cnt)
            {
                ans=cnt;
                sameelmn=1;
            }
            else if(ans==cnt)
            {
                sameelmn++;
            }
        }
        flag=false;
        cnt=0;
        REP(j,0,n)
        {
            if(arr[j][i]=='O')
            {
                flag=true;
                break;
            }
            else if(arr[j][i]=='.')
            {
                if(cnt==0)
                {
                    p=mp(j,i);
                }
                cnt++;
            }
        }
        if(!flag)
        {
            if(cnt==1)
            {
                vp.push_back(p);
               
            }
            if(ans>cnt)
            {
                ans=cnt;
                sameelmn=1;
            }
            else if(ans==cnt)
            {
                sameelmn++;
            }
        }
    }
    if(ans==INT_MAX)
    {
        cout<<"Impossible\n";
        return;
    }
    ll temp=0;
    if(ans==1)
    {
        sort(vp.begin(),vp.end(),compare);
        REP(i,0,sz(vp)-1)
        {
            if(vp[i]==vp[i+1])
                temp++;
        }
       sameelmn-=temp;
    }
    cout<<ans<<" "<<sameelmn<<" \n";
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
    google(T);
    solve();
    T++;
}
return 0;
}