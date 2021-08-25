#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n,m;
    cin>>n>>m;
    set<int> arr1;
    int arr2[m];
    REP(i,0,n)
    {
        int data;
        cin>>data;
        arr1.insert(data);
    }
   
    REP(i,0,m)
    {
        cin>>arr2[i];
    }
    REP(i,0,m)
    {
        auto it=arr1.lower_bound(arr2[i]+1);

        if(it==arr1.begin())
           cout<<"-1"<<endl;
        else{
            --it;
            cout<<*it<<" "<<endl;
            arr1.erase(it);
        }
    }
    return 0;
}