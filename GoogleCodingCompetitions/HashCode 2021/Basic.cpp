#include<bits/stdc++.h>
#include <fstream>
#include <cstdlib> 
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define mp make_pair
#define pb push_back
#define pp pop_back

struct path
{
    int b;
    int e;
    string pn;
    int l;

};

struct cars
{
    int p;
    string *arr=new string[p];
};



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   
   
   ofstream outdata; 
   outdata.open("1_ans.txt "); 
   if( !outdata )
   {
     cerr << "Error: file could not be opened" << endl;
     exit(1);
   }
   ll d,i,s,v,f;
   cin>>d>>i>>s>>v>>f;
   vector<path> pnp;
   REP(i,0,s)
   {
       int s1,s2,s3;
       string s4;
       cin>>s1>>s2;
       getline(cin,s4);
       cin>>s3;
       path temp;
       temp.b=s1;
       temp.e=s2;
       temp.pn=s4;
       temp.l=s3;
       pnp.push_back(temp);
   }
   vector <cars> ci;
   REP(i,0,v)
   {
       cars c;
       cin>>c.p;
       REP(j,0,c.p)
       {
           cin>>c.arr[j];
       }
       ci.push_back(c);
    }
    //solution obj;
    ll nt=0;
    REP(i,0,s)
    {
      outdata<<pnp[i].pn<<" "<<endl;
    }
   
    
   
   
    return 0;
}