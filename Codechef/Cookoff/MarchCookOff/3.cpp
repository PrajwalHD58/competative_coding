#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void solve() {
    int Number , Guess, Nguess=0;
     
    
 do{
  
    srand(time(0));
    Number=rand()+1;

    scanf("%d" ,&Guess);
       fflush(stdout);
       if(Guess==Number ){
       printf ("Lower number please\n");
       }
       else if(Guess<Number){
           printf ("Higher number please\n");
            }
        else{
        printf ("You guessed in %d attempts\n",Nguess );
        }
       
      Nguess++;
      }
  while(Nguess<2000);
}

int main()
{
    return 0;
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}