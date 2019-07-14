#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,ma=0,mi=0;
    cin>>n>>m;
    if(m == 1)
    {
        n--;
        ma = (n*(n+1))/2;
        mi = ma;
    }
    else if(abs(m-n) == 1)
    {
        mi=1;
        ma=1;
    }
    else
    {
        ll x = n;
        ll d=x/m;
        ll r = x%m;

        if(r)
        {
            mi += (r)*((d*(d+1))/2);
            d--;
            mi += (m-r)*((d*(d+1))/2);
        }
        else
        {
            d--;
            mi += (m)*((d*(d+1))/2);
        }
        n-=(m-1);
        n--;
        ma+=(n*(n+1))/2;

    }
    cout << mi << " " << ma << endl;
    return 0;
}
