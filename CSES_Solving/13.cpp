#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(double i=a;i<b;i++)
typedef long long ll;

int main()
{
    float n;
    cin>>n;
    vector<string> v;
    REP(i,0,pow(2,n))
    {
        
        bitset<32> r(i);
        string s=r.to_string();
        v.push_back(s.substr(32-n));
    }
    for(int i=0;i<n/2;i++)
    {
        if(i%2==1)
        {
            cout<<v[i]<<" "<<endl;
            cout<<v[i+1]<<" "<<endl;

        }
        else{
            cout<<v[i]<<" "<<endl;
            cout<<v[i+1]<<" "<<endl;
        }

    }
    return 0;
}