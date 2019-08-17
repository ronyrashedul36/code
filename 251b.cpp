#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,i,ans=0;
    cin>>n>>x;
    int c[n];
    for(i=0;i<n;i++) cin>>c[i];
    sort(c,c+n);
    for(i=0;i<n;i++) {
        ans+=c[i]*x;
        if(x>1) x--;
    }
    cout << ans << endl;
    return 0;
}
