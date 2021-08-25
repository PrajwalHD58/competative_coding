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
    ll n,c;
    cin>>n>>c;
    ll *arr=new ll[n];
    if(c<(n-1) || c>=(n*(n+1)/2))
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    else{
        REP(i,0,n)
        {
           arr[i]=i+1;
        }
        vector<ll> v;
        c=c-n+1;
        //bool temp[n]={false};
        int i=n-1;
        while(c>0)
        {
            if(c-i>=0)
            {
                v.push_back(i);
                //temp[i]=true;
                c=c-i;
                i--;
            }
            else
            {
                i--;
            }
        }
        sort(v.begin(),v.end());
        REP(i,0,v.size())
        {
            reverse(arr,n-1,n-1-v[i]);
        }
        REP(i,0,n)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
    

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