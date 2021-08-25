#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) printf('Case #%d: ', T)
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll *arr=new ll[n];
    pair<ll,int> *arr2=new pair<ll,int>[n];
    REP(i,0,n)
    {
        cin>>arr[i];
        arr2[i]=mp(arr[i],i);
    }

    sort(arr2,arr2+n);
    vector<pair<int,ll>> arr3;
    for(int i=n-1;i>=(n-min(k*2,n));i--)
    {
        arr3.push_back(mp(arr2[i].second,arr2[i].first));
    }
     ll temp=0;

    sort(arr3.begin(),arr3.end());

    int l=0,r=arr3.size()-1;

    if( r%2==0)
    {
        temp+=arr2[l].first;
       
        l++;

    }
    ll minm=INT_MAX;
    while(l<=r)
    {
       
        if(l==r)
        {
            if(arr3[r].second<minm)
            {
                temp+=arr3[r].second;
            }
            else
            {
                temp+=minm;
            }
            r--;
        }
        else if(arr3[l].second+arr3[r].second>x)
        {
            minm=min(minm,min(arr3[l].second,arr3[r].second));
            l++;
            r--;
            temp+=x;
        }
        else if(arr3[l].second<arr3[r].second)
        {
           
            temp+=arr3[l].second;
             l++;
        }
        else
        {
            temp+=arr3[r].second;
            r--;
        }
    }

 
    REP(i,0,n-arr3.size())
    {
        temp+=arr2[i].first;
    }
    cout<<temp<<" \n";
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