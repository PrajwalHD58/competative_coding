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


// string solve(int n, vector<vector<int>> v)
// {
//     string ans="";
//     int cll=0,cul=0;
//     int jll=0,jul=0;
//     REP(i,0,n)
//     {
//         if(cll<=v[i][0])
//         {
//             ans+='C';
//             cul=v[i][0];
//             cll=v[i][1];
//         } 
//         else if(cul>=v[i][1])
//         {
//             ans+="C";
//             cul=v[i][0];
//             cll=v[i][1];
//         }
//         else if(jll<=v[i][0])
//         {
//             ans+='J';
//             jul=v[i][0];
//             jll=v[i][1];
//         } 
//         else if(jul>=v[i][1])
//         {
//             ans+='J';
//             jul=v[i][0];
//             jll=v[i][1];
//         }
//         else{
//             ans="IMPOSSIBLE";
//             break;
//         }
//     }
//     return ans;

// }
void solve(int n,vector<vector<int>> v)
{
    char sol[n];
    vector<pair<pair<int,int>,int>> p;
    REP(i,0,n)
    {
        p.push_back({{v[i][0],v[i][1]},i+1});
    }
    sort(p.begin(),p.end());
    int cll=0;
    int jll=0;
    REP(i,0,n)
    {
        if(cll<=p[i].first.first)
        {
            sol[p[i].second-1]='C';
            cll=p[i].first.second;
        } 
        else if(jll<=p[i].first.first)
        {
            sol[p[i].second-1]='J';
            jll=p[i].first.second;
        } 
        else{
            cout<<"IMPOSSIBLE";
            return;
        }
    }
    REP(i,0,n)
    {
        cout<<sol[i]<<"";
    }
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
        int n;
        cin>>n;
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i].resize(2);
            for(int j=0;j<2;j++)
            {
                cin>>v[i][j];
            }
        }

        cout<<"Case #"<<T-t<<": ";
        solve(n,v);
        cout<<endl;
    }
    return 0;
}