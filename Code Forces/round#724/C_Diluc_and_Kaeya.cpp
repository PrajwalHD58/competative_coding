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
    int n;
    string s;
    cin>>n>>s;
    REP(i,0,n)
    {
        string temp;
        temp=s.substr(i,n);
        vector<pii> v;
        int r=0,d=0;
        REP(i,0,temp.size())
        {
            if(temp[i]=='R')
                r++;
            if(temp[i]=='D')
                d++;
            v.push_back(make_pair(d,r));
        }
        REP(i,0,temp.size()-1)
        {
            if(v[i].first)
        }
    }

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