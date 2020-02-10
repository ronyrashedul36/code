#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        int a,ans=0,i;
        cin>>a;

        for( i=1; i*i<a; i++)
        {
            if(a%i==0)
                ans+=i+a/i;
        }
        if(i*i==a)
            ans+=i;
        ans-=a;
        cout << ans << endl;
    }
    return 0;
}
