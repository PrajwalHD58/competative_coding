#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n,x;
    cin>>n>>x;
    int *p=new int[n];
    REP(i,0,n)
    {
        cin>>p[i];
    }
    sort(p,p+n);
    int ans=0;
    for(int i=n-1,j=0;i>=j;i--)
    {
        if((p[i]+p[j])<=x)
        {
            ans++;
            j++;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<" "<<endl;
    return 0;
}