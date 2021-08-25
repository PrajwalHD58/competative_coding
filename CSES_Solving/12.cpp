#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int main()
{ 
    string s;
    cin>>s;
    ll arr[26]={ 0 };
    ll temp=0;
    for(int i=0;i<s.length();i++)
    {  
      arr[(int)s[i]-65]++;
    }
    ll count1=0,count2=0;
    REP(i,0,26)
    {
      //cout<<arr[i]<<"  ";
        if(arr[i]%2==1)
        {
          count1++;
          temp=i;
          
        }
        else
          count2++;
    }
    ll n=(s.length()/2);
    if(count1>1)
      cout<<"NO SOLUTION"<<endl;
    else
    {
       
       ll n=s.size()/2;
       char op[n];
       ll k=0,odd=0;
        REP(i,0,26)
       {
         
           REP(j,0,arr[i]/2)
           {
             op[k]=char(i+65);
             k++;
           }
           if(arr[i%2==1])
           {
              odd=i;
           }
       }
       if(count1==1)
       {
         REP(i,0,n)
       {
         cout<<op[i]<<"";
       }
       cout<<char(temp+65)<<"";
       for(int i=n-1;i>=0;i--)
       {
         cout<<op[i]<<"";
       }
       }
       else{
         REP(i,0,n)
       {
         cout<<op[i]<<"";
       }
       //cout<<char(odd)<<"";
       for(int i=n-1;i>=0;i--)
       {
         cout<<op[i]<<"";
       }
       }
       cout<<endl;

    }
        
    
    
    
    return 0;
}