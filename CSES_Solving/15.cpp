#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;

int fact(int n)
{
    int ans=1;
    REP(i,1,n+1)
    {
        ans*=i;
    }
    return ans;
}

bool Check(string s,int start,int curr)
{
    REP(i,start,curr)
    {
        if(s[i]==s[curr])
        {
            return false;
        }
    }
    return true;
}

void print(string s,int l,int r)

{
    
    if(l==r)
    {
        cout<<s<<" "<<endl;
        return ;
    }
    else{
        REP(i,l,r+1)
        {
            if(Check(s,l,i))
            {
                if(s[i]!=s[l])
                swap(s[l],s[i]);
                print(s,l+1,r);
                swap(s[l],s[i]);
            }
        }
    }
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int size=0;
    char curr=s[0];
    int nans=0;
    int it=0;
    REP(i,1,n)
    {
        if(curr==s[i])
        {
            it++;
        }
        else{
            nans=nans*fact(it);
            it=1;
        }
    }
    size=fact(n)/nans;
    cout<<size<<" "<<endl;
    print(s,0,n-1);
    return 0;
}