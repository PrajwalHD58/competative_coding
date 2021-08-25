#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
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
    string s;
    cin>>s;
    int n=s.size();
    char prev='?';
    ll ans=0;
    REP(i,0,n-1)
    {
        
        string temp;
        temp=s.substr(i, n);
        //cout<<temp<<" \n";
        int k=0;
        if(temp[0]=='?')
        {
            while(temp[k]=='?')
            {
                k++;
            }
            if(k>=temp.size())
            {
                ans+=(k-1);
                continue;
            }
            RREP(j,k-1,-1)
            {
                if(temp[j+1]=='1')
                    temp[j]='0';
                else
                    temp[j]='1';
            }
        }
        REP(j,1,temp.size())
        {
            if(temp[j]=='1')
            {
                if(temp[j-1]=='0')
                    ans++;
                else
                    break;
            }
            else if(temp[j]=='0')
            {
                if(temp[j-1]=='1')
                    ans++;
                else
                    break;
            }
            else if(temp[j]=='?')
            {
                if(temp[j-1]=='0')
                {
                    ans++;
                    temp[j]='1';
                }
                else if(temp[j-1]=='1')
                {
                    ans++;
                    temp[j]='0';
                }
                else
                    break;
            }
        }
        //cout<<ans<<" ";
    }
    //cout<<ans<<" ";
    cout<<ans+(int)s.size()<<" \n";
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