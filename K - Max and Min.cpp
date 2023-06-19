#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n, m, l;
    cin >> n >> m >> l;
    if(n<=m && n<=l)
    {
        cout<< n ;
    }
    else if(m<=n && m<=l)
    {
        cout<< m ;
    }
    else if(l<=n && l<=m)
    {
        cout<< l ;
    }

    cout<< " ";

    if(n>=m && n>=l)
    {
        cout<< n ;
    }
    else if(m>=n && m>=l)
    {
        cout<< m ;
    }
    else if(l>=n && l>=m)
    {
        cout<< l ;
    }
    return 0;
}

