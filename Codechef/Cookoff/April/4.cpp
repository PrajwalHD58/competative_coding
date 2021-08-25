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

bool isperfectSquare(ll x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;

}
bool findSquare(ll *nums, ll N)
{
    // Stores the prefix sum of nums[]
    ll prefix_sum = 0;
 
    // Stores the bitwise OR of
    // sum of each subsequence
    bool result = false;
 
    // Iterate through array nums[]
    for (ll i = 0; i < N; i++) {
 
        // Bits set in nums[i] are
        // also set in result
        if(isperfectSquare(nums[i]))
            result=true;
        else
            return false;
        // Calculate prefix_sum
        prefix_sum *= nums[i];
 
        // Bits set in prefix_sum
        // are also set in result
        if(isperfectSquare(prefix_sum))
            result=true;
        else
            return false;
    }
 
    // Return the result
    return result;
}

void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
        cin>>arr[i];
    if(findSquare(arr,n))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}