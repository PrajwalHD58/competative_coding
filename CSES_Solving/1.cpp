#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;
void recursive(ll n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    else if(n%2==1)
    {
        cout<<n<<""<<endl;
        recursive((n*3)+1);
    }
    else if(n%2==0)
    {
        cout<<n<<""<<endl;
        recursive(n/2);
    }
}

int main()
{
    ll n;
    cin>>n;
    recursive(n);
    return 0;
}