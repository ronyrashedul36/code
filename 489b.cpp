#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,ans=0;;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    i=0,j=0;
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=1 || (a[i]-b[j]) == 0)
        {
            ans++;
            i++;
            j++;
        }
        else if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;

    }
    cout << ans << endl;
    return 0;
}
