#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<long long> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
bool isEqual(vi v)
{
    REP(i,1,v.size())
    {
        if(v[i]!=v[i-1])
        return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n) cin>>arr[i];
    vi v1;
    REP(i,0,n)
        v1.push_back(arr[i]);
    vi v2;

    
        REP(i,0,v1.size())
        {
            v2.push_back(v1[i]);
        }
        v1.clear();
        sort(v2.begin(),v2.end());
        for(ll i=0;i<v2.size()-1;)
        {
            if(v2[i]==v2[i+1])
            {
                v1.push_back(v2[i]);
                i++;
                continue;
            }
            else
            {
                v1.push_back(v2[i]^v2[i+1]);
                i+=2;
            }
            
        }
    if(n%2==1)
    v1.p
    if(isEqual(v1) && v1.size()>=2)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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