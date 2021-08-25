#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<=b;i+=2)
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    if(n==1)
      cout<<"1"<<endl;
    else if(n==2 || n==3)
      cout<<"NO SOLUTION"<<endl;
    else{
        REP(i,2,n)
        {
            cout<<i<<"  ";
        }
        REP(i,1,n)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}