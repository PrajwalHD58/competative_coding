#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
typedef vector<int> vi;
typedef pair<int, int> pii; 
typedef pair<int , pii> piii ; 
typedef unsigned long long ull ;
const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ; 
const ll f = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

string toBinary(ll n)
{
    string r;
    if(n==0)
    {
        r="0";
    }
    else
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

bool isSubSequence(string str1, string str2,int m, int n)
{
     
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}
 
void solve(string *dp)
{
    string s;
    cin>>s;
    ll n=(ll)s.size();
    ll n1=0,n0=0;
    REP(i,0,n)
    {
        if(s[i]=='0')
           n0++;
        else
           n1++;
    } 
    string midans=""; 
    if(n0<=n1)
    {
        REP(i,0,n0+1)
        {
            midans="0"+midans;
        }
        midans="1"+midans;
    }
    else{
        REP(i,0,n1+1)
        {
            midans="1"+midans;
        }
    } 
    string ans;
    ll it=0;
    while(ans!=midans)
    {
        ans=dp[it] ;
        ll t1=ans.size();
        if(!isSubSequence(ans,s,t1,n))
        {
            break;
        }
        it++;
    }
    cout<<ans<<" "<<endl;  
}

int main()
{
    ios::sync_with_stdio(0);    
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin>>t;
    string *dp=new string[N];
    REP(i,0,N) 
    {
        dp[i]=toBinary(i);
    }
    while(t--)
    {
        solve(dp);
    }
    return 0;
}