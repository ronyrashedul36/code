
#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans=0;
        scanf("%d%d", &a,&b);
        ll g = __gcd(a,b);
        for(ll i=1; i*i<=g; i++)
        {
            if((i*i) == g)
                ans++;
            else if(g%i == 0)
                ans+=2;
        }
        printf("%d\n", ans);
    }
    return 0;
}
