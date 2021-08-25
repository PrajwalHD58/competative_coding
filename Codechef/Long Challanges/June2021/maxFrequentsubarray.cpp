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

ll findocuurence(ll *arr,ll n,ll l,ll r)
{
    ll ans=0;
    
    for(ll i=0;i<(n-r+l);i++)
    {
        bool flag=true;
        if(arr[i]==arr[l])
        {
            ll it=l+1;
            REP(j,i+1,r-l+i+1)
            {
                if(arr[j]==arr[it])
                {
                    it++;
                }
                else 
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans++;
        }

    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
  
    ll maxsofar=0,maxsum=INT64_MIN;
    REP(i,0,n)
    {
        REP(j,i,n)
        {
            ll temp=0;
            REP(k,i,j+1)
            {
                temp+=arr[k];
            }
            // //cout<<temp<<" \n";
            // if(temp<0)
            // {
            //       maxsum=max(maxsum,temp);
            // }
            // else
            // {
                ll temp2=0;
                temp2=findocuurence(arr,n,i,j);
                //cout<<temp2<<" \n";
                maxsum=max(maxsum,temp*temp2);
            // }
        }
    }
    cout<<maxsum<<" \n";
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