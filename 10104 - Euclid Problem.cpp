#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b, int &x, int &y)
{
    int x1,y1,d;
    if( a == 0)
    {
        x=0;
        y=1;
        return b;
    }
    d = gcd(b%a, a, x1, y1);
    x = y1-(b/a)*x1;
    y = x1;
    return d;
}

int main()
{
    int a,b,x,y;

    while(cin>>a>>b)
    {
        int g = gcd(a,b,x,y);
        if(a==b)
        {
            x=0;
            y=1;
        }
        cout << x << " " << y << " " << g << endl;
    }
    return 0;
}
