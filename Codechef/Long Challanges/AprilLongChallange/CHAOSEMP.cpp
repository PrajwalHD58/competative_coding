#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int D, Q;

string ask1(ll a,ll b, ll c){
    string res;
    cout << (a) << ' ' << (b) << ' ' << (c)<<' '<<endl;
    cout << flush;
    cin >> res;
	if(res == "FAILED") exit(0);
	return res;
}
string ask2(ll a,ll b,ll c,ll d,ll e)
{
    string res;
    cout << (a) << ' ' << b << ' ' << c << ' '<<d <<' '<<e <<' '<<endl;
	cout << flush;
	cin >> res;
    if(res == "FAILED") exit(0);
	return res;
}
void solve(){
	ll n=1,x=0,y=0,x1=0,y1=0,x2=0,y2=0;
    string res="";
    ll  count=0; 
    while(true)
    {
        if(count>Q)
        exit(0);
        if(n==1)
        res=ask1(n,x,y);
        else if(n==2)
        res=ask2(n,x1,y1,x2,y2);
        if(res=="O")
        {
            return;
        }
        else if(res=="PY")
        {
            n=2;
            x1=-2e18;
            y1=-2e18;
            x2=x;
            y2=y;
        }
        else if(res=="NY")
        {
            n=2;
            x1=x;
            y1=-2e18;
            x2=2e18;
            y2=y;
        }
        else if(res=="XP")
        {
            n=2;
            x1=x;
            y1=-2e18;
            x2=2e18;
            y2=y;
        }
        else if(res=="XN")
        {
            n=2;
            x1=x;
            y1=y;
            x2=2e18;
            y2=2e18;
        }
        else if(res=="PP")
        {
            n=1;
            x=(x-2e18)/2;
            y=(y-2e18)/2;
            
        }
        else if(res=="PN")
        {
            n=1;
            x=(x+2e18)/2;
            y=(y-2e18)/2;
            
        }
        else if(res=="NP")
        {
            n=1;
            x=(x-2e18)/2;
            y=(y+2e18)/2;
            
        }
        else if(res=="NN")
        {
            n=1;
            x=(x+2e18)/2;
            y=(y+2e18)/2;
        }
        else if(res=="IN")
        {
            n=1;
            x=(x1+x2)/2;
            y=(y1+y2)/2;
        }
        else if(res=="OUT")
        {
            n=1;
            x=(x1+x2)/2;
            y=(y1+y2)/2;
        }
        count++;
    }
	cout << flush;
} 
 
int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T >> Q >> D;
	while(T--) solve();
}