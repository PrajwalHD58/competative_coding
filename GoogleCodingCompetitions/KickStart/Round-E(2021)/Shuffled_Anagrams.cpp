

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
#define google(T) cout<<"Case #"<<T<<": ";
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

bool compare(pii a,pii b)
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second>b.second;
}
void solve()
{
    string s;
    cin>>s;
    vector<pii> v(26);
    REP(i,0,26)
    {
        v[i]=mp(i,0);
    }
    REP(i,0,sz(s))
    {
        
        v[(int)s[i]-97].second++;
    }
    vector<bool> isCheked(sz(s),false);
    string S=s;
    sort(s.begin(),s.end());
    sort(v.begin(),v.end(),compare);
    vector<pair<int,vector<char>>> vd(26);
    bool flag=false;

    REP(i,0,26)
    {
        vd[i].first=-1;
    }
    REP(j,0,26)
    {
        char c=(char)(v[j].first+97);
        
        REP(i,0,sz(s))
        {
            if(s[i]!=c && (isCheked[i]==false) && (v[j].second>0))
            {
                vd[(int)s[i]-97].second.push_back(c);
                v[j].second--;
                isCheked[i]=true;
            }
        }
        if(v[j].second>0)
        {
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        REP(i,0,sz(S))
        {
            vd[(int)S[i]-97].first++;
            S[i]=vd[(int)S[i]-97].second[vd[(int)S[i]-97].first];
        }
        cout<<S<<" \n";
        return;
    }

    vector<pair<int,vector<char>>> vd2(26);
    vector<bool> isCheked2(sz(s),false);
    reverse(s.begin(),s.end());

    REP(i,0,26)
    {
        vd2[i].first=-1;
    }
    REP(i,0,26)
    {
        v[i]=mp(i,0);
    }
    REP(i,0,sz(s))
    {
        
        v[(int)s[i]-97].second++;
    }
    REP(j,0,26)
    {
        char c=(char)(v[j].first+97);
        REP(i,0,sz(s))
        {
            if(s[i]!=c && (isCheked2[i]==false) && (v[j].second>0))
            {
                vd2[(int)s[i]-97].second.push_back(c);
                v[j].second--;
                isCheked2[i]=true;
            }
        }
        if(v[j].second>0)
        {
            cout<<"IMPOSSIBLE \n";
            return;
        }
       
    }
    REP(i,0,sz(S))
    {
        vd2[(int)S[i]-97].first++;
        S[i]=vd2[(int)S[i]-97].second[vd2[(int)S[i]-97].first];
    }
    cout<<S<<" \n";
    return;

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
    google(T);
    solve();
    T++;
}
return 0;
}