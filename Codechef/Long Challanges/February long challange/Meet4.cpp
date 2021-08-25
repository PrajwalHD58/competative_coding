#include<bits/stdc++.h>
using namespace std;

int conv(string a)
{
    string l;
     for (int i = 0; i <5; )
     {
         
         if(a[i]==':')
           { i++;}
        
         else
        {
            l+=a[i];
            i++;
        }
            
     }
          int r=0;
          stringstream geek(l); 
          geek >> r; 
        
        if(a[5]=='A')
        {
            if(a[0]=='1' && a[1]=='2')
            {
                r=r-1200;
            }
        }
        else
        {
            if(a[0]=='0')
                r=r+1200;
            else if(a[0]=='1')
               if(a[1]=='0' || a[1]=='1')
                  r=r+1200;
        }
        return r;
       
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
     string p="";
     char c;
     for(int i=0;i<7;i++)
     {
         cin>>c;
         p.push_back(c);
     }
     
     int n;
     cin>>n;
     string arr[n][2];
     int ans[n];
     for (int i = 0; i < n; i++)
     {
        for(int j=0;j<2;j++)
        {
            arr[i][j]="";
            char q;
          for(int  k=0; k<7;k++)
          {
              cin>>q;
              arr[i][j].push_back(q);
          }
     
        }
      }
          int P=conv(p);
          
          for(int i=0;i<n;i++)
          {
            int A,B;
            A=conv(arr[i][0]);
            B=conv(arr[i][1]); 
           
            if(B>=A)
            {
             if(P<=B && P>=A)
                ans[i]=1;
             else 
                ans[i]=0; 
            }
            else if(B<=A)
            {
                if(P>=A)
                  ans[i]=1;
                else
                  ans[i]=0;
            }
               
           }
            for(int i=0;i<n; i++)
            {
                 cout<<ans[i]<<"";
            }
         

     cout<<endl;
     
    }
  
return 0;
}