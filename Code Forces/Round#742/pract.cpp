#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    for(int i=1;i<100;i++)
    {
        ans=ans^i;
        cout<<ans<<" \n";
    }
    cout<<ans<<" \n";
return 0;
}