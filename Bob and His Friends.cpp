#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c,ans=-1;
        cin>>n>>a>>b>>c;
        ll ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        for(int i=0; i<n; i++)
        {
            ll x=abs(b-ar[i])+abs(ar[i]-a)+c;

            if(ans>x || ans==-1)
                ans=x;
        }
        cout << ans << endl;
    }
    return 0;
}
