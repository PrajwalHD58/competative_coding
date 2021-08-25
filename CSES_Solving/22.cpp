#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    REP(i,0,n)
    {
        int data1,data2,data3;
        cin>>data1;
        cin>>data2;
        v.push_back(make_pair(data1,data2));
    }
    ll ans=0,temp=1;
    sort(v.begin(),v.end());
    REP(i,0,n-1)
    {
        for(ll j=n-1;j>i;j--)
        {
            if(v[i].second<=v[j].first)
            {
                temp++;
            }
            else{
                break;
            }
        }
        ans=max(ans,temp);
        temp=1;
       
    }
    cout<<ans<<" "<<endl;
    return 0;
}