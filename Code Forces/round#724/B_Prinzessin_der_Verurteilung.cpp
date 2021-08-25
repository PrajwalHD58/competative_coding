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

int isSubstring(string s1, string s2)
{
    int M = s1.size();
    int N = s2.size();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26];
    memset(arr,0,sizeof(arr));
    REP(i,0,n)
    {
        arr[(int)s[i]-97]++;
    }
    REP(i,0,26)
    {
        if(arr[i]==0)
        {
            cout<<(char)(97+i)<<" \n";
            return;
        }
    }
    REP(i,0,26)
    {
        
        REP(j,0,26)
        {
            string temp="";
            temp.push_back((char)(97+i));
            temp.push_back((char)(97+j));
            //cout<<temp<<" ";
            int res=isSubstring(temp,s);
            if(res==-1)
            {
                cout<<temp<<" \n";
                return;
            }
        }
    }
    REP(i,0,26)
    {
        
        REP(j,0,26)
        {
            REP(k,0,26)
            {
                string temp="";
                temp.push_back((char)(97+i));
                temp.push_back((char)(97+j));
                temp.push_back((char)(97+k));
                //cout<<temp<<" ";
                int res=isSubstring(temp,s);
                if(res==-1)
                {
                    cout<<temp<<" \n";
                    return;
                }
            }
        }
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