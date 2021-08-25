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

// bool isContainfour(ll n)
// {
//     while(n>0)
//     {
//         if(n%10==4)
//         {
//             return false;
//         }
//         n/=10;
//     }
//     return true;
// }

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    
    cin>>t;
    ll T=t;
    while(t--)
     {
    //     ll n;
    //     cin>>n;
    //     ll a,b;
    //     REP(i,1,n)
    //     {
    //         if(isContainfour(i))
    //         {
    //             a=i;
    //             if(isContainfour(n-i))
    //             {
    //                 b=n-i;
    //                 break;
    //             }

    //         }
    //     }

        string s;
        cin>>s;
        string a="",b="";
        REP(i,0,s.size())
        {
            if(s[i]=='4')
            {
                a+='1';
                b+="3";
            }
            else
            {
                if(!a.empty())
                     a+='0';
                b+=s[i];                    
            }
        }
        cout<<"Case #"<<T-t<<": "<<a<<" "<<b<<endl;
    }
    return 0;
}