#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    
    set<ll> s;
    s.insert(7);
    s.insert(4);
    s.insert(6);
    auto it=s.upper_bound(4);
    cout<<&*it<<" "<<endl;
    return 0;
}