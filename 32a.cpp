#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,ans=0,i,j;
    cin>>n>>d;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        for(j=0;j<n && i!=j;j++) {
            if(abs(a[i]-a[j])<=d) {
                ans+=2;
            }

        }
    }
    cout << ans << endl;
    return 0;
}
