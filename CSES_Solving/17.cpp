#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    set<int > m;
    REP(i,0,n)
    {
        cin>>arr[i];
        m.insert((arr[i]));
        
    }
    cout<<m.size()<<" "<<endl;
    
    
    return 0;
}