#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,a,b) for(long long i=a;i<b;i++)
#define RREP(i,a,b) for(long long i=a;i>b;i--)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define google(T) printf('Case #%d: ', T)
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> piii ;

#define TRACE(ARG) cout<<#ARG<<endl;ARG
#define D(a) cout<<#a<<"[ "<<a<<" ]"<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

bool prime[100];

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!prime[(s[i] - '0') * 10 + (s[j] - '0')]) {
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }
    exit(42);
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
for (int i = 2; i < 100; i++) {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime[i] = false;
            }
        }
    }

ll t;
ll T=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}