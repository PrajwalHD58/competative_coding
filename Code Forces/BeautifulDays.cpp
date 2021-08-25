#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

int reverseNum(int num)
{
    int rev_num = 0;
    while (true) {
        if(num>0)
        {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        else
            break;
    }
    return rev_num;
}

void solve()
{
    int i,j,k,ans=0;
    cin>>i>>j>>k;
    REP(a,i,j+1)
    {
        int n=reverseNum(a);
       // cout<<n<<""<<endl;
        int sub=abs(a-n);
        if((sub%k)==0)
        {
            ans++;
        }
    }
    cout<<ans<<" "<<endl;

}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    solve();
    
    return 0;
}