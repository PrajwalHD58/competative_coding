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

vector<vector<int> > formMatrix(string s,int n)
{
    vector<vector<int>> ans(n ,vector<int> (n,0));
    for (auto &i : ans)
    fill(i.begin(), i.end(), 0);
    pair <int ,int> p;
    p.first=0;
    p.second=0;
    REP(i,0,s.size()-1)
    {
        if(s[i]=='S')
        {
            p.first+=1;
            p.second+=0;
        }
        else{
            p.first+=0;
            p.second+=1;
        }
        ans[p.first][p.second]=1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    //ll t;
    
    // cin>>t;
    //ll T=t;
    //while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<"Running"<<""<<endl;
        vector <vector<int>> v;
        v=formMatrix(s,n);
        cout<<"Running"<<""<<endl;
        REP(i,0,n)
        {
            REP(j,0,n)
            {
                cout<<v[i][j]<<"  ";
            }
            cout<<endl;
        }
        //cout<<"Case #"<<T-t<<":"<<endl;
    }
    return 0;
}