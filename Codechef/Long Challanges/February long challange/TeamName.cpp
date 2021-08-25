#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
   //string D[6]={"prajwal","haward","gangubai","drajwal ","gajanan"};
   {
   int ans=0;
   int n;
   cin>>n;
   string D[n];
   for(int i=0;i<n;i++)
   {
       scanf("%s",D[i]);
   }
   sort(D,D+n);
   int rec=0;
   for(int  i=0;i<n-1;i++)
   {   
       for(int j=n-1;j>=0;j--)
       {
        string d="",e="";
         d=D[i];
         e=D[j];
          
         if(d[0]==e[0])
         { rec=j;
           break;
         } 
         char temp=d[0];
         d[0]=e[0];
         e[0]=temp;
        // cout<<d<<""<<endl;
         for(int k=0;k<n;k++)
         {
            if(D[k]==d || D[k]==e)
              break;
            else if(k==n-1)
            {
              if(d==e)
                ans+=1;
              else 
                ans+=2;
            }
         }

       } 

   }
    printf("%d \n",ans);
   }
    return 0;
}

