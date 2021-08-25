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

const int N = 1e7+2;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool prime[N];
int pre_prime[N];
void SieveOfEratosthenes()
{
   
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p < N; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i < N; i += p)
                prime[i] = false;
        }
    }
 
}

void pre()
{
    pre_prime[0]=0;
    pre_prime[1]=0;
    int cnt=0;
    for(int i=2;i<N;i++)
    {
        if(prime[i])
            cnt++;
        pre_prime[i]=cnt;        
    }
}

void solve()
{
    int n;
    cin>>n;
    int ans=1;
    int lim=n/2;
    if(n==2)
    {
        cout<<"1\n";
        return;
    }
    else if(n==3)
    {
        cout<<"2\n";
        return;
    }
    ans+=(pre_prime[n]-pre_prime[lim]);
    cout<<ans<<"\n";
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll t;
    ll T=1;
    SieveOfEratosthenes();
    pre();
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}