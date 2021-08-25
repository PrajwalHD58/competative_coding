#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;


int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> v1,v2;
    for(int i=0;i<n;i++)
    {
        sum+=i+1;
    } 
    if(sum%2==1)
    {
      cout<<"NO"<<endl;
      return 0;
    } 
    sum=sum/2;
    
     if(n==1)
     {
         cout<<"NO"<<endl;
     }
      else{
        for(ll i=n;i>0;i--)
        {
            if(sum-i>=0)
            {
                sum=sum-i;
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        REP(i,0,v1.size())
        {
            cout<<v1[i]<<"  ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        REP(i,0,v2.size())
        {
            cout<<v2[i]<<"  ";
        }
      }

    return 0;
}
