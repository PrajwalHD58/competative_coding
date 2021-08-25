#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> v;
    REP(i,0,n)
    {
        ll data;
        cin>>data;
        v.push_back(make_pair(data,i+1));
    }
    sort(v.begin(),v.end());
    REP(i,0,n-1)
    {
        REP(j,i+1,n)
        {
            ll sum=0;
            sum=v[i].first+v[j].first;
            if(sum==x)
            {
                cout<<" "<<v[i].second<<" "<<v[j].second<<endl;
                return 0;
            }
            else if(sum>x)
            {
                break;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}