#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int s[n],p[n],v[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i]>>p[i]>>v[i];
        }

        for(int i=0; i<n; i++)
        {
            s[i]++;
            int x = int(p[i]/s[i])*v[i];
            ans=max(ans,x);
        }
        cout << ans << endl;
    }
    return 0;
}
