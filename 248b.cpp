#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll m,i,j,ans,n,cnt,t,l,r;
    ans=cnt=0;

    cin>>n;
    ll a[n+1],b[n+1];
    a[0]=b[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=1; i<=n; i++)
    {
        a[i]+=a[i-1];
    }
    sort(b+1,b+n+1);
    for(i=1; i<=n; i++)
    {
        b[i]+=b[i-1];
    }
    cin>>m;
    while(m--)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            cout << a[r]-a[l-1] << endl;
        }
        else
        {
            ///cout << r << " " << l << endl;
            cout << b[r]-b[l-1] << endl;
        }
    }
    return 0;
}
