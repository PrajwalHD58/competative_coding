#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll a,b;
      cin>>a>>b;
     // coinPiles(a,b);
      if((a+b)%3==0 && 2*a>=b && 2*b>=a)
        cout<<"YES"<<endl;
      else 
        cout<<"NO"<<endl;
    }
    return 0;
}