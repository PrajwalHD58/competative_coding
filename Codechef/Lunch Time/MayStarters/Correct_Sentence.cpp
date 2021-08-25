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
    string arr[n];
    REP(i,0,n)
        cin>>arr[i];
    REP(i,0,n)
    {
        int flag;
        if((int)arr[i][0]<=109 && (int)arr[i][0]>=97)
            flag=1;
        else if((int)arr[i][0]<=90 && (int)arr[i][0]>=78)
            flag=2;
        else
            flag=3;
       
        if(flag==1)
        {
                REP(j,1,arr[i].size())
            {
                if((int)arr[i][j]<=109 && (int)arr[i][j]>=97)
                    continue;
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
        else if(flag==2)
        {
            REP(j,1,arr[i].size())
            {
                if((int)arr[i][j]<=90 && (int)arr[i][j]>=78)
                    continue;
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
        else
        {
            cout<<"NO \n";
            return;
        }
    }
    cout<<"YES\n";

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