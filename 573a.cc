#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int r = n%4;
    if(r == 1)
    {
        cout << 0 << " " << 'A' << endl;
        return 0;
    }
    else
    {
        n++;
        r=n%4;
        if(r == 1)
        {
            cout << 1 << " " << 'A' << endl;
            return 0;
        }
        int x=r;
        n++;
        r=n%4;
        int ma=max(x,r);
        if(ma == 1 && x == ma)
        {
            cout << 1 << " " << 'A' << endl;
            return 0;
        }
        else if (ma == 3 && x == ma)
        {
            cout << 1 << " " << 'B' << endl;
            return 0;
        }
        else if(ma == 2 && x == ma )
        {
            cout << 1 << " " << 'C' << endl;
            return 0;
        }
        else if(ma == 0 && x == ma)
        {
            cout << 1 << " " << 'D' << endl;
            return 0;
        }

        if(ma == 1 )
        {
            cout << 2 << " " << 'A' << endl;
            return 0;
        }
        else if (ma == 3)
        {
            cout << 2 << " " << 'B' << endl;
            return 0;
        }
        else if(ma == 2 )
        {
            cout << 2 << " " << 'C' << endl;
            return 0;
        }
        else if(ma == 0 )
        {
            cout << 2 << " " << 'D' << endl;
            return 0;
        }
    }
    return 0;
}
