#include<bits/stdc++.h>
#define ll long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=n;
        int i=10;
        int x=1;
        while(i<=n)
        {
            ans+=x*(n/10);
            int d = n/10;
            n=d+n%10;
            i*=10;
        }
        while(n>=10)
        {
            ans+=n/10;
             n = n/10+n%10;

        }

        //cout << "n " << n << endl;
        cout << ans << endl;
    }
    return 0;
}
