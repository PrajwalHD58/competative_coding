#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n-1];
    REP(i,0,n-1)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    REP(i,0,n)
    {
        if(arr[i]!=i+1)
        {
          cout<<i+1<<""<<endl;
          break;
        }
    }

        return 0;
}