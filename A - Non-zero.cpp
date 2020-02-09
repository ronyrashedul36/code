#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,sum=0,mul=1,z=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            mul*=a[i];
            if(a[i]==0)
                z++;
        }
        if(z!=0)
            mul=0;
        if(sum && mul)
        {
            cout << ans << endl;
            continue;
        }
        sum=0;
        if(z>0)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]==0)
                    a[i]++,ans++;
                sum+=a[i];
            }
 
        }
        if(sum==0)
        {
            ans++;
        }
        cout << ans << endl;
    }
 
    return 0;
}
