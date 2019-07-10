#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,ans=0;;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n-1; i++)
        cin>>b[i];
    for(i=0; i<n-2; i++)
        cin>>c[i];

    sort(a,a+n);
    sort(b,b+(n-1));
    sort(c,c+(n-2));

    i=0,j=0;
    for(i=0; i<n; i++)
    {
        if(j == n-1)
        {
            cout << a[i] << endl;
            break;
        }
        if(a[i] != b[j++])
        {
            cout << a[i] << endl;
            break;
        }

    }
    i=0,j=0;
    for(i=0; i<n-1; i++)
    {
        if(j == n-2)
        {
            cout << b[i] << endl;
            break;
        }
        if(b[i] != c[j++])
        {
            cout << b[i] << endl;
            break;
        }

    }
    return 0;
}
