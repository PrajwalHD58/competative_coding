#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n , k ,q;
        cin>>n>>q>>k;
        ll *arr=new ll[n];
        REP(i,0,n)
        {
            cin>>arr[i];
        }
        ll wa=0,wb=0;
        ll query[q][2];
        REP(i,0,q)
        {
            REP(j,0,2)
            {
                cin>>query[i][j];
            }
        }
        REP(m,1,k+1)
        {  
            ll bw=0,aw=0;
            REP(i,0,q)
            {
              ll a,b;
              a=query[i][0];
              b=query[i][1];
              
              if(arr[a-1]>m)
              {
                bw++;
              }
              else if(arr[a-1]<=m && arr[b-1]>=m)
              {
                  if(arr[0]==1 || arr[0]==0)
                  {
                      aw++;
                  }
                  else
                  {
                      if(binary_search(arr, arr+n , m))
                        aw++;
                      else
                        bw++;
                  }
              }
              else
              {
                  if((m/arr[b-1])%2==1 )
                    aw++;
                  else 
                    bw++; 
              }
            } 
            if(aw>=wa)
            {
                wa=aw;
            }
            if(aw==q)
            {
                break;
            }
        }   
        
       cout<<wa<<""<<endl; 
    }
    return 0;
}