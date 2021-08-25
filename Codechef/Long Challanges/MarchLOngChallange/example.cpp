#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int arr[]={0,4,4,4,128, 256 ,16};
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ->";
        int  orn=arr[i];
        int andn=arr[i];
        int max=arr[i];
        for(int j=i;j<7;j++)
        {
            if(orn^andn>=max)
            {
                ans++;
            }
            orn|=arr[j+1];
            andn&=arr[j+1];
            if(max<arr[j+1])
              max=arr[j+1];
            
            cout<<arr[j]<<" ";

        }
        cout<<endl;
    }
    cout<<ans<<" "<<endl;
    return 0;
}