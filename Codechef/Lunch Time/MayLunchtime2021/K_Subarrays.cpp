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
    int n,k;
    cin>>n>>k;
    vector<int> sum;
    vector<int> neg;
    int currsum=0,flag=0;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        if(inp<=0)
        {
            if(i!=0)
            {
                sum.push_back(currsum);
                currsum=0;
            }
            neg.push_back(inp);
        }
        else
        {
            currsum+=inp;
        }
    }
    sum.push_back(currsum);
    sort(sum.begin(),sum.end());
    sort(neg.begin(),neg.end());
    REP(i,0,sum.size())
        cout<<sum[i]<<" \n";
    if(k==1)
    {
        if(sum.size()!=0)
        cout<<sum[(int)sum.size()-1]<<" \n";
        else
            cout<<neg[0]<<" \n";
    }
    if(k==2)
    {
        if(sum.size()==0)
        {
            cout<<neg[sum.size()-1]*2+neg[sum.size()-1]<<" \n";
        }
        else if(sum.size()==1)
        {
            cout<<neg[neg.size()-1]+2*sum[sum.size()-1]<<" \n";
        }
        else
        {
            cout<<sum[(int)sum.size()-2]*2+sum[(int)sum.size()-1]<<" \n";
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