#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;
ll calc(ll n)
{
    return (n*n*(n*n-1)-8-24-(n-4)*16-16-24*(n-4)-8*(n-4)*(n-4));
}
int main()
{
    ll n;
    cin>>n;
    REP(i,1,n+1)
    {
        cout<<calc(i)/2<<""<<endl;
    }
    return 0;
}