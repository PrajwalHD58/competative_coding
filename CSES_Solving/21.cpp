#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<pair<int ,int>> vect;
    REP(i,0,n)
    {
        int d1, d2;
        cin>>d1>>d2;
        vect.push_back(make_pair(d1,d2));
    }

    sort(vect.begin(),vect.end());

    int ans=1;
    int temp=vect[0].second;
    int a=1;
    REP(i,1,n)
    {
        if(vect[i].first<=temp)
        {
            a++;
            temp=min(vect[i].second,temp);
        }
        else
        {
           
            temp=vect[i].second;
            ans=max(a,ans);
            a=1;
            
        }
     }
    cout<<ans<<" "<<endl;
    return 0; 
}
