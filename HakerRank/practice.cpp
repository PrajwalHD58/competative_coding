#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,ans=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;)
    {
        if(i==n-1)
            break;
        
        i+=2;
        if(arr[i]==1)
          i--;
        ans++;
        //cout<<i<<" ";
    }
    cout<<ans<<" ";
}
