#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool isConvertable(vector<vector<ll>> arr1,vector<vector<ll>> arr2,ll r,ll c,ll x)
{
    if(r<x && c<x)
    {
        REP(i,0,r)
        {
            REP(j,0,c)
            {
                if(arr1[i][j]!=arr2[i][j])
                  return false;
               
            }
        }
        return true;
    }
    else if(c<x)
    {
        REP(i,0,c)
        {
            REP(j,0,r-x+1)
            {
                if(arr1[j][i]!=arr2[j][i])
                {
                    ll diff=arr2[j][i]-arr1[j][i];
                    REP(k,j,j+x)
                    {
                        arr1[k][i]+=diff;
                    }
                }
                if(j==r-x)
                {
                    REP(k,r-x+1,r)
                    {
                        if(arr1[k][i]!=arr2[k][i])
                        {
                            return false;
                        }
                    }

                }

            }


        }
        return true;
    }
    else if(r<x)
    {
        REP(i,0,r)
        {
            REP(j,0,c-x+1)
            {
                if(arr1[i][j]!=arr2[i][j])
                {
                    ll diff=arr2[i][j]-arr1[i][j];
                    REP(k,j,j+x)
                    {
                        arr1[i][k]+=diff;
                    }
                }
                if(j==c-x)
                {
                    REP(k,c-x+1,r)
                    {
                        if(arr1[i][k]!=arr2[i][k])
                        {
                            return false;
                        }
                    }

                }

            }

        }
        return true;
    }
    else{
        REP(i,0,r)
        {
            REP(j,0,c-x+1)
            {
                if(arr1[i][j]!=arr2[i][j])
                {
                    ll diff=arr2[i][j]-arr1[i][j];
                    REP(k,j,j+x)
                    {
                        arr1[i][k]+=diff;
                    }
                }
                
            }

        }
        REP(i,0,c)
        {
            REP(j,0,r-x+1)
            {
                if(arr1[j][i]!=arr2[j][i])
                {
                    ll diff=arr2[j][i]-arr1[j][i];
                    REP(k,j,j+x)
                    {
                        arr1[k][i]+=diff;
                    }
                }
                if(j==r-x)
                {
                    REP(k,r-x+1,r)
                    {
                        if(arr1[k][i]!=arr2[k][i])
                        {
                            return false;
                        }
                    }

                }
            }
        }
        return true;

    }
    return false;
  
}
 
int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c,x;
        cin>>r>>c>>x;
        vector<vector<ll>> a(r);
        vector<vector<ll>> b(r);
        REP(i,0,r)
        {
            a[i].resize(c);
            REP(j,0,c)
            {
                cin>>a[i][j];
            }
        }
        REP(i,0,r)
        {
            b[i].resize(c);
            REP(j,0,c)
            {
                cin>>b[i][j];
            }
        }
        bool t1=isConvertable(a , b, r, c, x);
        if(t1)
         cout<<"Yes"<<endl;
        else
         cout<<"No"<<endl;

    }
    return 0;
}