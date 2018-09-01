#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    int i=1;
    while(a>=1 && b>=1)
    {
        ans+=a*b*i*i;
        a--;
        b--;
        i++;
    }
    cout<<ans<<endl;
    ans=0;
    }
    return 0;
}
