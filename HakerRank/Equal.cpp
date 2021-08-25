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
#define D(a) cout<<#a<<'[ '<<a<<' ]'<<endl;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;

int numOps(int n) {
	int result = 0;
	result += n/5;
	n %= 5;
	result += n/2;
	n %= 2;
	result += n;
	return result;
}

void solve()
{
    int N;
    cin>>N;
		int input, smallestNum = INT_MAX;
		// Read input, find the smallest #
		vector<int> vec;
		for(int i = 0; i < N; i++) {
			cin>>input;
			vec.push_back(input);
			if(input < smallestNum) {
				smallestNum = input;
			}
		}
		// Iterate over the list and try reducing everyone's candies
		// down to {min, min-1, min-2, min-3, min-4}. Take the minimum 
		// answer.
		int answer = INT_MAX;
		for(int i = 0; i < 4; i++) {
			int tmpAnswer = 0;
			for(int j = 0; j < N; j++) {
				int minOps = INT_MAX;
				tmpAnswer += numOps(vec[j]-smallestNum+i);
			}
			if(tmpAnswer < answer) {
				answer = tmpAnswer;
			}
		}
		cout<<answer<<"\n";
    

}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);
ll t;
ll T=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}