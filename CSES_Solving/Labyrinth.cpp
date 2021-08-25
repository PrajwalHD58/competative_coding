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

pair<int,string> findRoom(char **arr,bool **visited,int s,int e,int n,int m)
{
    int ans=INT_MAX;
    string str="";
    if(s<0 || e<0 || s>=n || e>=m || visited[s][e])
        return make_pair(-1,"");
    else if(arr[s][e]=='#')
    {
        visited[s][e]=true;
        return make_pair(-1,"");
    }
    else if(arr[s][e]=='B')
    {

        return make_pair(0,"");
    }
    else if(arr[s][e]=='.' || arr[s][e]=='A')
    {
        visited[s][e]=true;
        auto p1=findRoom(arr,visited, s+1, e, n,m);
    
         auto p2=findRoom(arr,visited, s, e+1, n,m);
         auto p3=findRoom(arr,visited, s-1, e, n,m);
          auto p4=findRoom(arr,visited, s, e-1, n,m);
        if(p1.first!=-1)
        {
             str=str+p1.second;
            str.push_back('D');
            
            ans=p1.first;
           
        }
       
        if(p2.first!=-1)
        {
           if(ans>p2.first)
           {
            str=str+p2.second;
            str.push_back('R');
            ans=min(ans,p2.first);
           }
        }
        if(p3.first!=-1)
        {
            if(ans>p3.first)
            {
             str=str+p3.second;
            str.push_back('U');
            ans=min(ans,p3.first);
            }
        }

        if(p4.first!=-1)
        {
           if(ans>p4.first)
           {
            str=p4.second;
            str.push_back('L');
            ans=min(ans,p4.first);
           }
        }
    }
    if(ans==INT_MAX)
        return make_pair(ans,str);
    return make_pair(++ans,str);
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
            if(arr[i][j]=='A' && !visited[i][j])
            {
               
                auto p=findRoom(arr,visited, i, j, n,m);
                if(p.first==INT_MAX)
                {
                    cout<<"NO\n";
                    return;
                }
                else
                {
                    cout<<"YES\n";
                    cout<<p.first<<" \n";
                   
                    RREP(i,p.second.size()-1,-1)
                    {
                        cout<<p.second[i]<<"";
                    }
                    return;
                }
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