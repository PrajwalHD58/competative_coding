#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll ans=0,rep=0;
    REP(i,0,s.length())
    {
        if(s[i]==s[i+1])
        {
            rep+=1;
        }
        else  
        {
            if(ans<=rep+1)
            {
                ans=rep+1;
            }
            rep=0;
        }
    }
    cout<<ans<<""<<endl;
    return 0;
}