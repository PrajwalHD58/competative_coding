
    REP(i,0,n)
    {
        ll inp;
        cin>>inp;
        w.push_back(inp);
    }
    ll k;
    cin>>k;
    vector<ll> u(k);
    REP(i,0,k)
    {
        ll inp;
        cin>>inp;
        u.push_back(inp);
    }
    ll m;
    cin>>m;
    vector<vector<ll>> v1,v2;
    REP(i,0,m)
    {
        ll t1,t2;
        cin>>t1>>t2;
        //v1[t1].push_back(t2);
        // v2[t2].push_back(t1);
    }
    cout<<"0\n";