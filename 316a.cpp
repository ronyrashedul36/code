#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,ma=0,x=0,l;
    cin>>n>>m;
    int a[n]= {0};
    for(i=0; i<m; i++)
    {
        ma=0;
        l=0;
        for(j=0; j<n; j++)
        {
            cin>>x;
            if(ma<x)
            {
                ma=x;
                l=j;
            }
        }

        a[l]++;
    }
    x=0;
    ma=0;
    for(i=0; i<n; i++)
    {
        ///cout << a[i] << " ";

        if(ma<=a[i] && x==0)
        {
            ma=a[i];
            x=1;
            l=i;
        }
        if(a[i]>ma) {
            l=i;
            ma=a[i];
        }

    }
    cout << l+1 << endl;
    return 0;
}
