#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void solve()
{
    int n;
    cin>>n;
    vi arr;
    REP(i,0,n)
    {
        int inp;
        cin>>inp;
        arr.push_back(inp);
    }
    set<int> v;
    sort(arr.begin(),arr.end());
    REP(i,0,n)
    {
        REP(j,0,n)
        {
            if(i!=j)
            {
                int diff=0;
                diff=abs(arr[i]-arr[j]);
                if(!binary_search(arr.begin(),arr.end(),diff))
                    v.insert(diff); 
            }
        }
    }
    if(v.size()==0)
    {
        cout<<"YES\n";
        cout<<arr.size()<<" \n";
        REP(i,0,arr.size())
            cout<<arr[i]<<" ";
        cout<<" \n";
        return;
    }
    while(v.size()>0 && arr.size()<=300)
    {
        for (auto itr = v.begin(); itr != v.end(); itr++)
        {
            arr.push_back(*itr);
        }
        v.clear();
        sort(arr.begin(),arr.end());
        REP(i,0,arr.size())
        {
            REP(j,0,arr.size())
            {
                if(i!=j)
                {
                    int diff=0;
                    diff=abs(arr[i]-arr[j]);
                    if(!binary_search(arr.begin(),arr.end(),diff))
                        v.insert(diff); 
                }
            }
        }
    }
    if(v.size()==0)
    {
         cout<<"YES\n";
         cout<<arr.size()<<" \n";
        REP(i,0,arr.size())
            cout<<arr[i]<<" ";
        cout<<" \n";
    }
    else
    {
       cout<<"NO\n"; 
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