#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,cnt,ans;
    cnt=ans=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i],cnt+=a[i];
    cin>>m;
    int q;
    sort(a,a+n,greater<long long int>());
    for(i=0;i<m;i++){
        cin>>q;
        ans = cnt - a[q-1];
        cout << ans << endl;
    }
    return 0;
}
