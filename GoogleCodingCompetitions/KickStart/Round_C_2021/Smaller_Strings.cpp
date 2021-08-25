#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define pb push_back
#define popb pop_back
#define google(T) cout<<"Case #"<<T<<": ";
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int , pii> piii ;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
vector<string> v;

bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.size()-1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
           
            return false;
        }
    }
    return true;
}

void printAllKLengthRec(char set[], string prefix,
                                    int n, int k)
{
     
    // Base case: k is 0,
    // print prefix
    if (k == 0)
    {
        v.push_back(prefix) ;
        return;
    }
 
    // One by one add all characters
    // from set and recursively
    // call for k equals to k-1
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
         
        // Next character of input added
        newPrefix = prefix + set[i];
         
        // k is decreased, because
        // we have added a new character
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
 
}
 
void printAllKLength(char set[], int k,int n)
{
    printAllKLengthRec(set, "", n, k);
}
 
// Driver Code
int main()
{

    int t,T=1;
    cin>>t;

    while(t--)
    {   
      
        int ans=0; 
        char set0[]= {'a'};
        char set1[] = {'a', 'b'};
        char set2[] = {'a', 'b', 'c'};
        char set3[] = {'a', 'b', 'c', 'd'};
        char set4[] = {'a', 'b', 'c', 'd','e'};
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1)
        {
            printAllKLength(set0,  n,1);
        }
        if(k==2)
        {
            printAllKLength(set1,  n,2);
        }
        if(k==3)
        {
            printAllKLength(set2,  n,3);
        }
        if(k==4)
        {
            printAllKLength(set3,n, 4);
        }
        if(k==5)
        {
            printAllKLength(set4,n, 5);
        }
        REP(i,0,v.size())
        {
            //cout<<v[i]<<" ";
            if(v[i]<s && isPalindrome(v[i]))
                ans++;
        }
        google(T);
        cout<<ans<<"\n";
        T++;
        v.clear();
    }
}
 