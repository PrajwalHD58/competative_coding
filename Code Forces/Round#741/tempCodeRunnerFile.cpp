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
    int k;
    cin>>k;
    string s;
    cin>>s;
    if(k==1)
    {
        cout<<"1\n";
        cout<<s<<" \n";
        return;
    }
    vector<ll> v(9,0);
   string ans="";
    REP(i,0,sz(s))
    {
        
        char a = s[i];
        int ia = a - '0';
        v[ia-1]++;
        if(ia==2 || ia==3 || ia==5 || ia==7)
        {
            if(sz(ans)<2)
            {
                ans+=a;
            }
            else if(ans=="23" || ans=="53" || ans=="73")
            {
                if(a=='3')
                {
                    ans[0]=a;
                }
                else
                {
                    ans[1]=a;
                }
            }
            else if(ans=="37")
            {
                if(a=='3')
                {
                    ans[1]=a;
                }
                else
                {
                    ans[0]=a;
                }
            }
        }
    }
    REP(i,0,9)
    {
        if(i+1==1 || i+1==4 || i+1==6 || i+1==8 || i+1==9)
        {
            if(v[i]>0)
            {
                cout<<"1\n";
                cout<<i+1<<" \n";
                return;
            }
        }
    }
    cout<<"2\n";
    cout<<ans<<"\n";
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