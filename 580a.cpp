#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,n,j,m,k,ans=0;
    cin>>n;
    ll a[n];
    map<ll,ll>ma;
    for(i=0;i<n;i++) cin>>a[i],ma[a[i]]++;
    cin>>m;
    ll b[m];
    for(i=0;i<m;i++) cin>>b[i],ma[b[i]]++;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) {
            if(a[i]+b[j] != ma[a[i]+b[j]] && ma[a[i]+b[j]]<1) {
                cout << a[i]<< " " <<b[j]<<endl;
                return 0;
            }
        }
    }

    return 0;
}
