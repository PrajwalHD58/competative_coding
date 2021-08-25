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
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=true,flag2=true;
    REP(i,0,n)
    {
        if(s[i]=='?')
        {
            flag2=false;
            if(s[i-1]=='R')
            {
                flag=false;
                s[i]='B';
                int it=i-1;
                while(s[it]=='?' && it>=0)
                {
                    if(s[it+1]=='R')
                     {
                         s[it]='B';
                     }
                    else if(s[it+1]=='B')
                     {
                         s[it]='R';
                      }
                    it--;
                }
            }
            else if(s[i-1]=='B')
            {
                flag=false;
                s[i]='R';
                 int it=i-1;
                 while(s[it]=='?' && it>=0)
                {
                    if(s[it+1]=='R')
                     {
                         s[it]='B';
                     }
                    else if(s[it+1]=='B')
                     {
                         s[it]='R';
                      }
                    it--;
                }
            }
            else if(s[i+1]=='R')
            {
                flag=false;
                s[i]='B';
                 int it=i-1;
                 while(s[it]=='?' && it>=0)
                {
                    if(s[it+1]=='R')
                    {
                        s[it]='B';
                    }
                    else if(s[it+1]=='B')
                    {
                        s[it]='R';
                    }
                    it--;
                }
            }
            else if(s[i+1]=='B')
            {
                flag=false;
                s[i]='R';
                int it=i-1;
                while(s[it]=='?' && it>=0)
                {
                    if(s[it+1]=='R')
                    {
                        s[it]='B';
                    }
                    else if(s[it+1]=='B')
                    {
                        s[it]='R';
                    }
                    it--;
                }
            }
            
        }
    }
    
    if(flag2)
    {
        cout<<s<<" \n";
        return;
    }

    if(flag)
    {
        REP(i,0,n)
        {
            if(i%2==0)
            {
                cout<<"B";
            }
            else
            {
                cout<<"R";
            }
        }
        cout<<" \n";
        return;
    }
    
    cout<<s<<" \n";
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