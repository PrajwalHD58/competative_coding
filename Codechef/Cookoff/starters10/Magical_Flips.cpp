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
    int n;
    cin>>n;
    int *arr=new int[n];
    int *arr2=new int[n];
    REP(i,0,n)
        cin>>arr[i];
    REP(i,0,n)
        cin>>arr2[i];

    ll ans1=arr[0],ans2=arr2[0];
    vi v1,v2;
    v1.push_back(0);
    v2.push_back(1); 
    REP(i,1,n)
    {
        ll temp1=ans1&arr[i];
        ll temp2=ans1&arr2[i];
        if(temp1>=temp2)
        {
            v1.push_back(0);
            ans1=temp1;
        }
        else
        {
            v1.push_back(1);
            ans1=temp2;
        }
        ll temp3=ans2&arr[i];
        ll temp4=ans2&arr2[i];
        if(temp3>=temp4)
        {
            v2.push_back(0);
            ans2=temp3;
        }
        else
        {
            v2.push_back(1);
            ans2=temp4;
        }
    }
    int v10=0,v11=0;
    int v20=0,v21=0;
    REP(i,0,n)
    {
        if(v1[i]==0)
            v10++;
        else
            v11++;
        if(v2[i]==0)
            v20++;
        else
            v21++;
    }
    if(ans1>ans2)
    {
        cout<<ans1<<" "<<v11<<" \n";
    }
    else if(ans1<ans2)
    {
        cout<<ans2<<" "<<v21<<" \n";
    }
    else
    {
        cout<<ans2<<" "<<min(v21,v11)<<" \n";
    }
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