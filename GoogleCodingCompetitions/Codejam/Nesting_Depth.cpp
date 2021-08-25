#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
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

string solve(string s)
{
    string sol="";
    //stack<char> S;
    int nob=0;
    REP(i,0,s.size())
    {
        if(s[i]=='0')
        {
            if(nob==0)
               sol+='0';
            else
            {
               while(nob--)
               {
                   sol+=')';
               }
               sol+='0';
            }
            nob=0;
        }
        else{
            char a = s[i];
            int ia = a - '0';
            if(nob==0)
            {
                REP(j,0,ia)
                sol+='(';
                sol+=s[i];
                nob+=ia;
                
            }
            else if(nob>ia)
            {
                
                while(nob!=ia)
                {
                   sol+=')';
                   nob--;
                }
                sol+=s[i];
                nob=ia;
            }
            else if(nob<ia)
            {
                
                REP(j,0,ia-nob)
                sol+='(';
                sol+=s[i];
                nob=ia;
            }
            else{
                sol+=s[i];
                REP(j,0,ia)
                 sol+=')';
            }
        }
    }
    while(nob!=0)
    {
        sol+=')';
        nob--;
    }
    return sol; 
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    
    cin>>t;
    ll T=t;
    while(t--)
    {
        string s;
        cin>>s;
        string ans=solve(s);
        
        cout<<"Case #"<<T-t<<": "<<ans<<endl;
    }
    return 0;
}