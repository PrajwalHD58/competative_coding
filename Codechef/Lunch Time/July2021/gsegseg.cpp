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
bool compare(vector<pair<ll,ll>>a ,vector<pair<ll,ll>> b)
{
    REP(i,0,min(sz(a),sz(b)))
    {
        if(a[i].first>b[i].first)
            return true;
        if(a[i].first<b[i].first)
            return false;
    }
    if(sz(a)>sz(b))
        return false;
    return true;

}

    int main(){
        ll t,n,i;
        cin>>t;
        while(t--){
            cin>>n;
            vector<ll>v1(n), v2(n);
            for(i=0; i<n; i++){
                cin>>v1[i];
            }
            for(i=0; i<n; i++){
                cin>>v2[i];
            }
            vector<ll>v;
            ll c,mi=INT_MAX;
            for(i=0; i<n; i++){
                c=v1[0]+v2[i];
                c=c%n;
                mi=min(mi,c);
            }
            for(i=0; i<n; i++){
                c=v1[0]+v2[i];
                c=c%n;
                if(c==mi){
                    v.push_back(i);
                }
            }
            if(v.size()==1){
                ll a = v[0];
                ll p=0;
                for(ll j=a; j<n; j++,p++){
                    cout<<(v1[p]+v2[j])%n<<" ";
                }
                for(ll j=0; j<a; j++,p++){
                    cout<<(v1[p]+v2[j])%n<<" ";
                }
            }else{
                vector<ll>a1;
                vector<ll>a2;
                ll a = v[0],p=0;
                //cout<<a<<" <= \n";
                for(ll j=a; j<n; j++,p++){
                    //cout<<(v1[p]+v2[j])%n<<" ";
                    a1.push_back((v1[p]+v2[j])%n);
                }
                for(ll j=0; j<a; j++,p++){
                    //cout<<(v1[p]+v2[j])%n<<" ";
                    a1.push_back((v1[p]+v2[j])%n);
                }
                a=v[1];
                p=0;
                //cout<<a<<" <= \n";
                for(ll j=a; j<n; j++,p++){
                    //cout<<(v1[p]+v2[j])%n<<" ";
                    a2.push_back((v1[p]+v2[j])%n);
                }
                for(ll j=0; j<a; j++,p++){
                    //cout<<(v1[p]+v2[j])%n<<" ";
                    a2.push_back((v1[p]+v2[j])%n);
                }
                if(a1<a2){
                    for(i=0; i<n; i++){
                        cout<<a1[i]<<" ";
                    }
                }
                else{
                    for(i=0; i<n; i++){
                        cout<<a2[i]<<" ";
                    }
                }
            }
            cout<<"\n";
        }
    }

