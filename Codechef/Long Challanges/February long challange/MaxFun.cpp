#include<bits/stdc++.h>
using namespace std;

 
int main()
{
    long long t;
    cin>>t;
    
    for(int i=0; i<t;i++)
    {
        
        int n;
        cin>>n;
        long long min=INT_FAST64_MAX;
        long long max=INT_FAST64_MIN;
        long long *arr=new long long[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(min>arr[i])
                min=arr[i];
            if(max<arr[i])
                 max=arr[i];
        }
        cout<<(max-min)*2<<""<<endl;
        
    }
    return 0;
}