#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int *arr=new int[n];
    int *arr2=new int[m];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,m)
    {
        cin>>arr2[i];
    }
    int ans=0;
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    for(int i=0,j=0;i<n;i++)
    {
        while(j<m && arr2[j]<arr[i]-k)
        {
            j++;
        }
        if(j<m && arr2[j]<=arr[i]+k)
        {
            ans++;
            j++;
        }
    }
    cout<<ans<<" "<<endl;
    return 0;
}