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

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

ll gcd(ll n1,ll n2)
{
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
void solve()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    REP(i,0,n)
        cin>>arr[i];
    ll op=0;
    vector<vector<ll>> v;
    REP(i,1,n)
    {
        if(gcd(arr[i],arr[i-1])!=1)
        {
            vector<ll> a;
            a.push_back(i);
            a.push_back(n);
            a.push_back(arr[i]+1);
            a.push_back(min(arr[i-1],arr[n-1]));
            arr[i-1]=arr[i]+1;
            arr[n-1]=min(arr[i],arr[n-1]);
            v.push_back(a);
            op++;
        }
    }
    if(op==0)
       cout<<"0 \n";
    else
    {
        cout<<op<<" \n";
        REP(i,0,v.size())
        {
            REP(j,0,v[i].size())
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
       
    }
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