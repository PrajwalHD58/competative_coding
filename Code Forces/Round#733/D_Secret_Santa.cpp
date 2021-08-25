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
    int n,ans=0;
    cin>>n;
    int *arr=new int[n];
    bool isGift[n];
    vi v,rem;
    REP(i,0,n)
        isGift[i]=false;
    REP(i,0,n)
    {
        cin>>arr[i];
        --arr[i];
        if(!isGift[arr[i]])
        {
            isGift[arr[i]]=true;
            ans++;
        }
        else
            rem.push_back(i);
    }
    REP(i,0,n)
    {
        if(!isGift[i])
        {
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    int l=0,r=v.size()-1;
    REP(i,0,sz(rem))
    {

        if(rem[i]==v[r])
        {
            if(rem[i]==v[l])
            {
                REP(j,0,n)
                {
                    if(arr[rem[i]]==arr[j] && rem[i]!=j)
                    {
                        arr[j]=v[l];
                        break;
                    }
                }
            }
            else
            {
                arr[rem[i]]=v[l];
                l++;
            }
        }
        else
        {
            arr[rem[i]]=v[r];
            r--;
        }
    }
    cout<<ans<<" \n";
    REP(i,0,n)
    {
        cout<<arr[i]+1<<" ";
    }
    cout<<"\n";
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