#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,i=1,d=240,ans=0,sum=0;
    cin>>n>>l;
    sum+=l;
    for(i=1;i<=n ; i++)
    {
        sum+=i*5;
        if(d-sum>=0) ans++;
        else break;
    }
    cout << ans;

    return 0;
}
