#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,i,ans=0;
    cin>>n>>x;
    ll c[n];
    for(i=0;i<n;i++) cin>>c[i];
    for(i=0;i<n;i++) {
        if(i==0) {
            ans+=c[i];
            continue;
        }
        else if(ans+c[i]<=x) {
            ans+=c[i]+10;
            continue;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
    if(ans>x) {
        cout << -1 << endl;
        return 0;
    }
    ll d=x-ans;
    cout << (n-1)*2+d/5 << endl;
    return 0;
}

