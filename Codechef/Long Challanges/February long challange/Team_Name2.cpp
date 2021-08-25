#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<char> a,vector<char> b)
{
    set<char> s(a.begin(),a.end());

    ll temp=0;
    for(auto x: b)
    {
        if(s.find(x) != s.end())
         temp++;
    }
    return temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        map<string,vector<char>>m ;
        string s;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            if(s.length() > 0)
            {
                m[s.substr(1)].push_back(s[0]);
            }

        }
        ll ans=0;
        for(auto i: m)
        {
             for ( auto j:m)
             {
                 if(i.first != j.first)
                 {
                     ll temp=solve(i.second,j.second);
                     ans+=(i.second.size()-temp)*(j.second.size()-temp);
                 }
             }
             
        }     
        cout<<ans<<""<<endl;   
        
    }
    return 0;
}