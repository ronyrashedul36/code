#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        ll c[n+1],h[n+1],i,j,cnt=0,l[n+1]= {0};
        c[0]=h[0]=0;
        for(i=1; i<=n; i++)
            cin>>c[i];
        for(i=1; i<=n; i++)
            cin>>h[i];
        for(i=1; i<=n; i++)
        {
            ll x=i-c[i];
            if(x<1)
                x=1;
            ll y=i+c[i];
            if(y>n)
                y=n;
            for(j=x; j<=y; j++)
            {
                l[j]++;
            }
        }
        bool b=true;
        map<ll,ll>ma;
        map<ll,ll>::iterator it;
        for(i=1; i<=n; i++)
            ma[l[i]]++;
        ///for(it=ma.begin();it!=ma.end();it++) cout << it->second << " ";
        ///cout << endl;
        for(i=1; i<=n; i++)
        {
            if(ma[h[i]])
            {
                ma[h[i]]--;
            }
            else
            {
                b=false;
                cout << "NO";
                break;
            }
        }
        if(b)
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
