#include<bits/stdc++.h>
using namespace std;
#define Limit 1000000 

bool isPrime(long long l)
{
   if(l==2)
     return true;
   for(long long i=2;i*i<=l;i++ )
   {
      if(l%i==0)
      {
        return false;
        break;
      }
   }
   return true;
}
int main()
{   long long t;
    scanf("%lld",&t);
    long long dp[Limit];
       dp[0]==0;
       dp[1]==0;
       
       for(long long j=2;j<=Limit;j++)
       {
          if(isPrime(j))
            dp[j]=dp[j-1]+1;
          else 
            dp[j]=dp[j-1];
       }
    while(t--)
    {
       long long  x,y,z;
       scanf("%lld%lld",&x,&y);
       
       z=dp[x];
       if(z<=y)
         printf("Chef\n") ;
       else
         printf("Divyam\n") ;

    } 
    return 0;
}