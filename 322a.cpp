#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=min(a,b);
    if(a>b)
    {
        a-=x;
        y=a/2;
    }
    else
    {
        b-=x;
        y=b/2;
    }
    cout << x << " " << y << endl;
    return 0;
}
