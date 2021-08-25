#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) 
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

int recursivedes(int *arr,int n,int m)
{
    int ans=1;
    REP(i,0,n)
    {
        D(arr[i]);
        // checking bound
        if(arr[i]>m || arr[i]<0)
        {
            return 0;
        }
        //checking condition
        if(abs(arr[i]-arr[i-1])<=1 && i!=0 && arr[i]!=0)
            return 0;
        //trying all possible substitution
        else if(arr[i]==0)
        {
            REP(j,1,m+1)
            {
                arr[i]=j;
                ans+=recursivedes(arr,n,m);
            }
        }
    }
    D(ans)
    return ans;
}

// int dpsol(int *arr,int n,int m)
// {
//     int arr[n][m];
//     REP(i,0,n)
//     {
//         if(arr[i]==0)
//         {

//         }
//     }
// }
void solve()
{
    //array size n,max element can be m;
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    //let first find recursive structure
    cout<<recursivedes(arr,n,m)<<" \n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
   solve();
    return 0;
}