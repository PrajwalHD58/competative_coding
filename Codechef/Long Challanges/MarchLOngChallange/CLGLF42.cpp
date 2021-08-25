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
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;


int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,e,h,a,b,c,index1,index2,o,k;
        bool flag=false;
        cin>>n>>e>>h>>a>>b>>c;
        vector<ll> v;
        vector <ll> vec;
        REP(i,0,n+2)
        {
            vec.push_back(i);
        }
        REP(i,0,n+1)
        {
            index1=lower_bound(vec.begin(),vec.end(),(2*n-e-2*i))-vec.begin();
            index2=upper_bound(vec.begin(),vec.end(),(h-3*i))-vec.begin()-1;
            if(index2<index1 || index1==n+1)
            {
                continue;
            }
            if(index2==n+1 && index2+3*i>h)
            {
                continue;
            }
            if(c>a)
            {
                k=(index1<(n-i)?index1:(n-i));
            }
            else{
                k=(index2<(n-i)?index2:(n-i));

            }
            o=n-k-i;
            if(k+2*i>=2*n-e && k+3*i<=h)
            {
                v.push_back(a*o+b*i+c*k);
            }
        
        }
        if(v.size()==0)
        {
            cout<<"-1"<<endl;
        }
        else{
            ll min=v[0];
            for(ll j=0;j<v.size();j++)
            {
                if(v[j]<min)
                {
                    min=v[j];
                }
            }
            cout<<min<<" "<<endl;
        }
        
    }
    return 0;
}