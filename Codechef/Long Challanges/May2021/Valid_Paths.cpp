#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;


const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    const int N = 4e6 + 5;
    int dp[N], ans[N];
    REP(i,0,N)
    {
        dp[i] = i;
        ans[i] = 0;
    }
    REP(i,2,N)
    {
        if (dp[i] == i)
        {
            dp[i] = i - 1;
            for (int j = 2 * i; i < N; j += i)
            {
                dp[j] = (dp[j] / i) * (i - 1);
            }
        }
    }
    REP(i,1,N)
    {
        ans[i] += i - 1;
        for (int j = 2 * i; j < N; j += i)
        {
            ans[j] += i * ((1 + dp[j / i]) / 2);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << ans[4 * k + 1] << endl;
    }
    return 0;
}