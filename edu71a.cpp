#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ans,cnt,k,m,n;
    ans=cnt=0;
    int t;
    cin>>t;
    while(t--)
    {
        ans=cnt=0;
        int b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;
        if(h>c)
        {
            int x=min(b/2,p);
            ans+=(h*x);
            p-=x;
            b-=2*x;
            if(b)
            {
                ans+=c*min(b/2,c);
            }
        }
        else
        {
            int x=min(b/2,f);
            ans+=(c*x);
            f-=x;
            b-=2*x;
            if(b)
            {
                ans+=h*min(b/2,p);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
