bool isBoring(ll n)
{
    vector<ll> v;
    while(n>0)
    {
        v.push_back(n%10);
        n/=10;        
    }
    ll it=1;
    RREP(i,v.size()-1,-1)
    {
        if(v[i]%2!=it%2)
            return false;
        it++;
    }
    return true;
}
