#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool isAlready(string s)
{
    bool arr[26];
    memset(arr,0,sizeof(arr));
    int count=1;
    REP(i,1,s.size())
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            if(count<2 || (arr[(int)s[i]-65]))
               return false;
            count=1;
            arr[(int)s[i]-65]=true;
        }
    }
    return true;
}


int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        string g;
        cin>>n>>g;
        int arr[27];
        REP(i,0,27)
        {
            arr[i]=0;
        }
        REP(i,0,g.size())
        {
            if(g[i]=='_')
            {
                arr[26]++;
            }
            else
            arr[(int)g[i]-65]++;
        }
       
        bool flag=true;
        if(arr[26]==g.size())
        {
            flag=true;
        }
        
        else
        {
            REP(i,0,26)
            {

            if(arr[i]==1)
               flag=false;
            }
            if(flag)
            {
                if(arr[26]>0)
                    flag=true;
                else
                    flag=false;
            }
        }
        if(flag || isAlready(g))
           cout<<"YES \n";
        else
           cout<<"NO \n";
     }
    
}