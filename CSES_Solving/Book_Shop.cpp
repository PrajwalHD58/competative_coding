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
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

int maxPages(int *prize,int * pages,int *dp,int s,int n,int price)
{
    if(s>=n || price<=0)
        return 0;
    if(dp[price]!=-1)
    {
        D(dp[price])
        return dp[price];
    }
    int ans=0,ans1,ans2;
    
    if(prize[s]<=price)
        ans1=maxPages(prize,pages,dp,++s,n,price-prize[s])+pages[s];
    ans2=maxPages(prize,pages,dp,++s,n,price);
    ans=max(ans1,ans2);
   D(price)
    return ans;
}

void solve()
{
    int n,price;
    cin>>n>>price;
    int *dp=new int[price+1];
    REP(i,0,price+1)
        dp[i]=-1;
    dp[0]=0;
    int *pbook=new int[n];
    int *pages=new int [n];
    REP(i,0,n)
        cin>>pbook[i];
    REP(i,0,n)
        cin>>pages[i];

    int ans=maxPages(pbook,pages,dp,0,n,price);
    cout<<ans<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
        solve();
    
    return 0;
}