#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int a[n],b[n],c[n]= {0},sum=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
        {
            c[i]=a[i]*20-b[i]*10;
            if(c[i]<0)
                c[i]=0;

        }
        sort(c,c+n);

        cout << c[n-1] << endl;
    }
    return 0;
}
