#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll x,y;
    string s;
    cin>>x>>y;
    cin>>s;
    //cout<<s<<endl;

    for(ll i=0;i<s.size();)
    {
        //cout<<"debug"<<endl;
        ll j;
        if(s[i]=='?')
        {
            j=i;
            if(i==0)
            {
                while(s[j]=='?')
                {
                   j++;
                }
                char c;
                c=s[j];
                REP(k,i,j)
                {
                    s[k]=c;
                }
                i=j;
            }  
            else
            {
                while(s[i]=='?')
                {
                    s[i]=s[i-1];
                    i++;
                }
                i--;
            }
           
       }
       else{
           i++;
       }
    }
    ll ans=0;
    REP(i,0,s.size()-1)
    {
        if(s[i]=='J' && s[i+1]=='C')
        {
            ans+=y;
        }
        else if(s[i]=='C'  &&  s[i+1]=='J'){
            ans+=x;
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
    
    cin>>t;
    ll T=t;
    while(t--)
    {
        
        cout<<"Case #"<<T-t<<": ";
        solve();
    }
    return 0;
}