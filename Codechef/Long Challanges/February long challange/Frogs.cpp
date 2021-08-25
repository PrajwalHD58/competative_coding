#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *w=new int[n];
        int *l=new int[n];
        int *in=new int[n];
        vector< int > sa;
        for (int i = 0; i < n; i++)
        {
            cin>>w[i];
            sa.push_back(w[i]);
            in[i]=i+1;
        }
        for (int i = 0; i < n; i++)
        {
           cin>>l[i]; 
        }
        int ans=0;
        sort(w,w+n);
        for(int i=1;i<n;i++)
        {   int a=0,b=0;
            for(int j=0;j<n;j++)
            {
               if(sa[j]==w[i])
               {
                   a=j;
               }
               if(sa[j]==w[i-1])
               {
                b=j;
               }
               
            }
            while (in[b]>=in[a])
            {
                in[a]+=l[a];
                ans++;
            }
            
        }
        
         cout<<ans<<""<<endl; 
       
        
    }
    return 0;
}