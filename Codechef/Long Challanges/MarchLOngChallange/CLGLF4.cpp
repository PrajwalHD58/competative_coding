#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define popb pop_back
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

struct items
{
    ll i1;
    ll i2;
    ll i3;
    ll i4;
    ll i5;
};

ll min(ll a,ll d)
{
    if(a<d)
      return a;
    else
      return d;
}

items creation(ll e,ll g,ll a,ll b,ll c)
{
    items ans;
    memset(&ans,0,sizeof(items));
    if(e<g)
    {
        ans.i3=2*e;
        ans.i2=(g-e);
        ans.i1=0;
        ans.i4=ans.i1/2+ans.i2/3+ans.i3/2;
        ans.i5=(ans.i1/2)*a+(ans.i2/3)*b+(ans.i3/2)*c;
    }
    else{
        ans.i3=2*g;
        ans.i2=0;
        ans.i1=(e-g);
        ans.i4=ans.i1/2+ans.i2/3+ans.i3/2;
        ans.i5=(ans.i1/2)*a+(ans.i2/3)*b+(ans.i3/2)*c;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    //ll T=t;
    while(t--)
    {
         ll n,e,h,a,b,c,num,mp=0;
        cin>>n>>e>>h>>a>>b>>c;
        items list;
        list=creation(e,h,a,b,c);
        cout<<list.i4<<""<<endl; 
        cout<<list.i5<<""<<endl;
        if(list.i4>=n)
        {
            if(list.i4==n)
            {
                mp=list.i5;
            }
            else
            {
                ll diff=list.i3;
                for(ll i=0;i<diff;i+=2)
                {
                    list.i1+=list.i3-i;
                    list.i2+=list.i3-i;
                    list.i3=i;
                    if(list.i4==n)
                    {
                        ll minp=0;
                        minp=list.i5;
                        if(minp<mp)
                        {
                            mp=minp;
                        }
                    } 
                }
            }
        }
        else{
            mp=-1;
        }
        cout<<mp<<" "<<endl;
    }
    return 0;
}