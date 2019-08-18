#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,ans=0;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n;)
    {
        if(a[i]<=k)
        {
            ans++;
            i++;
            continue;
        }
        if(a[n-1]<=k)
        {
            ans++;
            n--;
            continue;
        }
        break;

    }
    cout << ans << endl;
    return 0;
}
