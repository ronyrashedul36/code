#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,ans=0;
    cin>>n>>x;
    ll a[n];
    ll y=1;
    for(ll i=0;i<n;i++) {
        ll l,r;
        cin>>l>>r;
        ans+=r-l+1;
        while(y+x<=l) {
            y+=x;
        }

        ans+=l-y;
        y=r+1;
    }
    cout << ans << endl;
    return 0;
}
