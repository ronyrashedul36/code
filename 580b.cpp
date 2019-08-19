#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,z,p,ne,ans;
    ans=z=p=ne=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]>0) p++;
        else if(a[i]<0) ne++;
        else z++;
    }
    ///cout << p << " " << ne << " " << z << endl;
    if(ne%2!=0 && z) {
        ans++;
        z--;
    } else if(ne%2!=0 && z==0){
      ans+=2;
    }
    ///cout << ans << endl;
    for(i=0;i<n;i++) {
        if(a[i]<0) ans=ans+(abs(a[i])-1);
        else if(a[i] == 0 && z) ans++,z--;
        else if(a[i]) ans=ans+(a[i]-1);
    }
    cout << ans << endl;
    return 0;
}
