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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int *arr=new int[k];
    REP(i,0,k)
        cin>>arr[i];
    ll sum=0;
    REP(i,1,s.size())
    {
        if(s[i]!=s[i-1])
            sum+=1;
        else
            sum+=2;
    }
    if(n==1)
    {
        REP(i,0,k)
            cout<<"0\n";
        return;
    }
    REP(i,0,k)
    {
        int temp=arr[i]-1;
       
        if(temp==0)
        {
            if(s[temp]==s[temp+1])
                sum--;
            else
                sum++;
        }
        else if(temp==(s.size()-1))
        {
            if(s[temp]==s[temp-1])
                sum--;
            else
                sum++;
        }
        else
        {
            if(s[temp]==s[temp+1])
                sum--;
            else
                sum++;
            if(s[temp]==s[temp-1])
                sum--;
            else
                sum++;
        }
        cout<<sum<<"\n";
        if(s[temp]=='1')
            s[temp]='0';
        else
            s[temp]='1';
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