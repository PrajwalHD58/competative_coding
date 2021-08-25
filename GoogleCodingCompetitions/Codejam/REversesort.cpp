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


ll min_elem(ll *arr,ll k,ll n)
{
    ll pos=k;
    REP(i,k+1,n)
    {
        if(arr[i]<arr[pos])
        {
            pos=i;
        }
    }
    return pos;
}



void reverse(ll arr[], ll n, ll k)
{
       ll left = k;
  
        // to handle case when k is not multiple of n
        ll right = n;
  
        // reverse the sub-array [left, right]
        while (left < right)
            swap(arr[left++], arr[right--]);
  
    
}

void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    ll *arr=new ll[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    
    REP(i,0,n-1)
    {
        ll i1;
        i1 = min_elem(arr,i,n);
        reverse(arr,i1,i);
        // REP(i,0,n)
        // {
        //     cout<<arr[i]<< "  ";
        // }
        //cout<<endl
        //cout<<i1<<"  "<<endl;
        
        // REP(i,0,n)
        // {
        //     cout<<arr[i]<<"  ";
        // }
        ans+=i1-i+1;
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