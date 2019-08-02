#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    bool d=true;
    while(a)
    {
        ans=a+2*a+4*a;
        if(2*a<=b && 4*a<=c)
        {
            d=false;
            cout << ans << endl;
            break;
        }
        a--;
    }
    if(d)
        cout << 0 << endl;
    return 0;
}
