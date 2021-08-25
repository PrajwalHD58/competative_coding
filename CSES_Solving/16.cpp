#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    REP(i,0,n)
    {
        int data;
        cin>>data;
        v.push_back(data);
    }
    ll sum=0;
    REP(i,0,n)
    {
        sum+=v[i];
    }
    ll s=0;
    for(int i=0;i<(1<<n);i++)
    {
        ll ss=0;
        REP(j,0,n)
        {
            if(i>>j&1)
            {
                ss+=v[j];
            }
        }
        if(ss<=sum/2)
        {
            s=max(ss,s);
        }
    }
    cout<<sum-2*s<<" "<<endl;

    return 0;
}