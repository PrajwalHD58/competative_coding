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
#define D(a) cout<<#a<<"["<<a<<"]\n";

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

void findRoom(char **arr,bool **visited,int s,int e,int n,int m)
{
    if(s<0 || e<0 || s>=n || e>=m || visited[s][e])
        return;
    else if(arr[s][e]=='#')
    {
        visited[s][e]=true;
        return;
    }
    else if(arr[s][e]=='.')
    {
        visited[s][e]=true;
        findRoom(arr,visited, s+1, e, n,m);
        findRoom(arr,visited, s, e+1, n,m);
        findRoom(arr,visited, s-1, e, n,m);
        findRoom(arr,visited, s, e-1, n,m);
    }
    return;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    char **arr=new char*[n];
    REP(i,0,n)
    {
        arr[i]=new char[m];
        REP(j,0,m)
            cin>>arr[i][j];
    }
    bool  **visited=new bool*[n];
    REP(i,0,n)
    {
        visited[i]=new bool[m];
        REP(I,0,m)
            visited[i][I]=false;
    } 

    int count=0;
   
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(arr[i][j]=='.' && !visited[i][j])
            {
    
                findRoom(arr,visited, i, j, n,m);
                count++;
            }
        }
    }
    cout<<count<<" \n";

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    //start here
    solve();
    return 0;
}